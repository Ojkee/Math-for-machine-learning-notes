RNNs are special due to its power to perform operations on sequences. 
![[Pasted image 20241203184611.png]]

RNNs combine the input vector with their state vector with a fixed (but learned) function to produce a new state vector.

Sequential processing in absence of sequences - Even if input is fixed size, we can still process it sequentially. 

RNNs take vector $\boldsymbol{x}$ and output vector $\boldsymbol y$, but the vector $\boldsymbol y$ was not only influenced by whole history of inputs from the past. 

### Implementation Vanilla RNN
![[Pasted image 20241203190353.png]]
There are 3 different 'dense layers'. Current hidden state is being computed using W_hh and previous hidden state with addition to W_xh and current input and being activated with tanh (element-wise) to map values non-linearly between -1 and 1. Lastly it computes output with current hidden state and W_hy which is 3rd and last 'dense layer'.
At the beginning first hidden state is initialized as zero vector.

### Character-Level Language Models
![[Pasted image 20241203192007.png]]
In this example we have vocab of length 4 that contains letters $\{h, e, l, o\}$. Then we train our model on sequence of one-hot (1-of-k) encoded letters of word 'hello'. Flow looks like this, first we compute probability of letter $e$ given input $h$, next we compute letter $l$ in context of $he$, then again letter $l$ in context of $hel$ and so on.
Input vectors and output vectors share the same encoding as first position refers to letter $h$, second to $e$ etc. First output $o_1=[1.0, 2.2, -3.0, 4.1]^T$  shows how confident is net to the next letter being $h, e, l, o$  respectively. 

### Project examples
- Paul Graham generator - [data](https://paulgraham.com/articles.html)
- Shakespeare 
- Wikipedia
- Algebraic Geometry (Latex)
- Linux Source Code
- Generating Baby Names

### Visualizing the predictions and the 'neuron' firings
The graphics below represent a neuron from Wikipedia net.
![[Pasted image 20241203195951.png]]
The red rows show top-5 next most likely letters where red are more likely and white are less likely.
Green-blue row shows how excited neuron is on given output, where green means more. Values are between $[-1, 1]$.
Neuron seems very excited about URLs and it's confident about whole 'http://www.' sequence.

Other example is neural that is 'position aware'.
![[Pasted image 20241203201730.png]]