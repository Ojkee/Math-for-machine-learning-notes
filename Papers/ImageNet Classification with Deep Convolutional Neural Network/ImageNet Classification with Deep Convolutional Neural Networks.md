### The Specific contributions of this paper
- Training one of the largest CNN on ImageNet
- Highly-optimized GPU implementation of 2D convolution
- New features which improve performance with reduced training time
- Dealing with overfitting

### The Dataset
ImageNet contains over 15m labeled high-res images with 22k categories. 

Each image has been down-sampled to resolution $256\times 256$ and then center cropped to $224\times 224$ patch with only pre-process being subtracting the mean activity over training set from each pixel, so images were RGB formatted and centered.

### Architecture
#### ReLU Nonlinearity
Standard activation function $f$ used to model a neuron's output with input $x$ was $f(x)=\tanh(x)$
or $f(x)=(1+e^{-x})^{-1}$, but in terms of gradient descent this saturating nonlinearies are slower than the non-saturating nonlinearity $\text{ReLU}$ function $f(x)=\max(0, x)$. 

Deep CNNs with $\text{ReLU}$s train several times faster than equivalents with $\tanh$ units.
![[Pasted image 20241214134623.png]]
Number of iterations required to reach 25% training error on the CIFAR-10 dataset for four-layer CNN. $\text{ReLU}$ is solid line and $\tanh$ is dashed line.

#### Training on Multiple GPUs
Authors use cross-GPU parallelization to fit 1.2m training examples and the model to 2 GPUs.
This technology allows GPUs to read and write from each others memory directly. 
They put half of the kernels on each GPU, but the GPUs can communicate only in certain layers.
The resultant architecture is 'columnar' CNN with not independent columns.

#### Local Response Normalization
$\text{ReLU}$s have the desirable property that they do not require input normalization to prevent them from saturating. 
![[Pasted image 20241214142233.png]]
$b^i_{x, y}$ is the response-normalized activity.
$a_{x, y}^i$ is the activity of a neuron computed by applying kernel $i$ at position $(x, y)$ and then applying the $\text{ReLU}$ nonlinearity. 
Sum runs over $n$ 'adjacent' kernel maps at the same spatial position.
$N$ is the total number of kernels in the layer.

This sort of response normalization implements a form of lateral inhibition inspired by the type found in real neurons, creating competition for big activities amongst neuron outputs computed using different kernels. 

$k,n,\alpha,\beta$ are hyper-parameters whose values are determined using a validation set.
Authors used:
- $k=2$ 
- $n=5$ 
- $\alpha=10^{-4}$
- $\beta=0.75$ 

#### Overlapping Pooling 
In this Model Pooling had following example parameters:
- stride $s$ = 2
- pool size $z$ = 3
With $z$ being greater than $s$, we have pooling overlap.

### Overall Architecture
![[Pasted image 20241214143524.png]]
- 5 convolutional layers
- 3 fully-connected layers
- Output of the last FC layer is fed to a 1000-way softmax.
- The kernels of the second, fourth, and fifth convolutional layers are connected only to those kernel maps in the previous layer which reside on the same GPU.
- The kernels of the third convolutional layer are connected to all kernel maps in the second layer.
- The neurons in the fully-connected layers are connected to all neurons in the previous layer.
- Response-normalization  layers follow the first and second convolutional layers.
- Max-pooling layers follow both response-normalization layers as well as the fifth convolutional layer.
- The $\text{ReLU}$ is applied to the output of every learnable layer.

Flow of data:
- convolutional layer filters the $224\times 224\times 3$ input with 96 kernels of size $11 \times 11\times 3$ with stride $s=4$
- convolutional layer with 256 kernels of size $5\times 5\times 48$ 
- convolutional layer with 384 kernels of size $3\times 3 \times 256$ 
- convolutional layer with 384 kernels of size $3\times 3\times 192$ 
- convolutional layer with 256 kernels of size $3\times 3\times 192$ 
- 3 FC layers with 4096 neurons each

### Reducing Overfitting
#### Data Augmentation
There were employed two distinct forms of data augmentation.

**1st form:**
- translation 
- horizontal reflection

Both technics were computed at run time (so no storage required) on CPU while GPU was still running batch, so this was computationally free.
5 images of size $244\times 244$ were cropped out of original $256\times 256$ images (1 center and 4 corner patches) and then reflected resulting with 10 patches final from 1 original image.

**2nd form:**
- PCA on the set of RGB pixel values throughout the ImageNet training set

To each training image, multiplies of found principal components were added to magnitudes proportional to the corresponding eigenvalues times a random variable drawn from a Gaussian with mean zero and standard deviation equal 0.1. Therefor to each RGB image pixel $I_{xy}=[I^R_{xy},I^G_{xy},I^B_{xy} ]^T$ we add the following quantity:
![[Pasted image 20241214151606.png]]
where $\boldsymbol{p}_i$ and $\lambda_i$ are $i$th eigenvector and eigenvalue of the $3\times 3$ covariance matrix of RGB pixel values, respectively, and $\alpha_i$ is aforementioned random variable.
Each $\alpha_i$ is drawn only once for all the pixels of particular training image until is used for training again, at which point is re-drawn. 

This scheme approximately captures an important property of natural images, that object identity is invariant to changes in the intensity and color of the illumination.

### Dropout
This technique reduces complex co-adaptations of neurons, since a neuron cannot rely on the presence of particular other neurons. It is forced to learn more robust features that are useful in conjunction with many different random subsets of the other neurons. 

Authors used dropout probability of 0.5 in first two FC layers. At the test time they multiplied outputs of each neuron with 0.5, which is approximation to taking the geometric mean of predictive distributions produced by the exponentially-many dropout networks.

This technique roughly doubles the number of iterations required to converge.

### Details of learning
- SGD with momentum of 0.9
- batch size = 128
- weight decay = 0.0005

The update rule for weight $w$ was:
![[Pasted image 20241214153300.png]]
where 
$i$                - iteration index
$v$                - momentum variable
$\epsilon$                - learning rate
$\big\langle\frac{\partial L}{\partial w}|_{w_i}\big\rangle _{D_i}$ - average over the $i$th batch $D_i$ of the derivative of the objective with respect to $w$, evaluated at $w_i$

Weights in each layer were initialized from zero-mean Gaussian with standard deviation 0.01.
Biases of second, fourth and fifth convolutional layers and all FC layers were set to 1 to accelerate early stages of learning with providing the $\text{ReLU}$ positive inputs, and in the remaining layers were set to 0.

Learning rate for all layers was equal and adjusted manually throughout training. Learning rate was divided by 10 when validation error rate stopped improving with current learning rate. At the begging it was equal to 0.01 and reduced 3 times.