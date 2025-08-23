- Przypadek dyskretnych [[Zmienna losowa|zmiennych losowych]]:
Załóżmy, że istnieje dyskretna zmienna losowa $X$ z [[Funkcja gęstości prawdopodobieństwa|funkcją masy prawdopodobieństwa]] $P(X=x)$ oraz odwracalna funkcja $U(x)$. Rozważmy przekształconą zmienną losową $Y:=U(x)$ z funkcją masy prawdopodobieństwa $P(Y=y)$. Wtedy
$$
P(Y=y)=
P(U(x)=y)=
P(X=U^{-1}(y))
$$
Możemy zaobserwować, że $x=U^{-1}(y)$. Dlatego w przypadku dyskretnych zmiennych losowych przekształcenia bezpośrednio wpływają na poszczególne zdarzenia. 

- Przypadek z użyciem [[Dystrybuanta|dystrybuanty]]:
Te podejście wykorzystuje definicję dystrybuanty $F_X(x)=P(X\le x)$ oraz fakt, że jej pochodną jest [[Funkcja gęstości prawdopodobieństwa|funkcją gęstości prawdopodobieństwa]] $f(x)$. Dla zmiennej losowej $X$ i funkcji $U$ funkcję gęstości prawdopodobieństwa $Y:=U(X)$ możemy wyznaczyć poprzez
1. Znalezienie dystrybuanty:
$$
F_Y(y)=P(Y\le y)
$$
2. [[Pochodna|zróżniczkowanie]] $F_Y(y):$ 
$$
f(y)=
\dfrac{\text d}{\text dy}F_Y(y)
$$
Należy pamiętać, że dziedzina zmiennej losowej mogła ulec zmianie w wyniku zastosowania przekształcenia $U$.

#### Przykład 
![[Screenshot from 2024-07-04 17-13-00.png]]