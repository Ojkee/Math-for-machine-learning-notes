## Function representations
Let $h^l_t ∈ \mathbb{R}^n$ be a hidden state in layer $l$ in timestep $t$.
Moreover, let $T_{n,m} : \mathbb{R}^n \to \mathbb{R}^m$ be an affine transform ($Wx + b$ for some $W$ and $b$).
Let $\odot$ be element-wise multiplication and let $h^0_t$ be an input word vector at timestep $k$.
We use the activations $h^L_t$ to predict $y_t$, since $L$ is the number of layers in our deep LSTM.

RNN dynamics can be described as 
$$
h^{l-1}_t,h^l_{t-1}\to h^l_t
$$
which is deterministic transition from previous to current hidden states. 
Function in classical RNN:
$$
h_t^l=f(T_{n,n}h_{t}^{l-1}+T_{n,n}h_{t-1}^l)
$$
where $f\in\{sigm, tanh\}$.  

LSTM has *memory cell* vector $c^l_t\in\mathbb{R}^n$ which is responsible for *long term* memory. LSTM decides how new information update that cell.  
![[Pasted image 20241210103708.png]]
Both $sigm$ and $tanh$ are applied element-wise.

## Regularization with dropout
The idea is to put dropout layer to the non-recurrent connections.

![[Pasted image 20241210104040.png]]
Dashed lines represent that kind of connections.

![[Pasted image 20241210104225.png]]
In this equation $\boldsymbol{D}$ is dropout operator.

![[Pasted image 20241210104636.png]]
The this line shows a typical path of information flow in the LSTM. The information is affected by dropout $L+1$ times, where $L$ is depth of network. 

