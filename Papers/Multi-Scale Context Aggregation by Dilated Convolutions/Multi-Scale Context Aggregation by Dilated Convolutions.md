### Introduction
Image classification networks integrate multi-scale contextual information via successive pooling and subsampling layers that reduce resolution until a global prediction is obtained.
In contrast, dense prediction calls for multi-scale contextual reasoning in combination with full-resolution output. 

n this work, we develop a convolutional network module that aggregates multi-scale contextual information without losing resolution or analyzing rescaled images.
Unlike pyramid-shaped architectures carried over from image classification, the presented context module is designed specifically for dense prediction.
It is a rectangular prism of convolutional layers, with no pooling or subsampling.
The module is based on dilated convolutions, which support exponential expansion of the receptive field without loss of resolution or coverage.

### Dilated Convolutions
Let:
- $\mathbb F : \mathbb Z^2\to \mathbb R$ be a discrete function.
- $\Omega_r=[-r,r]^2\cap \mathbb Z^2$ and $k:\Omega_r\to\mathbb R$ be a discrete filter of size $(2r+1)^2$ 

The discrete convolution operator $*$ can be defined as 
![[Pasted image 20241228144120.png]]

Let:
- $l$ be a dilation factor 
- $*_l$ be defined as 
![[Pasted image 20241228144233.png]]
which is dilated convolution ($l$-dilated convolution).

The dilated convolution operator can apply the same filter at different ranges using different dilation factors.
Our definition reflects the proper implementation of the dilated convolution operator, which does not involve construction of dilated filters.

Our architecture is motivated by the fact that dilated convolutions support exponentially expanding receptive fields without losing resolution or coverage.

Let:
- $F_0, F_1,\dots,F_{n-1}:\mathbb Z^2\to\mathbb R$ be discrete functions
- $k_0,k_1,\dots,k_{n-2}: \Omega_1\to\mathbb R$ be discrete $3\times 3$ filters
Consider applying the filters with exponentially increasing dilation
![[Pasted image 20241228144935.png]]
Define the receptive field on an element $\boldsymbol p$ in $F_{i+1}$ as the set of elements in $F_0$ that modify the value of $F_{i+1}(\boldsymbol p)$. 
Let the size of receptive field of $\boldsymbol p$ in $F_{i+1}$ be the number of these elements.
The size of the receptive field of each element in $F_{i+1}$ is $(2^{i+2}-1)\times (2^{i+2}-1)$.
![[Pasted image 20241228151135.png]]

### Multi-Scale Context Aggregation
The context module is designed to increase the performance of dense prediction architectures by aggregating multi-scale contextual information.
The module takes C feature maps as input and produces C feature maps as output.
The input and output have the same form, thus the module can be plugged into existing dense prediction architectures.

Each layer has $C$ channels.
The representation in each layer is the same and could be used to directly obtain a dense per-class prediction, although the feature maps are not normalized and no loss is defined inside the module.

The basic context module has 7 layers that apply $3\times 3$ convolutions with different dilation factors.
The dilations are $1, 1, 2, 4, 8, 16,$ and $1$.
Each convolution operates on all layers: 
- these are $3\times 3\times C$ convolutions with dilation in the first two dimensions.
- each of these convolutions is followed by a point-wise truncation $\max(\cdot,0)$.
- final layer performs $1\times 1\times C$ convolutions and produces the output of the module.
![[Pasted image 20241228151747.png]]

Experiments revealed that standard initialization procedures do not readily support the training of the module.
Convolutional networks are commonly initialized using samples from random distributions.
However, we found that random initialization schemes were not effective for the context module.
We found an alternative initialization with clear semantics to be much more effective:
![[Pasted image 20241228151911.png]]
where:
- $a$ is the index of the input feature map 
- b is the index of the output map
This is a form of identity initialization.
This initialization sets all filters such that each layer simply passes the input directly to the next.
A natural concern is that this initialization could put the network in a mode where backpropagation cannot significantly improve the default behavior of simply passing information through.
Backpropagation reliably harvests the contextual information provided by the network to increase the accuracy of the processed maps.

For larger context network we generalize the initialization scheme to account for the difference in the number of feature maps in different layers.
Let
- $c_i$ and $c_{i+1}$ be the number of feature maps in two consecutive layers.
Assume that $C$ divides both $c_i$ and $c_{i+1}. The initialization is:
![[Pasted image 20241228152418.png]]
Here $\epsilon \textasciitilde\mathcal N(0,\sigma^2)$ and $\sigma \ll C/c_{i+1}$.
The use of random noise breaks ties among feature maps with a common predecessor.

### Front End
We implemented and trained a front-end prediction module that takes a color image as input and produces C = 21 feature maps as output.

We adapted the VGG-16 network for dense prediction and removed the last two pooling and striding layers.
Each of these pooling and striding layers was removed and convolutions in all subsequent layers were dilated by a factor of $2$ for each pooling layer that was ablated.
Thus convolutions in the final layers, which follow both ablated pooling layers, are dilated by a factor of $4$. 
This enables initialization with the parameters of the original classification network, but produces higher-resolution output.
The front-end module takes padded images as input and produces feature maps at resolution $64 \times 64$. 
We use reflection padding: the buffer zone is filled by reflecting the image about each edge.

Our front-end module is obtained by removing vestiges of the classification network that are counter-productive for dense prediction.
Most significantly, we remove the last two pooling and striding layers entirely.
We found that simplifying the network by removing the pooling layers made it more accurate.
We also remove the padding of the intermediate feature maps.
Intermediate padding was used in the original classification network, but is neither necessary nor justified in dense prediction.

Training was performed by:
- stochastic gradient descent ($SGD$)
- mini-batch size $14$
- learning rate $10^{−3}$
- momentum $0.9$
- for 60K iterations

### Experiments
![[Pasted image 20241228153935.png]]
![[Pasted image 20241228153851.png]]

Training was performed in two stages.
- (i) we trained on VOC-2012 images and Microsoft COCO images together. Training was performed by SGD with mini-batch size 14 and momentum 0.9. 100K iterations were performed with a learning rate of 10−3 and 40K subsequent iterations were performed with a learning rate of 10−4.
- (ii) we fine-tuned the network on VOC-2012 images only. Fine-tuning was performed for 50K iterations with a learning rate of 10−5. Images from the VOC-2012 validation set were not used for training.

#### Controlled evaluation of context aggregation
We begin by plugging each of the two context modules into the front end.
Since the receptive field of the context network is $67\times 67$, we pad the input feature maps by a buffer of width $33$.
Zero padding and reflection padding yielded similar results in our experiments. 
The context module accepts feature maps from the front end as input and is given this input during training.

![[Pasted image 20241228154706.png]]
Table shows the effect of adding the context module to three different architectures for semantic segmentation.
The first architecture (top) is the front end described in Section '*Front End*'.
It performs semantic segmentation without structured prediction, akin to the original work. 
The second architecture (middle) uses the dense CRF to perform structured prediction. 
The third architecture (bottom) uses the CRF-RNN for structured prediction.

The experimental results demonstrate that the context module improves accuracy in each of the three configurations.
The basic context module increases accuracy in each configuration.
The large context module increases accuracy by a larger margin.
The experiments indicate that the context module and structured prediction are synergisic:
- the context module increases accuracy with or without subsequent structured prediction.

#### Evaluation on the test set
![[Pasted image 20241228155243.png]]
The results are reported in Table above.
We use the large context module for these experiments.
As the results demonstrate, the context module yields a significant boost in accuracy over the front end.
The context module alone, without subsequent structured prediction, outperforms DeepLab-CRF-COCO-LargeFOV. 
The context module with the dense CRF, using the original implementation performs on par with the very recent CRF-RNN. 
The context module in combination with the CRF-RNN further increases accuracy over the performance of the CRF-RNN.
