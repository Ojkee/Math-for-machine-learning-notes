This paper is about implementing other deep learning models from other scientific papers. In this case author is implementing Transformer. 

Datasets used for training:
- WMT 2014 English-German (4.5M sentences pairs, 37k tokens vocabulary).
- WMT 2014 English-French (36M sentences, 32k word-piece vocabulary).

Optimizer parameters:
- Adam ($\beta_1=0.9$, $\beta_2=0.98$ and $\epsilon=10^{-9}$).
- Learning rate: $d^{-0.5}_\text{model}$, $\min(\text{step\_num}^{-0.5}, \text{step\_num}\cdot\text{warmup\_steps}^{-1.5})$
- Warmup_steps = 4000

Warmup_steps - Small learning rate at the beginning of the training with gradual increase by the amount of steps, finally reaching target learning rate. Formula example: $Lr(t)=\frac{t}{n}\cdot Lr_{\max}$ with $n$ being number of steps.

Greedy Decoding - Taking next most likely token. 