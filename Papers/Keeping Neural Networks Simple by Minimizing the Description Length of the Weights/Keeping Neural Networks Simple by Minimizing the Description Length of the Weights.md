The paper takes focus on minimizing amount of the information weights can hold to prevent overfitting. 

Previous possibile ways to limit information in the weights:
- Limitation of the connections in the network
- Divide the connections into subsets and force the weights within a subset to be identical
- Quantize all the weights in the network so that a probability mass $p$ can be assigned to each quantized value. 

![[Pasted image 20241211133000.png]]
Probability mass associated with a quantized value $v$ using quantization width $t$. 

### Applying the Minimum Description Length Principle
For supervised neural networks with a predetermined architecture, the model cost is the number of bits it takes to describe the weights, and the data-misfit cost is the number of bits it takes to describe the discrepancy between the correct output and the output of the neural network on each training case.
We can think in terms of a sender who can see both the input vector and the correct output and a receiver who can only see the input vector. The sender first fits a neural network, of pre-arranged architecture, to the complete set of training cases, then sends the weights to the receiver. For each training case the sender also sends the discrepancy between the net's output and the correct output.
We assume that for output $j$ the data misfits are encoded by assuming that thy are drawn from a zero-mean Gaussian distribution with standard deviation $\sigma_j$. 

### Coding the data misfits
Probability mass that well approximates assumed probability of particular data misfit:
![[Pasted image 20241211131257.png]]

where $d_j^c$ is desired output on training case $c$ and $y_j^c$ is actual output. 
The description length of a data misfits $d_j^c-y_j^c$ in units of $\log_2(e)$ bits (called 'nats') is:
![[Pasted image 20241211132107.png]]

To minimize this description length summed over all $N$ training cases, the optimal value of $\sigma_j$ is the root mean square deviation of the misfits from zero. Using this value, last term in equation above, second term becomes constant giving:
![[Pasted image 20241211132907.png]]
where $k$ is a constant that depends only on $t$.
Description length is minimized by minimizing the usual squared error function.

### A simple method of coding the weights
We assume that the weights of the trained network are quantized and come from a zero-mean Gaussian distribution. Assuming we use a Gaussian with standard deviation $\sigma_j$ for encoding the output errors, we can minimize total description length of the data misfits and weights by minimizing the sum of two terms:
![[Pasted image 20241211134353.png]]
where $c$ is and index over training cases.

### Noisy weights 
#### The expected description length of the weights
An alternative approach to standard practice of learning network with moving point in vector space to place that minimizes cost is to start with a multivariate Gaussian distribution over weight vectors and changing the mean and the variance of this cloud of weight vectors. 

We shall restrict ourselves to distribution in which the weights are independent, so the distribution can be represented by one mean and one variance  per weight. 
Required number of bits to communicate the posterior distribution of a weight is equal to the asymmetric divergence (the Kullback-Liebler distance) from $P$ to $Q$:
![[Pasted image 20241211143531.png]]
where $P$ is Gaussian prior distribution and $Q$ is posterior Gaussian distribution for the weight. 

#### The 'bits back' argument
To communicate a set of noisy weights, the sender first collapses the posterior probability distribution for each weight by using a source of random bits to pick a precise value for the wight.
The probability of picking each possible value id determined by the posterior probability distribution for the weight.
The sender then communicates there precise weights by coding then using some prior Gaussian distribution $P$ so that the communication cost of a precise weight $w$  is:
![[Pasted image 20241211150508.png]]
$t$ must be small compared with the variance of $P$ so $C(w)$ is big. 
Having sent the precise weights, the sender then communicates the data-misfits achieved using those weights. After receiving the weights and the misfits, the receiver can produce the correct outputs.
Once he has the correct outputs he can run learning algorithm used by the sender and recover the exact same posterior probability distribution $Q$, that the sender collapsed in order to get the precise weights.
Having those information receiver can recover all the random bits that the sender used to collapse that distribution to that value.
So these random bits have been successfully communicated and we must subtract them from the overall communication cost to get the true cost of communicating the model and the misfits.
The number of random bits required to collapse the posterior distribution for a weight $Q$, to a particular finely quantized value $w$  is:
![[Pasted image 20241211151335.png]]
So the true expected description length for a noisy weight is determined by taking expectation, under the distribution $Q$:
![[Pasted image 20241211151510.png]]

For Gaussians with different means and variances, the asymmetric divergence is 
![[Pasted image 20241211151558.png]]

#### The expected description length of the data misfits
Due to independence of the Gaussian noise of the weights, we can compute the mean $\mu_{x_h}$ and variance $V_{x_h}$ of the Gaussian-distributed total input $x_h$ received by hidden unit $h$.
Using a table, we can then compute $\mu_h$ and  $V_h$ of the output of the hidden unit, even though this output is not Gaussian distributed. 
Since the noise in the outputs of the hidden units is independent, they independently contribute variance to each linear output unit (linearity comes from having only one hidden layer). The noisy weights $w_{h_j}$ also contribute variance to the output units. Since the output units are linear, their outputs $y_j$ are equal to the total inputs they receive $x_j$. On a particular training case, the output $y_j$ of output unit $j$ is a random variable with the following mean and variance:
![[Pasted image 20241211153824.png]]

### Letting the data determine the prior
Up to this moment we assumed the prior distribution to be fixed. That may lead to picking inappropriate values for the weights.
Authors suggest to optimize mean and variance of that distribution with given data.

#### A more flexible prior distribution for the weights
Suppose, for example, that there are two Gaussians in the mixture. If one Gaussian has mean 1 and low variance and the other Gaussian has mean 0 and low variance it is very cheap to encode low-variance weights with values near 1 or 0.
As before, we ignore the cost of communicating the mixture distribution that is to b e used for coding the weights.
The mixture prior has the form:
![[Pasted image 20241212144709.png]]
where $\pi_i$ is the mixing proportion of Gaussian $P_i$. 
The asymmetric divergence between  mixture prior and the single Gaussian posterior $Q$ for a noisy weight is:
![[Pasted image 20241212144847.png]]
This expression is in terms of the $G_i(P_i, Q)$ the asymmetric divergences between the posterior distribution $Q$ and each of the Gaussians $P_i$ in the mixture prior. 
![[Pasted image 20241212145037.png]]

### A coding scheme that uses a mixture of Gaussians
1. Randomly pick one of the Gaussians in the mixture 
![[Pasted image 20241212145204.png]]
where $r_i$ is its probability.
2. Communicate the choice of Gaussian to the receiver.
![[Pasted image 20241212145312.png]]
3. Communicate the sample value to the receiver using the chosen Gaussian.  
![[Pasted image 20241212145450.png]]
So the expected cost of communicating both the choice of Gaussian and tha sample value ginven that choice is:
![[Pasted image 20241212145548.png]]
4. After receiving samples from all the posterior weight distributions and also receiving the errors on the training cases with these sampled weights, the receiver can run the learning algorithm and reconstruct the posterior distributions from which the weights are sampled. This allows the receiver to reconstruct all of the $G_i$ and hence to reconstruct the random bits used to choose a Gaussian from the mixture. So the number of "bits back" that must be subtracted from the expected cost in equation (21) is:
![[Pasted image 20241212145758.png]]
