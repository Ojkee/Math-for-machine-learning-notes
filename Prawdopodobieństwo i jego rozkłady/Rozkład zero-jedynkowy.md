Jest rozkładem pojedynczej binarnej [[Zmienna losowa|zmiennej losowej]] $X$ o stanach $x\in\{0,1\}$. Jego wartość zależy od jednego ciągłego parametru $\micro\in[0,1]$, który reprezentuje [[Prawdopodobieństwo|prawdopodobieństwo]], że $X=1$. Rozkład $\text{Ber}(\micro)$ jest zdefiniowany jako
$$
p(x|\micro)= 
\micro^x(1-\micro)^{1-x}, \quad x\in\{0,1\}
$$
$$
\mathbb E[x]=
\micro
$$
$$
\mathbb V[x]=
\micro(1-\micro),
$$
gdzie $\mathbb E[x]$ i $\mathbb V[x]$ są [[Średnia|średnią]] i [[Wariancja|wariancją]] binarnej zmiennej losowej $X$. 

Przykładem, w którym można wykorzystać ten rozkład, jest próba zamodelowania prawdopodobieństwa wyrzucenia orła w rzucie monetą. 