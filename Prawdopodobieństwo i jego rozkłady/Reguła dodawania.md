Reguła dodawania mówi, że
$$
\begin{equation}
p(\boldsymbol x) =
	\begin{cases}
		\sum_{\boldsymbol y\in\mathcal Y}p(\boldsymbol x, \boldsymbol y) &
		\text {jeżeli } \boldsymbol y \text{ jest dyskretną zmienną losową} \\
		\int_\mathcal Yp(\boldsymbol x, \boldsymbol y)\text d\boldsymbol y &
		\text{jeżeli }\boldsymbol y \text{ jest ciągłą zmienną losową}
	\end{cases}
\end{equation},
$$
gdzie $\mathcal Y$ są stanami [[Przestrzeń docelowa|przestrzeni docelowej]] [[Zmienna losowa|zmiennej losowej]] Y. 
Oznacza to, że sumujemy lub całkujemy zbiór stanów $\boldsymbol y$ zmiennej losowej $Y$. 
Reguła dodawania nazywana jest również własnością marginalizacji. 
Reguła dodawania wiąże wspólny rozkład [[Prawdopodobieństwo|prawdopodobieństwa]] z rozkładem [[Prawdopodobieństwo brzegowe|brzegowym]]. W ogólnym przypadku, gdy wspólny  rozkład zawiera więcej niż dwie zmienne losowe, regułę dodawania możemy zastosować do dowolnego podzbioru zmiennych losowych. W rezultacie możemy potencjalnie otrzymać brzegowy więcej niż jednej zmiennej losowej. Jeśli $\boldsymbol x=\{x_1,\dots,x_D\}^T$, to rozkład brzegowy
$$
p(x_i)=
\int p(x_1,\dots,x_D)\text d\boldsymbol x_{\backslash i}
$$
otrzymujemy poprzez wielokrotnie zastosowanie reguły dodawania, czyli całkowanie/sumowanie po wszystkich zmiennych losowych z wyjątkiem $x_i$ (stąd $\backslash i$ po $\text d\boldsymbol x$). 