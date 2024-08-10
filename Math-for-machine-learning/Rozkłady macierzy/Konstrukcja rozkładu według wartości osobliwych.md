Zacznijmy od stworzenia [[Ortonormalność|ortonormalnego]] zbioru prawostronnych wektorów osobliwych $\boldsymbol{v_1,\dots,v_n}\in\mathbb{R}^n$ i zbioru lewostronnych wektorów osobliwych $\boldsymbol{u_1,\dots,u_m}\in\mathbb{R}^m$. W kolejnym kroku połączymy te zbiory i zażądamy zachowania [[Ortogonalność|ortogonalności]] $\boldsymbol{v}_i$ po przekształceniu przez $\boldsymbol{A}$, ponieważ [[Obraz|obrazy]] $\boldsymbol{Av}_i$ muszą tworzyć zbiór wektorów ortogonalnych. Dalej znormalizujemy otrzymane obrazy za pomocą skalarów, którymi okażą się wartości osobliwe. 

Z [[Twierdzenie spektralne|twierdzenia spektralnego]] wiemy, że [[Wartości i wektory własne|wektory własne]] macierzy symetrycznej tworzą [[Bazy|bazę]] ortonormalną, co oznacza, że macierz taka może zostać [[Diagonalizacja|zdiagonalizowana]]. Co więcej, dla dowolnej macierzy $\boldsymbol{A}\in\mathbb{R}^{m\times n}$ możemy skonstruować [[Symetryczne, dodatnio półokreślone macierze|symetryczną, dodatnio półokreśloną macierz]] $\boldsymbol{A^TA}\in\mathbb{R}^{n\times n}$. A zatem możemy zdiagonalizować macierz $\boldsymbol{A^TA}$:
$$
\boldsymbol{A^TA}=
\boldsymbol{PDP}^T=
\boldsymbol{P}
\begin{bmatrix}
\lambda_1 & \dots & 0 \\
\vdots & \ddots & \vdots \\
0 & \dots & \lambda_n
\end{bmatrix}
\boldsymbol{P}^T,
$$
gdzie $\boldsymbol{P}$ jest macierzą ortogonalną, która składa się z wektorów tworzących ortogonalną bazę wektorów własnych. Wartości $\lambda_i\ge0$ są wartościami własnymi $\boldsymbol{A^TA}$. 
Załóżmy, że równanie rozkładu $\boldsymbol{A=U\Sigma V}^t$ istnieje, więc mamy
$$
\boldsymbol{A^TA}=
(\boldsymbol{U\Sigma V}^T)^T(\boldsymbol{U\Sigma V}^T)=
\boldsymbol{V\Sigma^TU^TU\Sigma V^T},
$$
gdzie $\boldsymbol{U}$ i $\boldsymbol{V}$ to macierze ortogonalne. Ponieważ $\boldsymbol{U^TU=I}$, otrzymujemy
$$
\boldsymbol{A^TA}=
\boldsymbol{V\Sigma^T\Sigma V^T}=
\boldsymbol{V}
\begin{bmatrix}
\sigma_1^2 & 0 & 0 \\
0 & \ddots & 0 \\
0 & 0 & \sigma_n^2
\end{bmatrix}
\boldsymbol{V}^T
$$
Porównując pierwsze i ostatnie równanie mamy
$$
\boldsymbol{V}^T=
\boldsymbol{P}^T
$$
$$
\sigma_i^2=\lambda_i
$$
A zatem wektory własne $\boldsymbol{A^TA}$ tworzące macierz $\boldsymbol{P}$ są prawostronnymi wektorami osobliwymi $\boldsymbol{V}$ i wartości własne $\boldsymbol{A^TA}$ są kwadratami wartości osobliwych z macierzy $\boldsymbol{\Sigma}$. 

Analogicznie możemy wyznaczyć lewostronne wektory osobliwe niezbędne do zapisania macierzy $\boldsymbol{U}$.  
$$
\boldsymbol{AA^T}=
(\boldsymbol{U\Sigma V}^T)(\boldsymbol{U\Sigma V}^T)^T=
\boldsymbol{U\Sigma^TV^TV\Sigma U^T}=
$$
$$
=\boldsymbol{U}
\begin{bmatrix}
\sigma_1^2 & 0 & 0 \\
0 & \ddots & 0 \\
0 & 0 & \sigma_m^2
\end{bmatrix}
\boldsymbol{U}^T
$$
Do ukończenia konstrukcji potrzebne są ortonormalne lewostronne wektory osobliwe. Normalizujemy więc obrazy prawostronnych wektorów osobliwych $\boldsymbol{Av}_i$ i otrzymujemy 
$$
\boldsymbol{u}_i:=
\frac{\boldsymbol{Av}_i}{\|\boldsymbol{Av}_i\|}=
\frac{1}{\sqrt{\lambda_i}}\boldsymbol{Av}_i=
\frac{1}{\sigma_i}\boldsymbol{Av}_i
$$
Po przekształceniu mamy równanie wartości osobliwych
$$
\boldsymbol{Av}_i=\sigma_i\boldsymbol{u}_i, \qquad i=1,\dots,r
$$

#### Przykład
![[Screenshot from 2024-06-19 14-00-01.png]]![[Screenshot from 2024-06-19 14-00-09.png]]
