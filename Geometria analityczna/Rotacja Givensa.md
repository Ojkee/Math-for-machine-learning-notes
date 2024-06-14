Niech $V$ będzie $n$-wymiarową [[Przestrzenie wektorowe|przestrzenią]] euklidesową, a $\Phi:V\to V$ [[Automorfizm|automorfizmem]] z [[Macierz przekształcenia|macierzą transformacji]]
$$
\newcommand{\bs}[1]{\boldsymbol{#1}}
\bs{R}_{ij}(\Theta):=
\begin{bmatrix}
\bs{I}_{i-1} & \bs{0} & \dots & \dots & \bs{0} \\
\bs{0} & \textcolor{red}{\cos\Theta} & \bs{0} & \textcolor{\red}{-\sin\Theta} & \bs{0}\\
\bs{0} & \bs{0} & \bs{I}_{j-i-1} & \bs{0} & \bs{0} \\
\bs{0} & \textcolor{red}{\sin\Theta} & \bs{0} & \textcolor{red}{\cos\Theta} & \bs{0} \\
\bs{0} & \dots & \dots & \bs{0} & \bs{I}_{n-j}
\end{bmatrix} 
\in \mathbb{R}^{n\times n},
$$
określoną dla $1\le i \lt j \le n$ oraz $\Theta\in\mathbb{R}$. Macierz $\boldsymbol{R}_{ij}(\Theta)$ jest nazywana macierzą obrotu Givensa.

Macierz $\boldsymbol{R}_{ij}(\Theta)$ jest zmodyfikowaną macierzą jednostkową $\boldsymbol{I}_n$, w której
$$
r_{ii}=\cos\Theta,\qquad 
r_{ij}=-\sin\Theta,\qquad
r_{ji}=\sin\Theta,\qquad
r_{jj}=\cos\Theta
$$
