Iloczyn dwóch [[Rozkład Gaussa|rozkładów normalnych]] $\mathcal N(\boldsymbol x|\boldsymbol a,\boldsymbol A)\mathcal N(\boldsymbol x|\boldsymbol b, \boldsymbol B)$ jest rozkładem normalnym $c\mathcal N(\boldsymbol x|\boldsymbol c, \boldsymbol C)$ przeskalowanym za pomocą parametru $c\in\mathbb R$, gdzie
$$
\boldsymbol C=
(\boldsymbol A^{-1}+\boldsymbol B^{-1})^{-1}
$$
$$
\boldsymbol c=
\boldsymbol C(\boldsymbol A^{-1}\boldsymbol a
+\boldsymbol B^{-1}\boldsymbol b)
$$
$$
c=
(2\pi)^{-\frac{D}{2}}|\boldsymbol A+\boldsymbol B|^{-\frac{1}{2}}
\exp
\Big(
	-\frac{1}{2}(\boldsymbol a-\boldsymbol b)^T
	(\boldsymbol A+\boldsymbol B)^{-1}
	(\boldsymbol a-\boldsymbol b)^T
\Big)
$$
Stała skalowania $c$ może być zapisana w postaci funkcji gęstości rozkładu normalnego $\boldsymbol a$ i $\boldsymbol  b$ z [[Macierz kowariancji|macierzą kowariancji]] $\boldsymbol A+\boldsymbol B$, tj. $c=\mathcal N(\boldsymbol b|\boldsymbol a, \boldsymbol A+\boldsymbol B)=N(\boldsymbol a|\boldsymbol b, \boldsymbol A+\boldsymbol B)$. 

$$
c=\mathcal N(\boldsymbol b|\boldsymbol a, \boldsymbol A+\boldsymbol B)=N(\boldsymbol a|\boldsymbol b, \boldsymbol A+\boldsymbol B)
$$
W tym równaniu ani $\boldsymbol a$, ani $\boldsymbol b$ nie są [[Zmienna losowa|zmiennymi losowymi]]. Jednak ten sposób zapisu $c$  jest bardziej kompaktowy niż ten najdłuższe równanie. 

