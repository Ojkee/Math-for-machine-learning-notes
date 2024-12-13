This architecture focuses on discrete sequences as an output. Each output step points to input element. 
![[Pasted image 20241213121334.png]]

### The main contributions of this paper
- Present new architecture called Pointer Net, which deals with te problem of representing variable length dictionaries by using a softmax probability distribution as a 'pointer'.
- Apply the Pointer Net model to algorithmic problems including geometry.

### Models
#### Sequence-to-Sequence
This kind of model computes conditional probability $p(C^{\mathcal{P}}|\mathcal P; \theta)$ using parametric model to estimate the terms of probability chain rule
![[Pasted image 20241213122256.png]]
with training pair $(\mathcal P, \mathcal C^{\mathcal P})$, sequence of $n$ vectors $\mathcal P=\{P_1, \dots,P_n\}$, sequence of indices $m(\mathcal P)$ each in range of $[1, n]$ .

The parameters of the model are learnt by maximizing the conditional probabilities for training set 
![[Pasted image 20241213123015.png]]
where the sum is over training examples.

During inference, given a sequence $\mathcal P$, the learnt parameters $\theta^{*}$  are used to select the sequence $\hat{\mathcal C}^{\mathcal P}$ with highest probability 
$$
\hat{\mathcal C}^\mathcal P=
\arg\max p(\mathcal C^\mathcal P|\mathcal P;\theta^*)
$$
Finding optimal $\hat{\mathcal C}$ is computationally impractical because of the combinatorial number of possible output sequences. To find the best possible sequence authors used beam search procedure given by beam size.

In this model, the output dictionary size for all symbols $C_i$ is fixed and equal to $n$, since the outputs are chosen from the input, so that is required to train a separate model for each $n$ and in consequence it prevent from learning solutions to problems that have an output dictionary with size that depends on the input sequence length. 

#### Content Based Input Attention
The vanilla sequence-to-sequence model produces the entire output sequence $\mathcal C^{\mathcal P}$ using the fixed dimensional state of the recognition RNN at the end of the input sequence $\mathcal P$. This constrains the amount of information and computation that can flow through to the generative model.
The attention model ameliorates this problem by augmenting the encoder and decoder RNNs with an additional neural network that uses an attention mechanism over the entire sequence of encoder RNN states.

For notation purposes, let us define the encoder and decoder hidden states as $(e_1,\dots , e_n)$ and $(d_1, \dots, d_{m(\mathcal P)})$, respectively. For the LSTM RNNs, we use the state after the output gate has been component-wise multiplied by the cell activations.
We compute the attention vector at each output time $i$ as follows: 
![[Pasted image 20241213134306.png]]
where softmax normalizes the vector $u^i$ (of length $n$) to be the 'attention' mask over the inputs, $v$ is learnable vector and $W_1$ and $W_2$ are learnable square matrices.
Lastly, $d^′_i$ and $d_i$ are concatenated and used as the hidden states from which we make predictions and which we feed to the next time step in the recurrent model.

#### Ptr-Net
To solve Sequence-to-Sequence fixed size output dictionary problem Pointer-Net is modeling 
$$
p(C_i|C_1\dots,C_{i-1},\mathcal P)
$$
using attention mechanism (3) as follows:
![[Pasted image 20241213134853.png]]
where softmax normalizes the vector $u^i$ (of length $n$) to be an output distribution over the dictionary of inputs.
Here, we do not blend the encoder state $e_j$ to propagate extra information to the decoder, but instead, use $u^i_j$ as pointers to the input elements.
In a similar way, to condition on $C_{i−1}$ as in (1), we simply copy the corresponding $P_{C_{i−1}}$ as the input. 

### Motivation and Dataset Structure
Each problem has training set as points $\mathcal P = \{P_1,\dots,P_n\}$ with $n$ elements, where $P_j = (x_j, y_j)$.
In all cases authors sample points from a uniform distribution in $[0,1]\times[0,1]$.
The outputs $\mathcal C^{\mathcal P}=\{C_1,\dots,C_{m(\mathcal P}\}$ are sequences representing the solution associated to the point set $\mathcal P$. 

### Problem examples
- Convex Hull                                      - left
- Delaunay Triangulation                  - center
- Travelling Salesman Problem       -right
![[Pasted image 20241213140008.png]]


