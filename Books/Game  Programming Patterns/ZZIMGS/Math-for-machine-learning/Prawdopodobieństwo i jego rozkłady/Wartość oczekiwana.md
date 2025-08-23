Wartość oczekiwana [[Funkcja|funkcji]] $g:\mathbb R\to\mathbb R$ jednowymiarowej ciągłej [[Zmienna losowa|zmiennej losowej]] $X\sim p(x)$ jest opisana wzorem
$$
\mathbb E_X(g(x))=
\int_Xg(x)p(x)\text dx
$$
Analogicznie [[Wartość oczekiwana|wartość oczekiwana]] funkcji $g$ dyskretnej zmiennej losowej $X\sim p(x)$ to 
$$
\mathbb E_X(g(x))=
\sum_{x\in\mathcal X}g(x)p(x),
$$
gdzie $\mathcal X$ jest zbiorem możliwych wartości ([[Przestrzeń docelowa|przestrzenią docelową]]) zmiennej losowej $X$.

Wielowymiarowe zmienne losowe $X$ traktujemy jako skończone wektory jednowymiarowych zmiennych losowych $[X_1,\dots, X_n]^T$. W przypadku wielowymiarowych zmiennych losowych wartość oczekiwaną definiujemy osobno dla każdego elementu wektora:
$$
\mathbb E_X(g(\boldsymbol x))=
\begin{bmatrix}
\mathbb E_X(g(x_1)) \\
\vdots \\
\mathbb E_X(g(x_D))
\end{bmatrix} \in\mathbb R^D,
$$ 
gdzie $\mathbb E_X{}_d$ reprezentuje wartość oczekiwaną względem $d$-tego elementu wektora $\boldsymbol x$.  

Wartość oczekiwana to operator liniowy. Dla funkcji o wartościach rzeczywistych $f(\boldsymbol x)=ag(\boldsymbol x)+bh(\boldsymbol x)$, gdzie $a, b\in\mathbb R$ i $\boldsymbol x\in\mathbb R^D$, otrzymujemy
$$
\mathbb E_X(f(\boldsymbol x))=
\int f(\boldsymbol x)p(\boldsymbol x)\text d\boldsymbol x=
$$
$$
=
\int[ag(\boldsymbol x)+bh(\boldsymbol x)]p(\boldsymbol x)\text d\boldsymbol x=
$$
$$
=
a\int g(\boldsymbol x)p(\boldsymbol x)\text d\boldsymbol x +
b\int h(\boldsymbol x)p(\boldsymbol x)\text d\boldsymbol x =
$$
$$
=
a\mathbb E_X(g(\boldsymbol x))+
b\mathbb E_X(h(\boldsymbol x))
$$


