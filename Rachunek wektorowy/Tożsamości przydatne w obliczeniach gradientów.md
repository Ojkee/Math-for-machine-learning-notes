- $tr(\cdot)$ oznacza [[Ślad|ślad]] macierzy
- $\det(\cdot)$ oznacza [[Wyznacznik|wyznacznik]] macierzy
- $\boldsymbol f(\boldsymbol X)^{-1}$ to odwrotność [[Funkcja|funkcji]] $\boldsymbol f(\boldsymbol X)$, jeżeli taka istnieje

$$
\frac{\partial}{\partial \boldsymbol X}\boldsymbol f(\boldsymbol X)^T=
\Big(\frac{\partial\boldsymbol f(\boldsymbol X)}{\partial \boldsymbol X}\Big)^T
$$
$$
\frac{\partial}{\partial \boldsymbol X}tr(\boldsymbol f(\boldsymbol X))=
tr\Big(\frac{\partial\boldsymbol f(\boldsymbol X)}{\partial \boldsymbol X}\Big)
$$
$$
\frac{\partial}{\partial \boldsymbol X}\det(\boldsymbol f(\boldsymbol X))=
\det(\boldsymbol f(\boldsymbol X))tr
\Big(
\boldsymbol f(\boldsymbol X)^{-1}
\frac{\partial\boldsymbol f(\boldsymbol X)}{\partial \boldsymbol X}
\Big)
$$
$$
\frac{\partial}{\partial \boldsymbol X}(\boldsymbol f(\boldsymbol X))^{-1}=
-\boldsymbol{f}(\boldsymbol X)^{-1}\frac{\partial \boldsymbol f(\boldsymbol X)}{\partial \boldsymbol X}\boldsymbol f(\boldsymbol X)^{-1}
$$
$$
\frac{\partial\boldsymbol a^T\boldsymbol X^{-1}\boldsymbol b}{\partial\boldsymbol X}=
-(\boldsymbol X^{-1})^T\boldsymbol{ab}^T(\boldsymbol X^{-1})^T
$$
$$
\frac{\partial\boldsymbol x^T\boldsymbol a}{\partial\boldsymbol x}=
\boldsymbol a^T
$$
$$
\frac{\partial \boldsymbol a^T\boldsymbol X\boldsymbol b}{\partial\boldsymbol x}=
\boldsymbol x^T(\boldsymbol B+\boldsymbol B^T)
$$
Dla macierzy symetrycznych 
$$
\boldsymbol W:\frac{\partial}{\partial\boldsymbol s}
(\boldsymbol x-\boldsymbol{As})^T\boldsymbol W(\boldsymbol{x}- \boldsymbol{As})=
-2(\boldsymbol x-\boldsymbol{As})^T\boldsymbol{WA}
$$
