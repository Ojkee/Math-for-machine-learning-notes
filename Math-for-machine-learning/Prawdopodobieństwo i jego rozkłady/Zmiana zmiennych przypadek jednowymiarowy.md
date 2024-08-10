Rozważmy jednowymiarową [[Zmienna losowa|zmienną losową]] $X$ i odwracalną funkcję $U$, która zwraca inną zmienną losową $Y=U(X)$. Zakładamy, że zmienna losowa $X$ przyjmuje stany $x\in[a,b]$. Zgodnie z definicją [[Dystrybuanta|dystrybuanty]]
$$
F_Y(y)=
P(Y\le y)
$$
Interesuje nas funkcja $U$ zmiennej losowej, zatem
$$
P(Y\le y)=
P(U(X)\le y)
$$
Zakładamy, że $U$ jest odwracalna. Funkcja odwracalna jest ściśle rosnąca lub ściśle malejąca w zadanym przedziale. W przypadku, gdy $U$ jest ściśle rosnąca, to jej odwrotność $U^{-1}$ również. Po zastosowaniu odwrotności $U^{-1}$ na argumentach $P(U(X)\le y)$ otrzymujemy
$$
P(U(X)\le y)=
P(U^{-1}(U(X))\le U^{-1}(y))=
P(X\le U^{-1}(y))
$$
Składnik z prawej strony równaniu jest dystrybuantą $X$. 
Relacja dystrybuanty i [[Funkcja gęstości prawdopodobieństwa|funkcji gęstości prawdopodobieństwa]]
$$
P(X\le U^{-1}(y))=
\int^{U^{-1}(y)}_af(x)\text dx
$$
Otrzymujemy więc dystrybuantę $Y$ w zależności od $x$:
$$
F_X(y)=
\int^{U^{-1}(y)}_af(x)\text dx
$$
Aby otrzymać funkcję gęstości, [[Pochodna|różniczkujemy]] dystrybuantę względem $y$:
$$
f(y)=
\frac{\text d}{\text dy}F_Y(y)=
\frac{\text d}{\text dy}\int^{U^{-1}(y)}_af(x)\text dx
$$
Zauważmy, że całkowanie po prawej stronie względem $x$, a potrzebna jest nam całka względem $y$, ponieważ to względem tej zmiennej różniczkujemy dystrybuantę. Z pomocą przychodzi nam równanie 
$$
\int f(g(x))g'(x)\text dx=\int f(u)\text du, \quad \text{gdzie }u=g(x),
$$
które pozwala przeprowadzić podstawienie:
$$
\int f(U^{-1}(y))U^{-1}(y)\text dy=\int f(x)\text dx, 
\quad \text{gdzie }x=U^{-1}(y)
$$
Po postawieniu po prawej stronie otrzymujemy
$$
f(y)=
\frac{\text d}{\text dy}
\int^{U^{-1}(y)}_af_x(U^{-1}(y))(U^{-1}(y))'\text dy
$$
Index $x$ przypomina nam, że $f_x(U^{-1}(y))$ jest funkcją $x$, a nie $y$. Ponowne zastosowanie podstawionego twierdzenia rachunku całkowania daje:
$$
f(y)=
f_x(U^{-1}(y))\,\cdot\,\Big(
\frac{\text d}{\text dy}U^{-1}(y)
\Big)
$$
Założyliśmy wcześniej, że $U$ jest ściśle rosnąca. Analogicznie dla malejącej mamy to samo tylko, że ze znakiem minus. Uniwersalnie mamy
$$
f(y)=
f_x(U^{-1}(y))\,\cdot\,
\Big|
\frac{\text d}{\text dy}U^{-1}(y)
\Big|
$$
Takie podejście nazywamy techniką zmiany zmiennych. Składnik $|\frac{\text d}{\text dy}U^{-1}(y)|$ mierzy zmianę jednostkowej objętości po zastosowaniu przekształcenia $U$.
