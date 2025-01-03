### Introduction
The symmetries of atomic systems suggest neural networks that operate on graph structured data and are invariant to graph isomorphism might also be appropriate for molecules.
sufficiently successful models could someday help automate challenging chemical search problems in drug discovery or materials science.

In this paper, our goal is to demonstrate effective ma- chine learning models for chemical prediction problems that are capable of learning their own features from molecular graphs directly and are invariant to graph isomorphism.

![[Pasted image 20250102220133.png]]
A Message Passing Neural Network predicts quantum properties of an organic molecule by modeling a computationally expensive DFT calculation.

Here we focus on the QM9 dataset as such a benchmark.
QM9 consists of 130k molecules with 13 properties for each molecule which are approximated by an expensive quantum mechanical simulation method (DFT), to yield 13 corresponding regression tasks.
These tasks are plausibly representative of many important chemical prediction problems and are difficult for many existing methods.
Additionally, QM9 also includes complete spatial information for the single low energy conformation of the atoms in the molecule that was used in calculating the chemical properties.
QM9 therefore lets us consider both the setting where the complete molecular geometry is known and the setting where we need to compute properties that might still be defined in terms of the spatial positions of atoms, but where only the atom and bond information (i.e. graph) is available as input.

In this paper, by exploring novel variations of models in the MPNN family, we are able to both achieve a new state of the art on the QM9 dataset and to predict the DFT calculation to within chemical accuracy on all but two targets.
In particular, we provide the following key contributions:
- We develop an MPNN which achieves state of the art results on all 13 targets and predicts DFT to within chemical accuracy on 11 out of 13 targets 
- We develop several different MPNNs which predict DFT to within chemical accuracy on 5 out of 13 targets while operating on the topology of the molecule alone (with no spatial information as input)
- We develop a general method to train MPNNs with larger node representations without a corresponding increase in computation time or memory, yielding a substantial savings over previous MPNNs for high dimensional node representations

### Message Passing Neural Networks
For simplicity we describe MPNNs which operate on undirected graphs $G$ with node features $x_v$ and edge features $e_{vw}$.

The forward pass has two phases
- a message passing phase 
- a readout phase. 

The **message passing** phase runs for $T$ time steps and is defined in terms of message functions $M_{t}$ and vertex update functions $U_t$.
During the message passing phase, hidden states $h^t_v$ at each node in the graph are updated based on messages $m{t+1}_v$ according to
![[Pasted image 20250103130836.png]]
where in the sum, $N(v)$ denoted the neighbors of $v$ in graph $G$.

The **readout** phase computes a feature vector for the whole graph using some readout function $R$ according to
![[Pasted image 20250103131643.png]]

The message functions $M_t$, vertex update functions $U_t$, and readout function $R$ are all learned differentiable functions.
$R$ operates on the set of node states and must be invariant to permutations of the node states in order for the MPNN to be invariant to graph isomorphism.
In what follows, we define previous models in the literature by specifying the message function $M_t$, vertex update function $U_t$, and readout function $R$ used.

-  **Convolutional Networks for Learning Molecular Fingerprints**
The message function used is $M(h_v, h_w, e{vw})=(h_w,e_{vw})$ where $(.,.)$ denotes concatenation.
The vertex update function used is $U_t(h^t_v, m^{t+1}_v)=\sigma(H_t^{\deg(v)}m^{t+1}_v)$, where $\sigma$ is the sigmoid function, $\deg(v)$ is the degree of vertex $v$ and $H^N_t$ is a learned matrix for each time step $t$ and vertex degree $N$. 
$R$ has skip connections to all previous hidden states $h^t_v$ ans is equal to 
$$
f\bigg(
\sum_{v,t} \text{softmax}(W_th^t_v)
\bigg),
$$
where $f$ is a neural network and $W_t$ are learned readout matrices, one for each time step $t$.
This message passing scheme may be problematic since the resulting message vector is $m^{t+1}_v = (\sum h^t_w, \sum e_{vw})$ , which separately sums over connected nodes and connected edges.
It follows that the message passing is unable to identify correlations between edge states and node states. 

-  **Interaction Networks**
This work considered both the case where there is a target at each node in the graph, and where there is a graph level target.
It also considered the case where there are node level effects applied at each time step, in such a case the update function takes as input the concatenation $(h_v , x_v , m_v )$ where $x_v$ is an external vector representing some outside influence on the vertex $v$.
The message function $M (h_v , h_w, e_{vw})$ is a neural network which takes the concatenation $(h_v , h_w, e_{vw})$.
The vertex update function $U (h_v , x_v , m_v )$ is a neural network which takes as input the concatenation $(h_v , x_v , m_v )$.
Finally, in the case where there is a graph level output, $R = f ( \sum v\in G h^T_v )$ where $f$ is a neural network which takes the sum of the final hidden states $h^T_v$.
Note the original work only defined the model for $T = 1$.

-  **Gated Graph Neural Networks**
The message function used is $M_t(h^t_v , h^t_w, e_{vw}) = A_{e_{vw}} h^t_w$, where $A_{e_{vw}}$ is a learned matrix, one for each edge label $e$ (the model assumes discrete edge types).
The update function is $U_t = GRU(h^t_v , m^{t+1 }_v )$, where GRU is the Gated Recurrent Unit.
This work used weight tying, so the same update function is used at each time step $t$.
Finally
![[Pasted image 20250103142808.png]]
where $i$ and $j$ are neural networks, and $\odot$ denotes element wise multiplication.

-  **Molecular Graph Convolutions**
This work deviates slightly from other MPNNs in that it introduces edge representations $e^t_{vw}$ which are updated during the message passing phase.
The message function used for node messages is $M(h^t_v , h^t_w, e^t_{vw}) = e^t_{vw}$.
The vertex update function is $U_t(h^t_v , m^{t+1}_v ) = \alpha(W_1(\alpha(W_0h^t_v ), m^{t+1}_v ))$ where $(., .)$ denotes concatenation, $\alpha$ is the $ReLU$ activation and $W_1, W_0$ are learned weight matrices.
The edge state update is defined by 
$$
e^{t+1}_{vw} =
U _t' (e^t_{vw}, h^t_v , h^t_w) =
\alpha(W_4(\alpha(W_2, e^t_{vw}), \alpha(W_3(h^t_v , h^t_w))))
$$ where the $W_i$ are also learned weight matrices.

-  **Deep Tensor Neural Networks**
The message from $w$ to $v$ is computed by 
![[Pasted image 20250103161530.png]]
where $W^{fc}, W^{cf} , W^{df}$ are matrices and $b_1, b_2$ are bias vectors.
The update function used is $U_t(h^t_v , m^{t+1}_v ) = h^t_v + m^{t+1}_v$ .

The readout function passes each node independently through a single hidden layer neural network and sums the outputs, in particular
![[Pasted image 20250103153243.png]]

-  **Laplacian Based Methods**
These methods generalize the notion of the convolution operation typically applied to image datasets to an operation that operates on an arbitrary graph $G$ with a real valued adjacency matrix $A$.
The operations defined originally result in message functions of the form $M_t(h^t_v , h^t_w) = C^t_{vw}h^t_w$, where the matrices $C^t_{vw}$ are parameterized by the eigenvectors of the graph Laplacian $L$, and the learned parameters of the model.
The vertex update function used is $U_t(h^t_v , m^{t+1}_v ) = \sigma(m^{t+1}_v )$ where $\sigma$ is some point-wise non-linearity (such as $ReLU$).
The model results in a message function $M_t(h^t_v , h^t_w) = c_{vw}h^t_w$ where $c_{vw} = (\deg(v)\deg(w))^{−1/2}A_{vw}$.
The vertex update function is $U^t_v (h^t_v , m^{t+1}_v ) = ReLU(W^tm^{t+1}_v )$.
For the exact expressions for the $C^t{vw}$ and the derivation of the reformulation of these models as MPNNs, see the supplementary material.

#### Moving Forward
One downside of all of these approaches is computation time.
Recent work has adapted the GG-NN architecture to larger graphs by passing messages on only subsets of the graph at each time step.
In this work we also present a MPNN modification that can improve the computational costs.

### Related Work
Although in principle quantum mechanics lets us compute the properties of molecules, the laws of physics lead to equations that are far too difficult to solve exactly.
Therefore scientists have developed a hierarchy of approximations to quantum mechanics with varying tradeoffs of speed and accuracy, such as Density Functional Theory (DFT) with a variety of functionals, the GW approximation, and Quantum Monte-Carlo.
Despite being widely used, DFT is simultaneously still too slow to be applied to large systems (scaling as $O(N^3_e)$ where $N_e$ is the number of electrons) and exhibits systematic as well as random errors relative to exact solutions to Schrödinger’s equation.
For example, to run the DFT calculation on a single 9 heavy atom molecule in QM9 takes around an hour on a single core of a Xeon E5-2660 (2.2 GHz) using a version of Gaussian G09 (ES64L-G09RevD.01).
For a 17 heavy atom molecule, computation time is up to 8 hours. 

#### Examples of related models
- **Combined first-principles calculation and neural-network correction approach for heat of formation. *The Journal of Chemical Physics***
Used neural networks to approximate a particularly troublesome term in DFT called the exchange correlation potential to improve the accuracy of DFT.
However, their method fails to improve upon the efficiency of DFT and relies on a large set of ad hoc atomic descriptors.

- **Generalized neural network representation of high-dimensional potential-energy surfaces**
- **Fast and accurate modeling of molecular atomization energies with machine learning. *Physical review letters***
Attempt to approximate solutions to quantum mechanics directly without appealing to DFT.
In the first case single-hidden-layer neural networks were used to approximate the energy and forces for configurations of a Silicon melt with the goal of speeding up molecular dynamics simulations.
The second paper used Kernel Ridge Regression (KRR) to infer atomization energies over a wide range of molecules.
In both cases hand engineered features were used (symmetry functions and the Coulomb matrix, respectively) that built physical symmetries into the input representation.
Subsequent papers have replaced KRR by a neural network.

### QM9 Dataset
Molecules in the dataset consist of Hydrogen (H), Carbon (C), Oxygen (O), Nitrogen (N), and Fluorine (F) atoms and contain up to 9 heavy (non Hydrogen) atoms.
In all, this results in about 134k drug-like organic molecules that span a wide range of chemistry.
For each molecule DFT is used to find a reasonable low energy structure and hence atom 'positions' are available.

We can group the different properties we try to predict into four broad categories.

First, we have four properties related to how tightly bound together the atoms in a molecule are.
These measure the energy required to break up the molecule at different temperatures and pressures.
These include the atomization energy at $0K, U_0$ (eV), atomization energy at room temperature, $U$ (eV), enthalpy of atomization at room temperature, $H$ (eV), and free energy of atomization, $G$ (eV).

Next there are properties related to fundamental vibrations of the molecule, including the highest fundamental vibrational frequency $\omega_1$ $(cm^{−1})$ and the zero point vibrational energy (ZPVE) (eV).

Additionally, there are a number of properties that concern the states of the electrons in the molecule.
They include the energy of the electron in the highest occupied molecular orbital (HOMO) $\epsilon_{\text{HOMO}}$ (eV), the energy of the lowest unoccupied molecular orbital (LUMO) $\epsilon_{\text{LUMO}}$ (eV), and the electron energy gap ($\Delta\epsilon$ (eV)). 
The electron energy gap is simply the difference $\epsilon_{\text{HOMO}} − \epsilon_{\text{LUMO}}$.

Finally, there are several measures of the spatial distribution of electrons in the molecule.
These include the electronic spatial extent $\langle R^2\rangle$ ($\text{Bohr}^2$), the norm of the dipole moment $\mu$ (Debye), and the norm of static polarizability $\alpha$ ($\text{Bohr}^3$).

### MPNN Variants
For the rest of the paper we use 
- $d$ to denote the dimension of the internal hidden representation of each node in the graph
- $n$ to denote the number of nodes in the graph
Our implementation of MPNNs in general operates on directed graphs with a separate message channel for incoming and outgoing edges, in which case the incoming message $m_v$ is the concatenation of $m^{in}_v$ and $m^{out}_v$.

When we apply this to undirected chemical graphs we treat the graph as directed, where each original edge becomes both an incoming and outgoing edge with the same label.
Note there is nothing special about the direction of the edge, it is only relevant for parameter tying.
Treating undirected graphs as directed means that the size of the message channel is $2d$ instead of $d$.

The input to our MPNN model is a set of feature vectors for the nodes of the graph, $x_v$ , and an adjacency matrix $A$ with vector valued entries to indicate different bonds in the molecule as well as pairwise spatial distance between two atoms.
We experimented as well with the message function used in the GG-NN family, which assumes discrete edge labels, in which case the matrix $A$ has entries in a discrete alphabet of size $k$.
The initial hidden states $h^0_v$ are set to be the atom input feature vectors $x_v$ and are padded up to some larger dimension $d$.
All of our experiments used weight tying at each time step $t$, and a GRU for the update function as in the GG-NN family.

#### Message Functions
- **Matrix Multiplication**
We started with the message function used in GG-NN which is defined by the equation $M (h_v , h_w, e_{vw}) = A_{e_{vw}} h_w$.

- **Edge Network**
To allow vector valued edge features we propose the message function $M (h_v , h_w, e_{vw}) = A(e_{vw})h_w$ where $A(e_{vw})$ is a neural network which maps the edge vector $e_{vw}$ to a $d \times d$ matrix.

- **Pair Message**
One property that the matrix multiplication rule has is that the message from node $w$ to node $v$ is a function only of the hidden state $h_w$ and the edge $e_{vw}$.
In particular, it does not depend on the hidden state $h^t_v$.
In theory, a network may be able to use the message channel more efficiently if the node messages are allowed to depend on both the source and destination node.
Here the message from $w$ to $v$ along edge $e$ is $m_{wv} = f (h^t_w, h^t_v , e_{vw})$ where $f$ is a neural network.

When we apply the above message functions to directed graphs, there are two separate functions used, $M$ in and an $M$ out.
Which function is applied to a particular edge $e_{vw}$ depends on the direction of that edge.

#### Virtual Graph Elements
We explored two different ways to change how the messages are passed throughout the model.
The simplest modification involves adding a separate 'virtual' edge type for pairs of nodes that are not connected.
This can be implemented as a data preprocessing step and allows information to travel long distances during the propagation phase.

We also experimented with using a latent 'master' node, which is connected to every input node in the graph with a special edge type.
The master node serves as a global scratch space that each node both reads from and writes to in every step of message passing.
We allow the master node to have a separate node dimension $d_{master}$, as well as separate weights for the internal update function (in our case a $GRU$).
This allows information to travel long distances during the propagation phase.
It also, in theory, allows additional model capacity (e.g. large values of $d_{master}$) without a substantial hit in performance, as the complexity of the master node model is $O(|E|d^2 + nd^2_{master})$.

#### Readout Functions
We experimented with two readout functions:
- First is the readout function used in GG-NN
- Second is a set2set model

The set2set model is specifically designed to operate on sets and should have more expressive power than simply summing the final node states.
This model first applies a linear projection to each tuple $(h^T_v , x_v)$ and then takes as input the set of projected tuples $T = \{(h^T_v , x_v)\}$.
Then, after $M$ steps of computation, the set2set model produces a graph level embedding $q* t$ which is invariant to the order of the of the tuples $T$.
We feed this embedding $q*t$ through a neural network to produce the output.

#### Multiple Towers
A single step of the message passing phase for a dense graph requires $O(n^2d^2)$ floating point multiplications.
To address this issue we break the $d$ dimensional node embeddings $h^t_v$ into $k$ different $d/k$ dimensional embeddings $h^{t,k}_v$ and run a propagation step on each of the $k$ copies separately to get temporary embeddings $\{\tilde{h}^{t+1, k}_v, v \in G\}$, using separate message and update functions for each copy.
The $k$ temporary embeddings of each node are then mixed together according to the equation
![[Pasted image 20250103181538.png]]
where $g$ denotes a neural network and $(x, y, \dots)$ denotes concatenation, with $g$ shared across all nodes in the graph. 

This mixing preserves the invariance to permutations of the nodes, while allowing the different copies of the graph to communicate with each other during the propagation phase.
This can be advantageous in that it allows larger hidden states for the same number of parameters, which yields a computational speedup in practice.

For example, when the message function is matrix multiplication (as in GG-NN) a propagation step of a single copy takes $O (n^2(d/k)^2)$ time, and there are $k$ copies, therefore the overall time complexity is $O (n^2d^2/k)$, with some additional overhead due to the mixing network.
For:
- $k = 8$
- $n = 9$
- $d = 200$
we see a factor of 2 speedup in inference time over a 
- $k = 1$
- $n = 9$
- $d = 200$
architecture.

### Input Representation
There are a number of features available for each atom in a molecule which capture both properties of the electrons in the atom as well as the bonds that the atom participates in.
![[Pasted image 20250103182105.png]]

We experimented with making the hydrogen atoms explicit nodes in the graph (as opposed to simply including the count as a node feature), in which case graphs have up to 29 nodes.
Note that having larger graphs significantly slows training time, in this case by a factor of 10.

For the adjacency matrix there are three edge representations used depending on the model.

- **Chemical Graph**
In the absence of distance information, adjacency matrix entries are discrete bond types: single, double, triple, or aromatic.

- **Distance bins**
The matrix multiply message function assumes discrete edge types, so to include distance information we bin bond distances into 10 bins, the bins are obtained by uniformly partitioning the interval $[2, 6]$ into 8 bins, followed by adding a bin $[0, 2]$ and $[6, ∞]$.
These bins were hand chosen by looking at a histogram of all distances.
The adjacency matrix then has entries in an alphabet of size 14, indicating bond type for bonded atoms and distance bin for atoms that are not bonded.
We found the distance for bonded atoms to be almost completely determined by bond type.

- **Raw distance feature**
When using a message function which operates on vector valued edges, the entries of the adjacency matrix are then 5 dimensional, where the first dimension indicates the euclidean distance between the pair of atoms, and the remaining four are a one-hot encoding of the bond type.

### Training
- Each model and target combination was trained using a uniform random hyper parameter search with 50 trials.
- $T$ was constrained to be in the range $3 \le T \le 8$ (in practice, any $T \ge 3$ works)
- Number of set2set computations $M$ was chosen from the range $1 \le M \le 12$
- All models were trained using $SGD$ with the $ADAM$ optimizer
- Batch size 20 for 3 million steps ( 540 epochs)
- The initial learning rate was chosen uniformly between $1e−5$ and $5e−4$
- We used a linear learning rate decay that began between $10$% and $90$% of the way through training and the initial learning rate l decayed to a final learning rate $l* F$ , using a decay factor $F$ in the range $[0.01, 1]$
- The QM-9 dataset has $130462$ molecules in it. We randomly chose $10000$ samples for validation, $10000$ samples for testing, and used the rest for training. We use the validation set to do early stopping and model selection and we report scores on the test set.
- All targets were normalized to have mean $0$ and variance $1$. We minimize the mean squared error between the model output and the target, although we evaluate mean absolute error

