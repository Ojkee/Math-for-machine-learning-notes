Niech $f(\boldsymbol x)$ będzie [[Funkcja gęstości prawdopodobieństwa|funkcją gęstości prawdopodobieństwa]] wielowymiarowej ciągłej [[Zmienna losowa|zmiennej losowej]] $X$. Jeżeli funkcja o wartościach wektorowych $\boldsymbol y=U(\boldsymbol x)$ jest różniczkowalna i odwracalna dla wszystkich wartości $\boldsymbol x$, to dla odpowiednich wartości $\boldsymbol y$ [[Prawdopodobieństwo|prawdopodobieństwo]], że $Y=U(X)$, jest opisane
$$
f(\boldsymbol y)=
f_x(U^{-1}(\boldsymbol y)) \,\cdot\,
\Big|
	\det
	\Big(
		\frac{\partial}{\partial\boldsymbol y}
		U^{-1}(\boldsymbol y)
	\Big)
\Big|
$$
Zmiana zmiennych w przypadku wielowymiarowej zmiennej losowej odbywa się zgodnie z tą samą procedurą co w przypadku [[Zmiana zmiennych przypadek jednowymiarowy|jednowymiarowym]].
Najpierw musimy wyznaczyć przekształcenie odwrotne i postawić je do funkcji gęstości $\boldsymbol x$. Następnie obliczamy [[Wyznacznik|wyznacznik]] [[Macierz Jacobiego|macierzy Jacobiego]] i mnożymy otrzymane wartości. 

#### Przykład
![[Screenshot from 2024-07-04 23-53-16.png]]
![[Screenshot from 2024-07-04 23-53-28.png]]
