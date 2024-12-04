### Basic RNN structure
![[Pasted image 20241204185544.png]]
![[Pasted image 20241204183332.png]]
It has very simple structure with single tanh layer.

### The Problem of Long-Term Dependencies
Predicting the next token of given context is proportionally harder with length of gap of crucial information.
##### Examples given in paper
- the clouds are in the sky
Predicting word 'sky' doesn't require further context than this sentence. 
- I grew up in France... I speak fluent French
Last sentence suggest to predict word which is name of some language, but to narrow it down to the word 'French' we need much further context, in that example the previous sentence.

The bigger gap the harder it is for RNN to connect information.

### LSTM Networks
Explicitly designed to avoid the long-term dependency problem.
Similarly to vanilla RNN also has this chain like structure, but instead of having single Dense layer, it contains four with special interactions.
![[Pasted image 20241204183708.png]]
![[Pasted image 20241204183735.png]]
Each line is a vector.

### The Core Idea Behind LSTMs
The key thing is the state cell. 
![[Pasted image 20241204184650.png]]
It is responsible to catch aforementioned long-term dependencies.

It changes via element-wise operations of gated input.
![[Pasted image 20241204185034.png]]
Gates are mechanisms that regularizes some states. Notice multiplication with values of ranged $[-1, 1]$. We can interpret that as 'how sure it is to forget last information'.

### Step-by-Step LSTM Walk Through 
As we provide input vector, LSTM firstly looks at $h_{t-1}$ which is previous output and concatenates with input, then performs forward pass with Dense Layer with sigmoid activation, given result is being used as 'forget gate' to $C_{t-1}$ state cell -> $f_t$.
![[Pasted image 20241204191442.png]]

The next step is to decide what new information we're going to store in cell state.
First part is forward pass $\text{concat}(x_t, h_{t-1})$ with other Dense Layer with sigmoid treated again as a gate -> $i_t$.
Second part on same input LSTM calculates forward pass with yet other Dense Layer but activated with tanh this time. This operation gives us new candidates -> $\tilde{C}_t$.
Both result vectors are being multiplied element-wise and updates $C$.
![[Pasted image 20241204193046.png]]

In perspective of cell state $C$ update looks like this
![[Pasted image 20241204193310.png]]

The last step is producing current output $h_t$. Again LSTM calculate forward pass of concatenated last output $h_{t-1}$ and current input $x_t$ with 4th and last sigmoid Dense Layer -> $o_t$.
Then we apply element-wise tanh on previously calculated cell state $C_t$ and again perform element-wise multiplication with $o_t$ -> $h_t$.
![[Pasted image 20241204194551.png]]

### Variants on Long Short Term Memory
![[Pasted image 20241204194636.png]]

![[Pasted image 20241204194750.png]]

GRU
![[Pasted image 20241204194906.png]]