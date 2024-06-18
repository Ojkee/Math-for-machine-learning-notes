#### Definicja
Macierz $\boldsymbol{A}\in\mathbb{R}^{n\times n}$ jest diagonalizowalna, jeśli jest [[Macierze podobne|podobna]] do [[Macierz diagonalna|macierzy diagonalnej]], tj. jeśli istnieje macierz odwracalna $\boldsymbol{P}\in\mathbb{R}^{n\times n}$ taka, że $\boldsymbol{D=P^{-1}AP}$. 

Diagonalizacja macierzy $\boldsymbol{A}\in\mathbb{R}^{n\times n}$ jest sposobem na zapisanie tego samego przekształcenia liniowego w innej [[Bazy|bazie]]. Baza ta będzie bazą składającą się z [[Wartości i wektory własne|wektorów własnych]] $\boldsymbol{A}$. 

Niech $\boldsymbol{A}\in\mathbb{R}^{n\times n}$, $\lambda_1,...,\lambda_n$ będzie zbiorem skalarów i niech $\boldsymbol{p_1,...,p_n}$ będzie zbiorem wektorów w $\mathbb{R}^n$. Niech $\boldsymbol{P}:=[\boldsymbol{p_1,...,p_n}]$ i niech $\boldsymbol{D}\in\mathbb{R}^{n\times n}$ będzie macierzą diagonalną z wartościami $\lambda_1,...,\lambda_n$ na przekątnej. Możemy pokazać, że:
$$
\boldsymbol{AP=PD}
$$
wtedy i tylko wtedy, gdy $\lambda_1,...,\lambda_n$ są wartościami własnymi macierzy $\boldsymbol{A}$, a $\boldsymbol{p_1,...,p_n}$ są odpowiadającymi im wektorami własnymi macierzy $\boldsymbol{A}$. 

Symetryczna macierz $\boldsymbol{S}\in\mathbb{R}^{n\times n}$ może być zawsze zdiagonalizowana. Wynika to bezpośrednio z [[Twierdzenie spektralne|twierdzenia spektralnego]]. Ponadto mówi, że możemy znaleźć [[Ortonormalność|ortonormalną]] bazę [[Przestrzenie wektorowe|przestrzeni]] $\mathbb{R}^n$ składającą się z wektorów własnych. To sprawia, że $\boldsymbol{P}$ jest macierzą [[Ortogonalność|ortogonalną]] taką, że 
$$
\boldsymbol{D=P^TAP}
$$
