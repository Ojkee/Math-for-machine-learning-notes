Rozkład/faktoryzacja Choleskiego to przykład stosowanej w praktyce i równoważnej pierwiastkowaniu operacji, którą możemy zastosować na [[Symetryczne, dodatnio określone macierze|symetrycznych, dodatnio określonych macierzach]]. 

Symetryczna i dodatnio określona macierz $\boldsymbol{A}$ może być rozłożona na iloczyn $\boldsymbol{A=LL}^T$, gdzie $\boldsymbol{L}$ jest [[Macierz trójkątna|macierzą trójkątną]] dolną z dodatnimi elementami na przekątnej:
$$
\begin{bmatrix}
a_{11} & \dots & a_{1n} \\
\vdots & \ddots & \vdots \\
a_{n1} & \dots & a_{nn}
\end{bmatrix} 
=
\begin{bmatrix}
l_{11} & \dots & 0 \\
\vdots & \ddots & \vdots \\
l_{n1} & \dots & l_{nn}
\end{bmatrix}
\begin{bmatrix}
l_{11} & \dots & l_{n1} \\
\vdots & \ddots & \vdots \\
0 & \dots & l_{nn}
\end{bmatrix}
$$
Macierz $\boldsymbol{L}$ jest unikalna i nazywana czynnikiem Choleskiego macierzy $\boldsymbol{A}$.

Rozkład Choleskiego pozwala również obliczyć [[Wyznacznik|wyznacznik]] w wydajny sposób, ponieważ $\boldsymbol{A=LL}^T$, to 
$$
\det(\boldsymbol{A})=\det(\boldsymbol{L})\det(\boldsymbol{L}^T)=\det(\boldsymbol{L})^2
$$
Tym samym
$$
\det(\boldsymbol{A})=\prod^n_{i=1}l_{ii}^2
$$
ponieważ $\boldsymbol{L}$ jest macierzą trójkątną, której wyznacznikiem jest iloczyn wartości znajdujących się na jej przekątnej.

#### Przykład
![[Screenshot from 2024-06-18 01-31-34.png]]![[Screenshot from 2024-06-18 01-31-41.png]]

