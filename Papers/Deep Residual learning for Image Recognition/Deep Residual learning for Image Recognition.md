### Introduction
Authors discuss how important depth of networks is, but that also arise question 'Is learning as easy as stacking layers?'. 
The problem in this question refers to vanishing/exploding gradients and it is addressed with concepts such as 'normalized initialization' and 'intermediate normalization layers'.

When deeper networks are able to start converging, a degradation problem has been exposed: with the network depth increasing, accuracy gets saturated and then degrades rapidly.
Unexpectedly, such degradation is not caused by overfitting, and adding more layers to a suitably deep model leads to higher training error.

This paper addresses the degradation of training accuracy problem by introducing a deep residual learning framework. 

Formally, denoting the desired underlying mapping as $\mathcal{H}(x)$, we let the stacked nonlinear layers fit another mapping of $\mathcal{F}(x) := \mathcal{H}(x) − x$. The original mapping is recast into $\mathcal{F}(x)+x$.
We hypothesize that it is easier to optimize the residual mapping than to optimize the original, unreferenced mapping. To the extreme, if an identity mapping were optimal, it would be easier to push the residual to zero than to fit an identity mapping by a stack of nonlinear layers.

Essentially the formulation $\mathcal{F}(x)+x$ is 'shortcut connection' in feedforward neural networks.
Skipping connection can occur across one or more layers.
Identity shortcut connections add neither extra parameter nor computational complexity.
The entire network can still be trained end-to-end by SGD with backpropagation.

### Related work
- **Residual Representations** 
In image recognition, VLAD is a representation that encodes by the residual vectors with respect to a dictionary, and Fisher Vector can be formulated as a probabilistic version of VLAD.
In low-level vision and computer graphics, for solving Partial Differential Equations (PDEs), the widely used Multigrid method reformulates the system as sub problems at multiple scales, where each sub problem is responsible for the residual solution between a coarser and a finer scale.
An alternative to Multigrid is hierarchical basis preconditioning, which relies on variables that represent residual vectors between two scales.

- **Shortcut Connections**
An early practice of training multi-layer perceptrons (MLPs) is to add a linear layer connected from the network input to the output.
In, a few intermediate layers are directly connected to auxiliary classifiers for addressing vanishing/exploding gradients.
The papers propose methods for centering layer responses, gradients, and propagated errors, implemented by shortcut connections.
Concurrent with our work, 'highway networks' present shortcut connections with gating functions.
These gates are data-dependent and have parameters, in contrast to our identity shortcuts that are parameter-free.
When a gated shortcut is 'closed' (approaching zero), the layers in highway networks represent non-residual functions.
On the contrary, our formulation always learns residual functions; our identity shortcuts are never closed, and all information is always passed through, with additional residual functions to be learned.

### Deep Residual Learning
#### Residual Learning
Let us consider:
- $\mathcal{H}(x)$ - underlying mapping to be fit by a few stacked layers with $x$ as input to first layer

When $\mathcal{H}(x)$ is a complicated nonlinear function that the network needs to approximate, it is easier to learn the differences between the input $x$ and the function $\mathcal{H}(x)$.
Thus, by defining $\mathcal{F}(x) := \mathcal{H}(x) - x$ (assuming input and output are the same dimension), the original function can be expressed as $\mathcal{H}(x) = \mathcal{F}(x) + x$.

#### Identity Mapping by Shortcuts
![[Pasted image 20241226154024.png]]

Figure above shows building block for Residual learning and it is defined as:
![[Pasted image 20241226154153.png]]
where $x$ and $y$ are the input and output vectors of the layers considered. 
The function $\mathcal{F}(x, \{W_i\})$ represents the residual mapping to be learned. 

In the Figure block has two layers $\mathcal{F} =W_2\sigma (W_1x)$ in which $\sigma$ denotes $ReLU$ and the biases are omitted for simplifying notations.
The operation $\mathcal F + x$ is performed by shortcut connection and element-wise addition.

Note that the shortcut connection doesn't introduce new parameter.

When the dimensions of $x$ and $\mathcal{F}$ differ, $x$ can be linearly projected using $W_s$ through the shortcut connection to match the dimensions.
![[Pasted image 20241226155146.png]]

We also note that although the above notations are about fully-connected layers for simplicity, they are applicable to convolutional layers.
The function $\mathcal F(x, {W_i})$ can represent multiple convolutional layers.
The element-wise addition is performed on two feature maps, channel by channel.

#### Network Architectures
- **Plain Network**
VGG net with the convolutional layers mostly have $3\times 3$ filters and follow two simple design rules:
- (i) for the same output feature map size, the layers have the same number of filters
- (ii) if the feature map size is halved, the number of filters is doubled so as to preserve the time complexity per layer
We perform downsampling directly by convolutional layers that have a stride of 2.
The network ends with a global average pooling layer and a 1000-way fully-connected layer with softmax.

- **Residual Network**
Based on plain network above with additional shortcuts.
![[Pasted image 20241226163342.png]]
When dimension of input and output are equal then shortcut can be applied directly. 
If output dimension is greater, we consider such options:
- The shortcut still performs identity mapping with extra zero entries padded (no additional parameter)
- The projection shortcut is used do match dimension (done by $1\times 1$ convolutions)
When the shortcuts go across feature maps of two sizes, they are performed with stride of $2$.

#### Implementation
- The image is resized with its shorter side randomly sampled in $[256, 480]$ for scale augmentation.
- A $224\times 224$ crop is randomly sampled from an image or its horizontal flip, with the per-pixel mean subtracted.
- The standard color augmentation is used.
- Batch normalization (BN) is adopted right after each convolution and before activation.
- We initialize the weights as in '*Delving deep into rectifiers: Surpassing human-level performance on imagenet classification*' and train all plain/residual nets from scratch.
- We use SGD with a mini-batch size of $256$.
- The learning rate starts from $0.1$ and is divided by $10$ when the error plateaus, and the models are trained for up to $60 \times 104$ iterations.
- We use a weight decay of $0.0001$ and a momentum of $0.9$.
- No dropout.

### Experiments
#### ImageNet Classification
We evaluate our method on the ImageNet 2012 classification dataset that consists of 1000 classes.
The models are trained on the 1.28 million training images, and evaluated on the 50k validation images.

- **Plain Networks**
We first evaluate 18-layer and 34-layer plain nets.
The 34-layer plain net is in Fig. above (middle). The 18-layer plain net is of a similar form.
![[Pasted image 20241226164741.png]]
Down-sampling is performed by conv3_1, conv4_1, and conv5_1 with a stride of $2$.

34-layer plain net has higher training error throughout the whole training procedure, even though the solution space of the 18-layer plain network is a subspace of that of the 34-layer one.

These plain networks are trained with BN, which ensures forward propagated signals to have non-zero variances.
We also verify that the backward propagated gradients exhibit healthy norms with BN. So neither forward nor backward signals vanish.

- **Residual Networks**
Next we evaluate 18-layer and 34- layer residual nets (*ResNets*).
The baseline architectures are the same as the above plain nets, expect that a shortcut connection is added to each pair of $3\times 3$ filters. 
In the first comparison 
![[Pasted image 20241226165413.png]]
![[Pasted image 20241226165441.png]]
we use identity mapping for all shortcuts and zero-padding for increasing dimensions. 
So they have no extra parameter compared to the plain counterparts. 
We have three major observations from Figs above.

First, the situation is reversed with residual learning – the 34-layer *ResNet* is better than the 18-layer ResNet (by 2.8%). 
More importantly, the 34-layer ResNet exhibits considerably lower training error and is generalizable to the validation data.
This indicates that the degradation problem is well addressed in this setting and we manage to obtain accuracy gains from increased depth.

Second, compared to its plain counterpart, the 34-layer *ResNet* reduces the top-1 error by 3.5%, resulting from the successfully reduced training error.

Last, we also note that the 18-layer plain/residual nets are comparably accurate, but the 18-layer *ResNet* converges faster. When the net is 'not overly deep' (18 layers here), the current SGD solver is still able to find good solutions to the plain net.
In this case, the *ResNet* eases the optimization by providing faster convergence at the early stage.

- **Identity vs. Projection Shortcuts**
![[Pasted image 20241226170640.png]]
In Table above we compare three options:
- (A) zero-padding shortcuts are used for increasing dimensions, and all shortcuts are parameter-free 
- (B) projection shortcuts are used for increasing dimensions, and other shortcuts are identity
- (C) all shortcuts are projections

The Table shows that all three options are considerably better than the plain counterpart.
The small differences among A/B/C indicate that projection shortcuts are not essential for addressing the degradation problem.

- **Deeper Bottleneck Architectures**
Because of concerns on the training time that we can afford, we modify the building block as a bottleneck design.
For each residual function $\mathcal F$, we use a stack of $3$ layers instead of 2.
The three layers are $1\times 1$, $3\times 3$, and $1\times 1$ convolutions, where the $1\times 1$ layers are responsible for reducing and then increasing (restoring) dimensions, leaving the 3×3 layer a bottleneck with smaller input/output dimensions.
The parameter-free identity shortcuts are particularly important for the bottleneck architectures.
If the identity short-cut is replaced with projection, one can show that the time complexity and model size are doubled, as the shortcut is connected to the two high-dimensional ends.
So identity shortcuts lead to more efficient models for the bottleneck designs.

