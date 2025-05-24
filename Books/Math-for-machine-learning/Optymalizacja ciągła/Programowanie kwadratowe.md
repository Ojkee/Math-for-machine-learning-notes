Rozważmy przypadek [[Optymalizacja wypukła|minimalizacji wypukłej]], kwadratowej [[Funkcja|funkcji]] celu z [[Przestrzenie afiniczne|afinicznymi]] ograniczeniami
$$
\underset{\boldsymbol x\in\mathbb R^d}{\min}
\frac{1}{2}\boldsymbol x^T
\boldsymbol{Qx} +
\boldsymbol c^T\boldsymbol x
$$
z ograniczeniem 
$$
\boldsymbol{Ax}\le\boldsymbol b,
$$
gdzie $\boldsymbol A\in\mathbb R^{m\times d}$, $\boldsymbol b\in\mathbb R^m$ i $\boldsymbol c\in\mathbb R^d$. Kwadratowa, symetryczna macierz $Q\in\mathbb R^{d\times d}$ jest [[Symetryczne, dodatnio określone macierze|dodatnio określona]], a zatem funkcja celu jest wypukła. Problem z tego równania nazywamy programem kwadratowym. Ma on $d$ zmiennych oraz $m$ ograniczeń liniowych. 

[[Mnożniki Lagrange'a|Lagranżjan]] tego programu kwadratowego to 
$$
\mathfrak L(\boldsymbol{x, \lambda})=
\frac{1}{2}\boldsymbol x^T\boldsymbol{Qx} +
\boldsymbol c^T\boldsymbol x +
\boldsymbol\lambda^T(\boldsymbol {Ax}-\boldsymbol b)=
$$
$$
=
\frac{1}{2}\boldsymbol x^T\boldsymbol{Qx}+
(\boldsymbol c + \boldsymbol A^T\boldsymbol\lambda)^T\boldsymbol x-
\boldsymbol\lambda^T\boldsymbol b
$$
Przyrównanie [[Pochodna|pochodnej]] $\mathfrak L(\boldsymbol{x, \lambda})$ względem $\boldsymbol x$ do zera daje
$$
\boldsymbol{Qx} +
(\boldsymbol c + \boldsymbol A^T\boldsymbol \lambda) = 0
$$
Zakładając, że $Q$ jest macierzą odwracalną, otrzymujemy 
$$
\boldsymbol x =
-\boldsymbol Q^{-1}(\boldsymbol c+\boldsymbol A^T\boldsymbol\lambda)
$$
Po podstawieniu równania do problemu pierwotnego z lagranżjanem $\mathfrak L(\boldsymbol{x, \lambda})$ otrzymujemy lagranżjan problemu dualnego 
$$
\mathfrak D(\boldsymbol\lambda) =
-\frac{1}{2}(\boldsymbol c+\boldsymbol A^T\boldsymbol \lambda)^T
\boldsymbol {AQ}^{-1}
(\boldsymbol c+\boldsymbol A^T\boldsymbol \lambda) -
\boldsymbol\lambda^T\boldsymbol b
$$
Stąd problem dualny możemy zapisać jako
$$
\underset{\boldsymbol\lambda\in\mathbb R^m}{\max}\,\,
-\frac{1}{2}(\boldsymbol c+\boldsymbol A^T\boldsymbol \lambda)^T
\boldsymbol {AQ}^{-1}
(\boldsymbol c+\boldsymbol A^T\boldsymbol \lambda) -
\boldsymbol\lambda^T\boldsymbol b
$$
Z ograniczeniem 
$$
\boldsymbol\lambda\ge\boldsymbol0
$$

#### Przykład
![[Screenshot from 2024-07-08 19-02-51.png]]
