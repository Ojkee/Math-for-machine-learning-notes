## Concepts 
- Entropy - measures how 'random' or 'generic' or 'disordered' system is. Always Increases monotonically.
- Kolmogorov complexity - string x is the length of the shortest computer program that outputs x. The more complex string x, the longer program that produces x.

![[Pasted image 20241202154452.png]]
Entropy increases monotonically from left to right, but the 'complexity' seems highest in the middle glass.

![[Pasted image 20241202155316.png]]

First given a set on n-bit strings, let $K(\mathbb{S})$ be the number of bits in the shortest computer program that outputs the element of $\mathbb{S}$ and then halts. Also, given such a set $\mathbb{S}$ and an element $x$ of $\mathbb{S}$, let $K(x|\mathbb{S})$ be the length of the shortest program that outputs $x$, given an oracle for testing membership in $\mathbb{S}$. Then we can let the *sophistication* of $x$, or $Soph(x)$, be the smallest possible value of $K(\mathbb{S})$, over all sets $\mathbb{S}$ such that
$$
x\in \mathbb{S}
$$
$$
K(x|\mathbb{S})\ge\log_2(|\mathbb{S}|)-c
$$
for some constant $c$.
1. Any string with small Kolmogorov complexity has small sophistication, since we can let $\mathbb{S}$ be the singleton set $\{x\}$. 
2. Uniformly-random string also has small sophistication, since we can let $\mathbb{S}$ be the set $\{0,1\}^n$ of all $n$-bit strings.
