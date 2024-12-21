### Neural Networks for Sequences and Sets
Consider following supervised task with given training set:
- $n$ pairs $(X^i, Y^i)^n_{i=1}$ 
- $(X^i, Y^i)$ is the $i$th pair of an input and its corresponding target
- $X^i$ and $Y^i$ are represented by sequences, of possibly different lengths: $X^i=\{x^i_1,x^i_2,\dots,x^i_{s_i}\}$ and $Y^i=\{y^i_1,y^i_2,\dots,y^i_{t_i}\}$
Each example have been modeled using conditional probability $P(Y|X)$ with chain rule to decompose.
![[Pasted image 20241220162337.png]]
It's used as an encoder that reads each $x_s\in X$ as follows 
![[Pasted image 20241220162524.png]]
where $h_s$ is the state of the encoder at time $s$, followed by a decoder RNN to produce each $y_t\in Y$ one at a time, given the current state $g_t$ and previous $y_{i-1}$ symbol
![[Pasted image 20241220162652.png]]
This encoding and decoding is reasonable to use when $X$ and $Y$ corresponds to a sequence (like a sentence).

### Input Sets
In this section authors discuss how to extend Seq-2-Seq ho handle input and output sets and importance of ordering.

If the order doesn't matter, swapping two input elements $x_i$ and $x_j$ in the set $X$ should not alter encoding.
Example of solution to such situation is 'bag of words' (count dictionary) approach. In this case, the representation is simply a reduction (e.g., addition) of counts, word embeddings, or similar embedding functions, and is naturally permutation invariant. 
An unsatisfying property of using a reduction operation (such as addition) is that it makes the representation quite inefficient: the model operates over a fixed dimensional embedding regardless of the length of the set. It is unlikely that such representation will succeed, as the amount of memory required to encode a length T set (or sequence, for that matter) should increase as a function of T .

#### Input Order Matters
Here authors present some experiments such as:
- Translation where sequences in the context were altered and reversing the order of the input sentence
- Convex hull computation - points were sorted by angle - the task becomes simpler (from $O(n\log n)$ to $O(n)$) and the models obtained were faster to train and had up to 10% higher accuracy

#### Attention Mechanisms
Since we are interested in associative memories we employed a 'content' based attention. This has the property that the vector retrieved from our memory would not change if we randomly shuffled the memory. This is crucial for proper treatment of the input set $X$ as such. In particular, our process block based on an attention mechanism uses the following:
![[Pasted image 20241220184628.png]]
- $i$ indexes through each memory vector $m_i$
- $q_t$ is query vector which allows us to read $r_t$ from memories 
- $f$ is function that computes a single scalar from $m_i$ and $q_t$
- $LSTM$ is an LSTM which computes a recurrent state but which takes no inputs
- $q^*_t$ is the state which this LSTM evolves, and is formed by concatenating the query $q_t$ with resulting attention readout $r_t$
- $t$ is the index which indicates how many 'processing steps' are being carried to compute the state to be fed to the decoder

#### Read, Process, Write
Authors model has three components:
- **reading block** - embeds each $x_i\in X$ using neural network onto a memory vector $m_i$.
- **process block** - an LSTM without inputs or outputs performing $T$ steps of computation over the memories $m_i$. This LSTM keeps updating its state by reading $m_i$ repeatedly using the attention mechanism. At the end of this block, its hidden state $q_T^*$ is an embedding which is permutation invariant to the inputs. 
- **write block** - LSTM pointer network that takes in $q_T^*$ as the context it needs from which to produce the output from the input set, and points at elements of $m_i$, one step at a time. This block is extended version of original pointer network. The original work used a pointer mechanism which, instead of issuing a readout of memory by a weighted sum with a soft pointer, it uses the pointer as part of the loss. We extended this by adding an extra attention step before the pointer (glimpse). This is related to the process block described above, but with the difference that the attention reads happen interleaved between each pointer output.

### Output Sets
 We will consider arbitrary (and non-arbitrary) orders over the variables in $Y$ , and model the conditional probability distribution $P (Y |X)$ following that order for all training examples.

#### Language Modeling
There are three versions of the dataset with three orderings 
- neutral - 'This is a sentence.'
- reversed - '. sentence a is This'
- fixed 3-word reversal - 'a is This \<pad\> . sentence'
Note that higher order n-grams are scrambled in fixed reversal.

#### Parsing 
The task of constituency parsing consists in producing a parse tree given a sentence.
The model proposed by Vinyals is a sentence encoder LSTM followed by a decoder LSTM trained to generate a depth first traversal encoding of the parse tree, using an attention mechanism.
![[Pasted image 20241220201701.png]]

#### Combinatorial Problems
Take, as an example, outputting the indices for the sorted inputs of a set of random numbers, $X$.
Indeed, this is a deterministic function. We can choose to output these indices in some order (e.g., increasing, decreasing, or using any arbitrary fixed permutation), or treat them as a set (a tuple of argsort indices with corresponding ranking).
As a result, there are $n!$ possible outputs for a given $X$, all of which are perfectly valid. If our training set is generated with any of these permutations picked uniformly at random, our mapping (when perfectly trained) will have to place equal probability on $n!$ output configurations for the same input $X$. Thus, this formulation is much less statistically efficient.

Failing to restrict the output equivalence class generally implies much slower convergence (and, thus, requires much more training data).

#### Finding Optimal Ordering while Training
Our proposed solution to deal with the aforementioned drawback is extremely simple: as we train, we let the model decide which is the best ordering in which it will apply the chain rule.
More formally, assume there exists an ordering which maximally simplifies the task, $\pi(X)$ (where $X$ is the input sequence or set, which can be empty). We would like to train the model as $p(Y_{\pi(X)}|X)$. The number of possible orderings is $n!$ where $n$ is the length of the output, and the best order is unknown a priori. 

Since $n!$ can be very large, we could attempt to do (inexact) search as we train the model.
Instead of maximizing the $\log$ probability of $p(Y |X)$ for each training example pair, we also maximize over orderings as follows:
![[Pasted image 20241221132446.png]]
where $\max_{\pi(X_i)}$ is computed either naively, or with an inexact search.

Two ways to explore the space of all orderings:
- Pretrain the model witch a uniform prior over $\pi(X)$ for 1000 steps, which amounts to replacing the $\max_{\pi(X_i)}$
- Pick ordering be sampling $\pi(X)$ according to a distribution proportional to $p(Y_{\pi(X)}|X)$. This costs $O(1)$ model evaluations (naive would be $O(n!)$)
