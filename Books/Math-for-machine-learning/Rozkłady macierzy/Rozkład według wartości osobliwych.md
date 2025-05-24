Inaczej rozkład według wartości szczególnych SVD.
Rozkład istnieje dla każdej macierzy $\boldsymbol{A}\in\mathbb{R}^{m\times n}$. 
#### Twierdzenie
Niech $\boldsymbol{A}\in\mathbb{R}^{m\times n}$ będzie macierzą prostokątną o [[Rząd|rzędzie]] $r\in[0, \min(m,n)]$. Rozkładem $\boldsymbol{A}$ według wartości osobliwych nazywamy następującą dekompozycję:
![[Screenshot from 2024-06-18 19-53-59.png]]
Macierz $\boldsymbol{U}\in\mathbb{R}^{m\times m}$ to macierz [[Ortogonalność|ortogonalna]] składająca się z wektorów kolumnowych $\boldsymbol{u}_i \, (i=1,...,m)$, a $\boldsymbol{V}\in\mathbb{R}^{n\times n}$ to macierz ortogonalna zawierająca wektory kolumnowe $\boldsymbol{v}_j\, (j=1,...,n)$. Ponadto $\boldsymbol{\Sigma}$ jest macierzą w wymiarach $m\times n$, której elementy są zdefiniowane w następujący sposób: dla $i\neq j$ 
$$
\Sigma_{ij}=0, \qquad\Sigma_{ii}=\sigma_i\ge0
$$

Elementy $\Sigma$ leżące na przekątnej $(\sigma_i,i=1,...,r)$ są nazywane wartościami osobliwymi/szczególnymi. Wektory $\boldsymbol{u}_i$ nazywamy lewostronnymi wektorami osobliwymi, a $\boldsymbol{v}_i$ prawostronnymi wektorami osobliwymi. 
Umownie przyjmuje się, że wartości osobliwe są uporządkowane malejąco, tj. 
$$
\sigma_1\ge\sigma_2\ge\sigma_r\ge0
$$
Macierz wartości osobliwych $\Sigma$ jest unikalna. Macierz $\Sigma\in\mathbb{R}^{m\times n}$ jest prostokątna i w szczególności ma ten sam rozmiar co $\boldsymbol{A}$. Oznacza to, że $\Sigma$ zawiera podmacierz [[Macierz diagonalna|diagonalą]] z wartościami osobliwymi i wymaga dodatkowego uzupełnienia zerami. W szczególności, jeśli $m\gt n$, to $\Sigma$ zawiera podmacierz diagonalną, która kończy się $n$-tym wierszu. Wiersze od $n+1$ do $m$-tego zawierają jedynie zera:
$$
\Sigma=
\begin{bmatrix}
\sigma_1 & 0 & 0 \\
0  & \ddots & 0 \\
0 & 0 & \sigma_n \\
0 & \dots & 0 \\
\vdots &  & \vdots \\
0 & \dots & 0
\end{bmatrix}
$$
Jeśli $m\lt n$, to $\Sigma$ zawiera podmacierz diagonalną, która kończy się w $m$-tej kolumnie, a kolumny od $m + 1$ do $n$-tej są wypełniane zerami:
$$
\Sigma=
\begin{bmatrix}
\sigma_1 & 0 & 0 & 0 & \dots & 0 \\
0  & \ddots & 0 & 0 && 0 \\
0 & 0 & \sigma_n & 0 & \dots & 0 \\
\end{bmatrix}
$$

#### Przykład
![[Screenshot from 2024-06-18 23-41-48.png]]
![[Screenshot from 2024-06-18 23-41-58.png]]

#### Interpretacja geometryczna
![[Screenshot from 2024-06-18 23-37-29.png]]
