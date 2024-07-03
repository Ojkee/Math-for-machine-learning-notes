Rozważmy dwie [[Zmienna losowa|zmienne losowe]] $X, Y$ o stanach $\boldsymbol x, \boldsymbol y\in\mathbb R^D$. Następujące równości są prawdziwe:
$$
\mathbb E[\boldsymbol x+\boldsymbol y]=
\mathbb E[\boldsymbol x]+\mathbb E[\boldsymbol y]
$$
$$
\mathbb E[\boldsymbol x-\boldsymbol y]=
\mathbb E[\boldsymbol x]-\mathbb E[\boldsymbol y]
$$
$$
\mathbb V[\boldsymbol x+\boldsymbol y]=
\mathbb V[\boldsymbol x]+\mathbb V[\boldsymbol y]+
\text{cov}[\boldsymbol{x, y}]+
\text{cov}[\boldsymbol{y, x}]
$$
$$
\mathbb V[\boldsymbol x-\boldsymbol y]=
\mathbb V[\boldsymbol x]+\mathbb V[\boldsymbol y]-
\text{cov}[\boldsymbol{x, y}]-
\text{cov}[\boldsymbol{y, x}]
$$
[[Średnia]] i [[Kowariancja|(ko)]][[Wariancja|wariancja]] posiadają pewne użyteczne własności przydatne w kontekście [[Przestrzenie afiniczne|przekształceń afinicznych]] [[Zmienna losowa|zmiennych losowych]]. Rozważmy zmienną losową $X$ ze średnią $\micro$ i [[Macierz kowariancji|macierzą kowariancji]] $\boldsymbol\Sigma$ oraz deterministyczne przekształcenie afiniczne $\boldsymbol{y=Ax+b}$ wektora $\boldsymbol x$. Otrzymane z tego przekształcenia $\boldsymbol y$ jest zmienną losową z następującymi wektorami średnich i macierzą kowariancji:
$$
\boldsymbol  E_Y[\boldsymbol y]=
\mathbb E_X[\boldsymbol{Ax+b}]=
\boldsymbol A\mathbb E_X[\boldsymbol{x}] + \boldsymbol b=
\boldsymbol{A\micro} + \boldsymbol b
$$
$$
\mathbb V_Y[\boldsymbol y]=
\mathbb V_X[\boldsymbol{Ax+b}]=
\mathbb V_X[\boldsymbol{Ax}]=
\boldsymbol A\mathbb V_X[\boldsymbol{x}]\boldsymbol A^T=
\boldsymbol{A\Sigma A}^T
$$
Ponadto:
$$
\text{cov}[\boldsymbol{x,y}]=
\mathbb E[\boldsymbol{x(Ax+b)^T}]-
\mathbb E [\boldsymbol x]\mathbb E[\boldsymbol{Ax+b}]^T=
$$
$$
=
\mathbb E[\boldsymbol x]\boldsymbol b^T +
\mathbb E[\boldsymbol{xx}^T]\boldsymbol A^T-
\boldsymbol{\micro b}^T-\boldsymbol{\micro\micro}^T\boldsymbol A^T=
$$
$$
=
\boldsymbol{\micro b}^T-
\boldsymbol{\micro b}^T+
(\mathbb E[\boldsymbol{xx}^T]-\boldsymbol{\micro\micro}^T)\boldsymbol A^T=
$$
$$
=
\boldsymbol{\Sigma A}^T,
$$
gdzie $\boldsymbol\Sigma=\mathbb E[\boldsymbol{xx}^T]$ jest kowariancją $X$. 
