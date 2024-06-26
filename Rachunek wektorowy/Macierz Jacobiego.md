Zbiór wszystkich [[Pochodne cząstkowe|pochodnych cząstkowych]] rzędu [[Gradienty funkcji o wartościach wektorowych|funkcji w wartościach wektorowych]] $\boldsymbol f:\mathbb R^n\to\mathbb R^m$ względem wektora $\boldsymbol x\in\mathbb R^n$ nazywamy macierzą Jacobiego. Macierz Jacobiego $J$ jest macierzą w wymiarach $m\times n$, którą definiujemy w następujący sposób:
$$
\boldsymbol J=
\nabla_\boldsymbol x\boldsymbol f=
\frac{\text d \boldsymbol f(\boldsymbol x)}{\text d \boldsymbol x}=
\begin{bmatrix}
\dfrac{\partial\boldsymbol f(\boldsymbol x)}{\partial\boldsymbol x_1} &
\dots &
\dfrac{\partial \boldsymbol f(\boldsymbol x)}{\partial \boldsymbol x_n}
\end{bmatrix} =
\begin{bmatrix}
\dfrac{\partial f_1(\boldsymbol x)}{\partial\boldsymbol x_1} &
\dots &
\dfrac{\partial f_1(\boldsymbol x)}{\partial \boldsymbol x_n} \\
\vdots & & \vdots \\
\dfrac{\partial f_m(\boldsymbol x)}{\partial\boldsymbol x_1} &
\dots &
\dfrac{\partial f_m(\boldsymbol x)}{\partial \boldsymbol x_n} \\
\end{bmatrix}
$$
$$
\boldsymbol x=
\begin{bmatrix}
x_1 \\
\vdots \\
xn
\end{bmatrix}, \qquad
J(i, j)=\dfrac{\partial f_i}{\partial x_j}
$$
Szczególnym przypadkiem równania jest [[Funkcja|funkcja]] $f:\mathbb R^n\to \mathbb R^m$, która odwzorowuje wektor $\boldsymbol x\in\mathbb R^n$ na [[Iloczyn skalarny|skalar]] (np. $f(\boldsymbol x)=\sum^n_{i=1}x_i$). Macierz Jacobiego tej funkcji jest wektorem wierszowym. 

