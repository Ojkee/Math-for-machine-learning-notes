Jeżeli $X$ i $Y$ są [[Niezależność statystyczna|niezależnymi]] [[Zmienna losowa|zmiennymi losowymi]] o [[Rozkład Gaussa|rozkładzie normalnym]] oraz jeżeli funkcje gęstości rozkładu tych zmiennych są opisane przez $p(\boldsymbol x)=\mathcal N(\boldsymbol x|\boldsymbol\micro_x,\boldsymbol\Sigma_x)$ i $p(\boldsymbol y)=\mathcal N(\boldsymbol y|\boldsymbol\micro_y, \boldsymbol\Sigma_y)$, to $\boldsymbol{x+y}$ również ma rozkład normalny. 
Funkcja gęstości wynikowego rozkładu to
$$
p(\boldsymbol{x+y})=
\mathcal N(\boldsymbol{\micro_x+\micro_y}, \boldsymbol{\Sigma_x+\Sigma_y})
$$

Ponieważ $p(\boldsymbol{x+y})$ jest gęstością rozkładu normalnego możemy natychmiast wyznaczyć jego [[Średnia|średnią]] i [[Kowariancja|kowariancję]]. 
![[Screenshot from 2024-07-03 17-13-55.png]]

Rozważmy mieszaninę dwóch jednowymiarowych [[Funkcja gęstości prawdopodobieństwa|funkcji gęstości]] rozkładu normalnego 
$$
p(x)=
\alpha p_1(x)+(1+\alpha)p_2(x),
$$
gdzie skalar $0\lt\alpha\lt 1$ to masa mieszaniny, a $p_1(x)$ i $p_2(x)$ to jednowymiarowe funkcje gęstości rozkładu normalnego o różnych parametrach $\micro$ i $\sigma^2$. 
Średnia gęstość mieszaniny $p(x)$ to suma ważona średnich każdej zmiennej losowej:
$$
\mathbb E[x]=
\alpha \micro_1+(1-\alpha)\micro^2
$$
[[Wariancja]] mieszaniny jest $p(x)$ jest określona wzorem
$$
\mathbb V[x]=
[\alpha\sigma^2_1+(1-\alpha)\sigma^2_2]+
([\alpha\micro^2_1+(1-\alpha)\micro^2_2]-
[\alpha\micro_1+(1-\alpha)\micro_2]^2)
$$
