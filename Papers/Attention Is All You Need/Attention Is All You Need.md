### Introduction
Due to sequential nature of recurrent neural networks (next time stamp $t$ requires hidden sate $h_{t+1}$ to calculate current hidden state $h_t$) it is impossible to parallelize training.
Consequently long sentences (or other long input sequence) may lead to problems with memory constraints and training speed. 

### Background
The goal of reducing sequential computation also forms the foundation of the Extended Neural GPU, ByteNet and ConvS2S, all of which use convolutional neural networks as basic building block, computing hidden representations in parallel for all input and output positions. 

In these models, the number of operations required to relate signals from two arbitrary input or output positions grows in the distance between positions, linearly for ConvS2S and logarithmically for ByteNet.
This makes it more difficult to learn dependencies between distant positions.
In the Transformer this is reduced to a constant number of operations, albeit at the cost of reduced effective resolution due to averaging attention-weighted positions, an effect we counteract with Multi-Head Attention.

Self-attention, sometimes called intra-attention is an attention mechanism relating different positions of a single sequence in order to compute a representation of the sequence.
Self-attention has been used successfully in a variety of tasks including reading comprehension, abstractive summarization, textual entailment and learning task-independent sentence representations.

Transformer is the first transduction model relying entirely on self-attention to compute representations of its input and output without using sequence-aligned RNNs or convolution.

### Model Architecture
Generally most neural transduction models have an encoder-decoder structure.
Encoders maps symbols $(x_1,\dots,x_n)$ to continues representations $\boldsymbol z=(z_1,\dots,z_n)$ and the decoder take $\boldsymbol z$  and generate output sequence $(y_1,\dots,y_m)$ of symbols one element at a time.
At each step the model is auto-regressive, consuming the previously generated symbols as additional input when generating the next.
The Transformer follows this overall architecture using stacked self-attention and point-wise, fully connected layers for both the encoder and decoder, shown in the left and right halves respectively.
![[Pasted image 20250106184014.png]]

#### Encoder and Decoder Stacks
- **Encoder**
It is composed of stack of $N=6$ identical layers.
Each layer has two sub-layers.
1. multi-head self-attention mechanism
2. position-wise fully connected feed-forward network
Authors  employ a residual connection around each of the two sub-layers, followed by layer normalization.
Output of each sub-layer is 
$$
\text{LayerNorm}(x+\text{Sublayer}(x))
$$
where $\text{Sublayer}(x)$ is the function implemented by the sub-layer itself.
Every sub-layer and embedding layers produce outputs of dimension $d=512$ due to residual connections.

- **Decoder**
It is also composed of stack of $N=6$ identical layers.
Every layer is similar to the encoder layer, but instead of 2 sub-layers, decoder has additional, third sub-layer.
This third sub-layer performs multi-head attention over the output of the encoder stack.
And similarly to encoder again, in decoder authors employ residual connections around each of the sub-layers. followed by layer normalization.

Self-attention sub-layer in the decoder stack is was modified to prevent positions from attending to subsequent positions.
Masking, combined with fact that the output embeddings are offset by one position, ensures that the predictions for position $i$ can depend only on the known outputs at positions less than $i$.

#### Attention
An attention function can be described as mapping a query and a set of key-value pairs to an output, where the query, keys, values, and output are all vectors.
The output is computed as a weighted sum of the values, where the weight assigned to each value is computed by a compatibility function of the query with the corresponding key.
![[Pasted image 20250107140106.png]]
#### Scaled Dot-Product Attention
The input consists of queries and keys of dimension $d_k$, and values of dimension $d_v$.
We compute the dot products of the query with all keys, divide each by $\sqrt{d_k}$, and apply a softmax function to obtain the weights on the values.
In practice, we compute the attention function on a set of queries simultaneously, packed together into a matrix $Q$.
The keys and values are also packed together into matrices $K$ and $V$.
We compute the matrix of outputs as:
![[Pasted image 20250106192546.png]]

The two most commonly used attention functions are additive attention, and dot-product (multi-plicative) attention.
Dot-product attention is identical to our algorithm, except for the scaling factor of $\frac{1}{\sqrt{dk}}$.
Additive attention computes the compatibility function using a feed-forward network with a single hidden layer.
While the two are similar in theoretical complexity, dot-product attention is much faster and more space-efficient in practice, since it can be implemented using highly optimized matrix multiplication code.
While for small values of $d_k$ the two mechanisms perform similarly, additive attention outperforms dot product attention without scaling for larger values of $d_k$.
We suspect that for large values of $d_k$, the dot products grow large in magnitude, pushing the softmax function into regions where it has extremely small gradients.
To counteract this effect, matrix is scaled by $\frac{1}{\sqrt{d_k}}$.

#### Multi-Head Attention
Multi-Head Attention is mechanism of more than one attention head stacked and parallelly  computed. 
Queried, keys and values are linearly projected (learned projections) $h$ times to $d_k$, $d_k$ and $d_v$ dimensions, respectively, therefore output is $d_v$-dimensional.
Each output is concatenated and once again projected. 
![[Pasted image 20250107140114.png]]

Multi-head attention allows the model to jointly attend to information from different representation subspaces at different positions. With a single attention head, averaging inhibits this.
![[Pasted image 20250107141927.png]]
Where: 
$$
W_i^Q\in\mathbb R^{d_\text{model}\times d_k}
$$
$$
W_i^K\in\mathbb R^{d_\text{model}\times d_k}
$$
$$
W_i^V\in\mathbb R^{d_\text{model}\times d_v}
$$
$$
W_i^O\in\mathbb R^{hd_v\times d_\text{model}}
$$
are projection matrices.

#### Applications of Attention in out Model
The transformer uses multi-head attention in three different ways:

- In 'encoder-decoder attention' layers, the queries come from the previous decoder layer, and the memory keys and values come from the output of the encoder. This allows every position in the decoder to attend over all positions in the input sequence. This mimics the typical encoder-decoder attention mechanisms in sequence-to-sequence models.

- The encoder contains self-attention layers. In a self-attention layer all of the keys, values and queries come from the same place, in this case, the output of the previous layer in the encoder. Each position in the encoder can attend to all positions in the previous layer of the encoder.

- Similarly, self-attention layers in the decoder allow each position in the decoder to attend to all positions in the decoder up to and including that position. We need to prevent leftward information flow in the decoder to preserve the auto-regressive property. We implement this inside of scaled dot-product attention by masking out (setting to $-\infty$) all values in the input of the softmax which correspond to illegal connections.

#### Position-wise Feed-Forward Networks
In addition to attention sub-layers, each of the layers in our encoder and decoder contains a fully connected feed-forward network, which is applied to each position separately and identically. This consists of two linear transformations with a ReLU activation in between.
![[Pasted image 20250107184705.png]]
While the linear transformations are the same across different positions, they use different parameters from layer to layer.
Another way of describing this is as two convolutions with kernel size 1.
The dimensionality of input and output is $d_\text{model} = 512$, and the inner-layer has dimensionality $d_{f f} = 2048$.

#### Embeddings and Softmax
Similarly to other sequence transduction models, we use learned embeddings to convert the input tokens and output tokens to vectors of dimension $d_\text{model}$.
We also use the usual learned linear transformation and softmax function to convert the decoder output to predicted next-token probabilities.
In our model, we share the same weight matrix between the two embedding layers and the pre-softmax linear transformation.
In the embedding layers, we multiply those weights by $\sqrt{d_\text{model}}$.

#### Positional Encoding 
This technique adds additional information about position of token in sequence, it is essential due to lack of recurrence or convolution.
Encoding is being added to the input embeddings (so it has naturally same dimension $d_\text{model}$) at the bottom of the encoder and decoder stacks.
In this paper authors used $\cos$ function of different frequencies.
![[Pasted image 20250107191245.png]]
where 
- $pos$ is position
- $i$ is the dimension
Each dimension of the positional encoding corresponds to sinusoid.
The wavelengths form a geometric progression from $2\pi$ to $10000 \cdot 2\pi$.

### Why Self-Attention
In this section we compare various aspects of self-attention layers to the recurrent and convolutional layers commonly used for mapping one variable-length sequence of symbol representations $(x_1, \dots, x_n)$ to another sequence of equal length $(z_1, \dots, z_n)$, with $x_i, z_i \in\mathbb R^d$, such as a hidden layer in a typical sequence transduction encoder or decoder.
Motivating our use of self-attention we consider three desiderata.
- Total computational complexity per layer.
- Amount of computation that can be parallelized, as measured by the minimum number of sequential operations required
- The third is the path length between long-range dependencies in the network.

One key factor affecting the ability to learn such dependencies is the length of the paths forward and backward signals have to traverse in the network.
The shorter these paths between any combination of positions in the input and output sequences, the easier it is to learn long-range dependencies.
Hence we also compare the maximum path length between any two input and output positions in networks composed of the different layer types.
![[Pasted image 20250107192050.png]]

### Training
#### Training Data and Batching
**English-German**
- WMT 2014 English-German database
- 4.5 million sentence pairs
- vocabulary of about 37000 tokens

**English-French**
- WMT 2014 English-French dataset
- 36 million sentences
- 32000 word-piece vocabulary

Each training batch contained a set of sentence pairs containing approximately 25000 source tokens and 25000 target tokens.

#### Hardware and Schedule
- Trained on 8 NVIDIA P100 GPUs
- Each training step took 0.4 seconds
- Total training took 100.000 steps for 12 hours

**big models**
- Each training step took 1.0 seconds
-  Total training took 300.000 steps for 3.5 days

#### Optimizer
Adam with such parameters
- $\beta_1 = 0.9$
- $\beta_2 = 0.98$
- $\epsilon = 10^{-9}$

Learning Rate formula
![[Pasted image 20250107193820.png]]
with $warmup\_steps = 4000$.

#### Regularization
Authors used three types
- **Residual Dropout** - to the output of each sub-layer, before it is added to the sub-layer input and normalized ($P_{drop}=0.1$)
- **Residual Dropout** - to the sums of the embeddings and the positional encodings in both the encoder and decoder stacks ($P_{drop}=0.1$)
- **Label Smoothing** - During training, we employed label smoothing of value $\epsilon_{ls} = 0.1$. This hurts perplexity, as the model learns to be more unsure, but improves accuracy and BLEU score.




