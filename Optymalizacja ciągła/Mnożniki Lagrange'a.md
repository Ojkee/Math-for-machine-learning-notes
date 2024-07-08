Wprowadźmy mnożniki Lagrange'a $\lambda_i\ge0$ odpowiadającymi każdemu [[Optymalizacja z ograniczeniami|ograniczeniu]] nierównościowemu
$$
\mathfrak L(\boldsymbol{x, \lambda})=
f(\boldsymbol x)+
\sum^m_{i=1}\lambda_ig_i(\boldsymbol x)=
f(\boldsymbol x)+\boldsymbol\lambda^T\boldsymbol g(\boldsymbol x),
$$
^lagranzjan
gdzie w ostatnim wierszu połączyliśmy wszystkie ograniczenia $g_i(\boldsymbol x)$ w wektor $\boldsymbol g(\boldsymbol x)$, a wszystkie mnożniki Lagrange'a w wektor $\boldsymbol\lambda\in\mathbb R^m$.  ^0136d6

Dualność optymalizacji polega na przekształceniu problemu optymalizacji w jednym zbiorze zmiennych $\boldsymbol x$ (zbiór zmiennych pierwotnych) w inny problem optymalizacji w innym zbiorze zmiennych $\lambda$ (zmienne dualne). 

#### Dualność Lagrange'a
Problem 
$$
\underset{x}{\min}f(\boldsymbol x)
$$
z ograniczeniem $g_i(\boldsymbol x)\ge0$ dla wszystkich $i=1,\dots,m$, jest znany jako problem pierwotny. Związany z nim problem dualny Lagrange'a to
$$
\underset{\boldsymbol\lambda\in\mathbb R^m}{\max}\mathfrak D(\boldsymbol x)
$$
z ograniczeniem $\boldsymbol\lambda\ge0$, gdzie $\boldsymbol\lambda$ są zmiennymi dualnymi, a $\mathfrak D(\boldsymbol\lambda)=\underset{\boldsymbol x\in\mathbb R^d}{\min}\mathfrak L(\boldsymbol{x,\lambda})$.

W przeciwieństwie do pierwotnego problemu optymalizacji, który posiadał ograniczenia, $\underset{\boldsymbol x\in\mathbb R^d}{\min}\mathfrak L(\boldsymbol{x, \lambda})$ dla określonej wartości $\boldsymbol\lambda$ jest problemem optymalizacji bez ograniczeń. Jeśli możemy w łatwy sposób znaleźć $\underset{\boldsymbol x\in\mathbb R^d}{\min}\mathfrak L(\boldsymbol{x, \lambda})$, to cały problem będzie łatwy do rozwiązania. 
Funkcja 
$$
\mathfrak L(\boldsymbol{x, \lambda})=
f(\boldsymbol x)+\boldsymbol\lambda^T\boldsymbol g(\boldsymbol x)
$$
jest afiniczna względem $\boldsymbol\lambda$. $\underset{\boldsymbol x\in\mathbb R^d}{\min}\mathfrak L(\boldsymbol{x,\lambda})$ jest więc problemem znalezienia minimum [[Funkcja|funkcji]] [[Przestrzenie afiniczne|afinicznej]] względem $\boldsymbol\lambda$, jest więc problemem maksymalizacji funkcji wklęsłej, co pozwala go efektywnie rozwiązać. 

Jeżeli założymy, że $f(\cdot)$ i $g_i(\cdot)$ są [[Zasady różniczkowania|różniczkowalne]], to problem dualny Lagrange'a możemy rozwiązać poprzez obliczenie i przyrównanie do zera [[Pochodna|pochodnej]] lagranżjanu względem $\boldsymbol x$ oraz znalezienie jej optymalnej wartości. 

Rozważmy problem z dodatkowymi ograniczeniami równościowymi
$$
\underset{x}{\min}f(\boldsymbol x)
$$
z ograniczeniami:
- $g_i(\boldsymbol x)\le0$ dla wszystkich $i=1,\dots,m$
- $h_j=0$ dla wszystkich $j=1,\dots,m$
Ograniczenie równościowe możemy przedstawić za pomocą dwóch ograniczeń nierównościowych. Oznacza to, że każde ograniczenie równościowe $h_j(\boldsymbol x)=0$ możemy zapisać dwoma ograniczeniami $h_j(\boldsymbol x)\le0$ oraz $h_j(\boldsymbol x)\ge0$. Okazuje się, że otrzymane w ten sposób mnożniki Lagrange'a są nieograniczone. Z tego powodu musimy ograniczyć wartości mnożników Lagrange'a odpowiadających ograniczeniom równościowym do liczb nieujemnych. Mnożniki Lagrange'a odpowiadające ograniczeniom równościowym pozostawiamy bez ograniczeń. 
