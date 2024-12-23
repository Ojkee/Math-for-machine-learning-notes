### Introduction
Larger models encounter problems such as 
- memory limitations
- communication bandwidths on accelerators limitations
That forces users to divide models into partitions and to assign different partitions to different accelerators.

Due to difficulty of model parallelism implementation user is required to make choice among scaling capacity, flexibility and training efficiency and as a result algorithms are task-specific. 
GPipe addresses those challenges.

### The GPipe Library
#### Interface
- $L$ is the number of layers in any deep neural network 
- Each $L_i$ is composed of a forward computation function $f_i$ and corresponding set of parameters $w_1$
- $c_i$ is GPipe specific, optional cost estimation function
- With $K$ number of partitions, $L$ layers can be partitioned into $K$ compose layers, or cells
- $p_k$ consist of consecutive layers between layers $i$ and $j$, and the set of parameters corresponding to $p_k$ is equivalent to the union of $w_i, w_{i+i},\dots,w_j$ and forward function would be $F_k=f_j\circ \dots\circ f_{i+1}\circ f_i$ 
- $B_k$ is back-propagation function that can be computed from $F_k$ using automatic symbolic differentiation
- $C_k$ is the cost estimator and set to $\sum_{l=i}^j c_l$

#### Algorithm
GPipe partitions the network into $K$ cells and places the $k$-th cell on the $k$-th accelerator.
Communication primitives are automatically inserted at partition boundaries to allow data transfer between neighboring partitions.
The partitioning algorithm minimizes the variance in the estimated costs of all cells in order to maximize the efficiency of the pipeline by syncing the computation time across all partitions.

During the forward pass, GPipe first divides every mini-batch of size N into M equal micro-batches, which are pipelined through the K accelerators.
During the backward pass, gradients for each micro-batch are computed based on the same model parameters used for the forward pass.
At the end of each mini-batch, gradients from all M micro-batches are accumulated and applied to update the model parameters across all accelerators.
![[Pasted image 20241223142026.png]]

If batch normalization is used in the network, the sufficient statistics of inputs during training are computed over each micro-batch and over replicas if necessary. 
We also track the moving average of the sufficient statistics over the entire mini-batch to be used during evaluation.

#### Performance Optimization
In order to reduce activation memory requirements, GPipe supports re-materialization. During forward computation, each accelerator only stores output activations at the partition boundaries.
During the backward pass, the $k$-th accelerator recomputes the composite forward function $F_k$.
As a consequence, peak activation memory requirement is reduced to $O(N + \frac{L}{K} \times \frac{N}{M})$, where $\frac{N}{M}$ is the micro-batch size and $\frac{L}{K}$ is the number of layers per partition.
In comparison, memory requirement without re-materialization and partitioning would be $O(N \times L)$, since computing the gradients $b_i$ requires both the upper layer gradients $b_{i+1}$ and the cached activations $f_i(x)$.

As illustrated in Figure above, partitioning introduces some idle time per accelerator, which we refer to as the bubble overhead.
This bubble time is $O( \frac{K−1}{M +K−1} )$ amortized over the number of micro-steps $M$.
In our experiments, we found the bubble overhead to be negligible when $M \ge 4 \times K$.
This is also partly because re-computation during the backward pass can be scheduled earlier, without waiting for the gradients from earlier layers.

### Performance Analyses
Studies focuses on 2 types of models
- CNN - AmoebaNet
- Transformer

The main categories by which those models are measured are
- scalability
- efficiency
- communication cost

**AmoebaNet** experiments were run on *Cloud TPUv2s* with 8 GB per accelerator. 
Input size was fixed and equal $224\times 224$ with mini-batch of size $128$.
Without GPipe maximum size of model had 82M parameters.
With GPipe (re-materialization) that number went up to 318M and that enabled to scale AmoebaNet to 1.8 billion parameters on 8 accelerators, it is $25\times$ upscale.

**Transformer** was trained on *Cloud TPUv3s* with 16 GB accelerator core.
Input size used fixed size of vocabulary and it contained $32k$ words, sequence length $1024$ and batch size $32$.
Each Transformer layer had $2048$ for model dimension, $8192$ for feed-forward hidden dimension and $32$ attention heads.
With re-materialization models scaled up by $2.7\times$ on single accelerator. With $128$ partitions Transformer scaled up to 83.9B parameters witch $298\times$ increase.

![[Pasted image 20241223155336.png]]
Performance increases with number of micro-batches, there is almost linear speedup with the number of accelerators for Transformer model when $M\gg K$.  

### Image Classification
Authors used the pre-trained ImageNet model to fine-tune on a variety of target datasets ranging from general to fine-grained classification.
They changed the number of output units in the last softmax classification layer to the number of classes in the target dataset and initialized the new softmax layer randomly.
All the other layers were initialized from ImageNet pre-training.
Input images to the network during training were resized to $480 \times 480$, horizontally flipped randomly and augmented using cutout.
![[Pasted image 20241223160119.png]]
Training hyper-parameters were the same as those used for ImageNet.
In Table above, authors report the average single-crop test accuracy over 5 fine-tuning runs for each dataset.
Their giant models obtain competitive results on all target datasets.

### Multilingual Machine Translation
Authors used a corpus of parallel documents over 102 languages and English, containing a total of 25 billion training examples, ranging from 104 to 109 per language. This dataset creates a realistic test bed for experiments on scalability by spanning a diverse set of languages from data-scarce (low-resource) to data-rich (high-resource).
For the first time in machine translation, we show that a large enough NMT model can learn the mapping between more than 100 language pairs simultaneously, while achieving better than bilingual model performance for all languages.
Authors comparison is based on the performance of a single Transformer trained on all language pairs in this corpus.
They scale the architecture along two dimensions to stress the flexibility of GPipe:
- along the depth by increasing the number of layers in the model
- along the width by increasing the hidden dimension in the feed-forward layers and the number of attention heads (as well as # attention channels) in multi-head attention layers.

![[Pasted image 20241223162038.png]]
In the report we can observe that there is drastic improvements for low-resource languages (right side), when compared against bilingual baselines.

#### Depth-Width Trade-off
Authors studied the trade-off between depth and width in our multilingual setup and compare the performance of 1.3B wide model and 1.3B deep model.
While the quality of these two models on high-resource languages (left side) is very similar, the deeper model outperforms by margins on low-resource languages, suggesting that increasing model depth might be better for generalization.
Further, the quality improvements for low-resource languages (right side), when comparing the 1.3B deep model against the 400M model, are almost as large as the improvements for high-resource languages, indicating that increasing depth might potentially increase the extent of transfer to low-resource tasks.

#### Large Batches
Authors test the limits of large-batch training by significantly increasing the batch size used for standard Transformer Big training, they started from 260K tokens per batch and increase the effective batch size to 4M, then observe the validation loss and BLEU scores on the high-resource language pair, German-English.

### Design Features and Trade-Offs
The core idea of model parallelism involves partitioning a network into different computational units, which are then placed on different devices.
Conceptually this supports scaling a large spectrum of models to huge capacities, but these approaches typically suffer from low hardware utilization and device communication bottlenecks.
Single Program Multiple Data (SPMD) and pipeline parallelism have been proposed as solutions to counter these challenges.

**Mesh-Tensorflow** follows the SPMD paradigm, which extends the Single Instruction Multiple Data (SIMD) approach used for data parallelism to other tensor dimensions.
SPMD allows splitting every computation across multiple devices, allowing the user to scale the size of individual matrix multiplications linearly with the number of accelerators, but this also introduces high communication overhead between the accelerators due to an abundance of AllReduce-like operations used to combine the outputs of each parallelized matrix multiplication.
This limits the applicability of the approach to scenarios where accelerators are connected with high speed interconnects. Further, SPMD limits the type of operations that can be efficiently scaled, restricting its use to a specific set of network architectures and machine learning tasks.

