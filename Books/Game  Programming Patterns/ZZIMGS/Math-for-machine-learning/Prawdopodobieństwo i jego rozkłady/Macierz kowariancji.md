[[Wariancja]] [[Zmienna losowa|zmiennej losowej]] $X$ o stanach $\boldsymbol x\in\mathbb R^D$ i [[Średnia|średniej]] $\boldsymbol \micro\in\mathbb R^D$ jest zdefiniowana jako 
$$
\mathbb V_X[\boldsymbol x]=\text{cov}_X[\boldsymbol x, \boldsymbol x] =
$$
$$
=
\mathbb E_X[(\boldsymbol x-\boldsymbol\micro)(\boldsymbol x-\boldsymbol\micro)^T]=
\mathbb E_X(\boldsymbol{xx}^T)-\mathbb E_X[\boldsymbol x]\mathbb E_X[\boldsymbol x]^T=
$$
$$
=
\begin{bmatrix}
\text{cov}[x_1, x_1] & \text{cov}[x_1, x_2] & \dots & \text{cov}[x_1, x_D] \\
\text{cov}[x_2, x_1] & \text{cov}[x_2, x_2] & \dots & \text{cov}[x_2, x_D] \\
\vdots & \vdots & \ddots & \vdots \\
\text{cov}[x_D, x_1] & \text{cov}[x_D, x_2] & \dots & \text{cov}[x_D, x_D] \\
\end{bmatrix}
$$
Macierz o wymiarach $D\times D$ z tego równania jest nazywana macierzą kowariancji wielowymiarowej zmiennej losowej $X$. Macierz kowariancji jest [[Symetryczne, dodatnio określone macierze|symetryczna i dodatnio określona]]. Daje nam informacje o rozrzucie danych. Na przekątnej zawiera wariancje [[Wiarygodność brzegowa|rozkładów brzegowych]]
$$
p(x_i)=
\int p(x_1,\dots,x_D)\text dx_{\backslash i},
$$
gdzie $\backslash i$ oznacza wszystkie zamienne poza $i$. 
