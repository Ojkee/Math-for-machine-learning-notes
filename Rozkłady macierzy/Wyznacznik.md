Zdefiniowane tylko dla macierzy kwadratowych $\boldsymbol{R}^{n\times n}$ oraz oznaczany jako $\det(\boldsymbol{A})$ lub $|\boldsymbol{A}|$:
$$
\det(\boldsymbol{A})=
\begin{vmatrix}
a_{11} & a_{12} & \dots & a_{1n} \\
a_{21} & a_{22} & \dots & a_{2n} \\
\vdots & & \ddots & \vdots \\
a_{n1} & a_{n2} & \dots & a_{nn}
\end{vmatrix}
$$

Przykładowe wzory na obliczenie wyznacznika:
- [[Reguła Sarrusa]]
- [[Rozwinięcie Laplace'a]]
- Wyznacznikiem macierzy $\boldsymbol{A}\in\mathbb{R}^{n\times n}$ jest iloczyn jej [[Wartości i wektory własne|wartości własnych]]:
$$
\det(\boldsymbol{A})=\prod^{n}_{i=1}\lambda_i,
$$
gdzie $\lambda_i\in\mathbb{C}$ są wartościami własnymi.

Własności wyznacznika macierzy $\boldsymbol{A}\in\mathbb{R}^{n\times n}$:
- $\det(\boldsymbol{AB})=\det(\boldsymbol{A})\det(\boldsymbol{B})$
- $\det(\boldsymbol{A})=\det(\boldsymbol{A}^T)$
- Jeżeli $\boldsymbol{A}$ jest odwracalne to $\det(\boldsymbol{A}^{-1})=\frac{1}{\det(\boldsymbol{A})}$
- Macierze podobne mają ten sam wyznacznik. Z tego powodu wszystkie macierze $\boldsymbol{A}_\Phi$ odwzorowania liniowego $\Phi:V\to V$ mają ten sam wyznacznik. Jest więc niezmienny względem bazy odwzorowania liniowego.
- Dodawanie wielokrotności kolumny/wiersza innej kolumny/wiersza nie wpływa na wartość wyznacznika.
- Przemnożenie kolumny/wiersza przez $\lambda\in\mathbb{R}$ skaluje wyznacznik $\lambda$ razy. W szczególności $\det(\lambda\boldsymbol{A})=\lambda^n\det(\boldsymbol{A})$.
- Zamiana dwóch wierszy/kolumn zamienia znak wyznacznika.

Macierz $\boldsymbol{A}\in\mathbb{R}^{n\times n}$ ma $\det(\boldsymbol{A})\neq0$ wtedy i tylko wtedy, gdy $rz(\boldsymbol{A})=n$. 

