Funkcję $f:\mathbb R^D\to\mathbb R$ nazywamy funkcją gęstości prawdopodobieństwa, jeżeli
1. $\forall\boldsymbol x\in\mathbb R^D: f(\boldsymbol x)\ge0$
2. Całka z $f$ istnieje oraz 
$$
\int_{\mathbb R^D}f(\boldsymbol x)\text d\boldsymbol x= 1
$$
W przypadku funkcji masy prawdopodobieństwa zmiennych [[Prawdopodobieństwo dyskretne|dyskretnych]] całka zmienia się w sumę. 
Zauważmy, że funkcją gęstości [[Prawdopodobieństwo|prawdopodobieństwa]] może być dowolna funkcja $f$, która jest nieujemna, i której całka po całej dziedzinie jest równa 1. $X$ i $f$ są związane poprzez równanie
$$
P(a\ge X\ge b)=\int^b_af(x)\text dx, 
$$
gdzie $a, b\in\mathbb R$, z $x\in\mathbb R$ są wartościami ciągłej [[Zmienna losowa|zmiennej losowej]] $X$. Stany $\boldsymbol x\in\mathbb R^D$ definiuje się analogicznie, reprezentując wektor wartości $x\in\mathbb R$. Ta zależność nazywa się rozkładem zmiennej losowej $X$. 
