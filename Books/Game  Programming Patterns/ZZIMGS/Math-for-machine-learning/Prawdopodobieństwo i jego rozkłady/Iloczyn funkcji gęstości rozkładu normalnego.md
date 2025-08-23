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

Rozważmy zmienną losową o rozkładzie normalnym $X\sim\mathcal N(\boldsymbol{\micro, \Sigma})$. Niech $Y$ będzie zmienną losową taką, że dla zadanej macierzy $\boldsymbol A$ $\boldsymbol{y=Ax}$ jest przekształconą wersją $\boldsymbol x$. [[Średnia|Średnią]] $\boldsymbol y$ możemy obliczyć, korzystając z faktu, że [[Wartość oczekiwana|wartość oczekiwana]] jest operatorem liniowym:
$$
\mathbb E[\boldsymbol y]=
\mathbb E[\boldsymbol{Ax}]=
\boldsymbol{A}\mathbb E[\boldsymbol{x}]=
\boldsymbol{A\micro}
$$
Podobnie [[Wariancja|wariancję]] $\boldsymbol y$
$$
\mathbb V[\boldsymbol y]=
\mathbb V[\boldsymbol{Ax}]=
\boldsymbol A\mathbb V[\boldsymbol x]\boldsymbol A^T=
\boldsymbol{A\Sigma A}^T
$$
Oznacza to, że zmienna losowa $\boldsymbol y$ ma rozkład
$$
p(\boldsymbol y)=
\mathcal N(\boldsymbol y\,|\,\boldsymbol{A\micro}, \boldsymbol{A\Sigma A}^T)
$$
Rozważmy teraz przekształcenie odwrotne. Wiemy, że zmienna losowa ma średnią będącą wynikiem przekształcenia liniowego innej zmiennej losowej. Niech $\boldsymbol A\in\mathbb R^{M\times N}$ będzie macierzą o pełnym [[Rząd|rzędzie]] taką, że $M\ge N$, i niech $\boldsymbol y\in\mathbb R^M$ będzie zmienną losową o rozkładzie normalnym $\boldsymbol{Ax}$, tj.
$$
p(\boldsymbol y)=
\mathcal N(\boldsymbol y\,\,|\,\,\boldsymbol{Ax},\boldsymbol{\Sigma})
$$
Jeśli $\boldsymbol A$ jest odwracalne, to możemy zapisać, że $\boldsymbol{x=A^{-1}y}$ i zastosować przekształcenia z poprzedniego akapitu. Jeżeli w ogólnym przypadku $\boldsymbol A$ może nie być odwracalna. W takiej sytuacji wykorzystuje się podejście podobne do wyznaczania pseudoodwrotności macierzy, którym mnożymy obie strony równania przez $\boldsymbol A^T$, a następnie odwracamy macierz $\boldsymbol A^T\boldsymbol A$, która jest [[Symetryczne, dodatnio określone macierze|symetryczna i dodatnio określona]]. W efekcie otrzymujemy
$$
\boldsymbol y=
\boldsymbol{Ax}\Leftrightarrow(\boldsymbol A^T\boldsymbol A)^{-1}\boldsymbol A^T\boldsymbol y=
\boldsymbol x
$$
A zatem $\boldsymbol x$ jest przekształceniem liniowym $\boldsymbol y$ o następującym rozkładzie:
$$
p(\boldsymbol x)=
\mathcal N(\boldsymbol x|
(
\boldsymbol A^T\boldsymbol A)^{-1}\boldsymbol A^T\boldsymbol y,
(\boldsymbol A^T\boldsymbol A)^{-1}\boldsymbol A^T\boldsymbol
{\Sigma A}(\boldsymbol{A}^T\boldsymbol A)^{-1}
)
$$
