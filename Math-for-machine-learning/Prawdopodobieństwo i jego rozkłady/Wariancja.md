[[Kowariancja]] zmiennej z samą sobą jest nazywana wariancją i oznacza się ją symbolem $\mathbb V_X[x]$. 

Wariancja zmiennej losowej $X$ o stanach $\boldsymbol x\in\mathbb R^D$ i [[Średnia|średniej]] $\boldsymbol \micro\in\mathbb R^D$ jest zdefiniowana jako 
$$
\mathbb V_X[\boldsymbol x]=\text{cov}_X[\boldsymbol x, \boldsymbol x] =
$$
$$
=
\mathbb E_X[(\boldsymbol x-\boldsymbol\micro)(\boldsymbol x-\boldsymbol\micro)^T]=
\mathbb E_X(\boldsymbol{xx}^T)-\mathbb E_X[\boldsymbol x]\mathbb E_X[\boldsymbol x]^T=
$$
$$
=
\begin{bmatrix}
\text{cov}[x_1, x_1] & \text{cov}[x_1, x_2] & \dots & \text{cov}[x_1, x_D] \\
\text{cov}[x_2, x_1] & \text{cov}[x_2, x_2] & \dots & \text{cov}[x_2, x_D] \\
\vdots & \vdots & \ddots & \vdots \\
\text{cov}[x_D, x_1] & \text{cov}[x_D, x_2] & \dots & \text{cov}[x_D, x_D] \\
\end{bmatrix}
$$
Macierz o wymiarach $D\times D$ z tego równania jest nazywana [[Macierz kowariancji|macierzą kowariancji]] wielowymiarowej zmiennej losowej $X$. 

#### Trzy wyrażenia wariancji
- Standardowa definicja wariancji możemy wyprowadzić z definicji kowariancji. Zgodnie z nią wariancja to [[Wartość oczekiwana|wartość oczekiwana]] kwadratu [[Odchylenie standardowe|odchylenia]] [[Zmienna losowa|zmiennej losowej]] $X$ od jej wartości oczekiwanej $\micro$ 
$$
\mathbb V_X[x]:=
\mathbb E_X[(x-\micro)^2]
$$
W zależności od tego, czy $X$ jest dyskretną, czy ciągłą zmienną losową, wartość oczekiwana w powyższym równaniu i średnia $\micro=\mathbb E_X(x)$ są obliczane przy użyciu jednej z formuł z równań $\mathbb E_X{}_d(x_d)$ ([[Średnia|wzory]]). 
W tym powyższym podejściu korzystając z algorytmu przechodzimy przez dane dwa razy, przy pierwszym wyznaczając średnią, a w drugim obliczając wariancję w oparciu o tą średnią. 

- Przekształcając równanie możemy uniknąć dwukrotnego przejścia. Wzór można zapisać jako
$$
\mathbb V_X[x]=
\mathbb E_X[x^2] - (\mathbb E_X[x])^2
$$
Ta postać może być użyteczna przy dekompozycji błędu na obciążenie i wariancję.

- Trzecim sposobem spojrzenia na wariancję jest potraktowanie jej jako sumy par różnic pomiędzy parami obserwacji. Załóżmy, że mamy próbkę wartości $x_1,\dots,x_N$ zmiennej losowej $X$ i obliczamy kwadraty różnicy pomiędzy parami $x_i$ i $x_j$. Po rozwinięciu składnika podnoszonego do kwadratu możemy pokazać, że suma $N^2$ par różnic jest [[Kowariancja empiryczna|empiryczną wariancją]] obserwacji
$$
\dfrac{1}{N^2}\sum^N_{i,j=1}(x_i-x_j)^2=
2\Bigg[
	\dfrac{1}{N}\sum^N_{i=1}x_i^2-
	\Big(
		\dfrac{1}{N}
		\sum^N_{j=1}x_j
	\Big)^2
\Bigg]
$$
 Z geometrycznego punktu widzenia oznacza to, że istnieje równoważność pomiędzy odległościami w parach, a odległościami od środka zbiorów. 
 Z perspektywy obliczeniowej obliczając średnią ($N$ składników) i wariancję ($N$ składników), możemy otrzymać wyrażenie, które ma $N^2$ składników. 