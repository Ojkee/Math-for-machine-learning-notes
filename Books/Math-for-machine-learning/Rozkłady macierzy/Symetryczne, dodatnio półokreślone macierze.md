Dla macierzy $\boldsymbol{A}\in\mathbb{R}^{n\times n}$ możemy zawsze znaleźć symetryczną, dodatnio półokreśloną macierz $\boldsymbol{S}\in\mathbb{R}^{n\times n}$
$$
\boldsymbol{S}:=\boldsymbol{A}^T\boldsymbol{A}
$$
Symetria wymaga, aby $\boldsymbol{S}=\boldsymbol{S}^T$, a więc z równania otrzymujemy 
$$
\boldsymbol{S}=\boldsymbol{A^T}A=\boldsymbol{A^T(A^T)^T}=(A^TA)^T=S^T
$$
Ponadto dodatnia półokreśloność wymaga, aby $\boldsymbol{x^TSx}\ge0$. Po podstawieniu otrzymujemy 
$$
\boldsymbol{x^TSx}=
\boldsymbol{x^TA^TAx}=
\boldsymbol{(x^TA^T)(Ax)}=
\boldsymbol{(Ax)^T(Ax)}\ge0
$$
Jeśli $rz(\boldsymbol{A})=n$, to $\boldsymbol{S}:=\boldsymbol{A}^T\boldsymbol{A}$ jest [[Symetryczne, dodatnio określone macierze|symetryczna i dodatnio określona]].
