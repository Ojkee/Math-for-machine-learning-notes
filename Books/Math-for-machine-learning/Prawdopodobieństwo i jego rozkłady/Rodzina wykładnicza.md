Rodzina wykładnicza to rodzina rozkładów [[Prawdopodobieństwo|prawdopodobieństwa]] parametryzowanych przez $\boldsymbol \theta\in\mathbb R^D$ o następującej postaci
$$
p(\boldsymbol x|\boldsymbol \theta)=
h(\boldsymbol x)\exp(
\langle\boldsymbol\theta, \phi(\boldsymbol x)\rangle-
A(\boldsymbol \theta)
),
$$
gdzie $\phi(\boldsymbol x)$ jest wektorem [[Statystyki dostateczne|statystyk dostatecznych]]. 
W ogólności możemy zastosować dowolny [[Iloczyn wewnętrzny|iloczyn wewnętrzny]]. My w jego roli wykorzystamy standardowy [[Iloczyn skalarny|iloczyn skalarny]] 
$$
(
\langle\boldsymbol\theta,\boldsymbol\phi(\boldsymbol x)\rangle=
\boldsymbol \theta^T\boldsymbol \phi(\boldsymbol x)
)
$$
Czynnik $h(\boldsymbol x)$ może być przeniesiony do wnętrza iloczynu skalarnego, jeżeli do wektora statystyk dostatecznych $\phi(x)$ dodamy dodatkowy składnik $\log h(\boldsymbol x)$ oraz wprowadzimy ograniczenie związanego z parametru $\theta_0=1$. Składnik $A(\boldsymbol\theta)$ jest stałą normalizacji, która gwarantuje, że rozkład sumuje lub całkuje się do jeden. Stała ta jest nazywana funkcją log-partycji. Aby wyrobić sobie intuicję dotyczącą rodzin wykładniczych, warto zignorować te dwa składniki i potraktować rodziny wykładnicze jako jako rozkłady postaci 
$$
p(\boldsymbol x|\boldsymbol\theta)\propto
\exp(
\boldsymbol\theta^T\boldsymbol\phi(\boldsymbol x)
)
$$
W tej postaci parametry $\boldsymbol\theta$ są nazywane parametrami naturalnymi. 
#### Przykład
![[Screenshot from 2024-07-04 16-39-23.png]]
#### Przykład
![[Screenshot from 2024-07-04 16-39-33.png]]
![[Screenshot from 2024-07-04 16-39-41.png]]


Klasa rozkładów zwana rodziną wykładniczą zapewnia właściwą równowagę pomiędzy generalizacją z zachowanie korzystnych własności obliczeniowych i możliwości wnioskowania. 

Trzy przykłady rozkładów prawdopodobieństwa:
- [[Rozkład zero-jedynkowy]]
- [[Rozkład dwumianowy]]
- [[Rozkład beta]]

Istnieją 3 poziomy abstrakcji, na którym możemy rozważać rozkłady:
- Na pierwszym poziomie rozważamy rozkład o stałych parametrach, na przykład jednowymiarowy [[Rozkład Gaussa|rozkład normalny]] $\mathcal N(0,1)$ o zerowej [[Średnia|średniej]] i jednostkowej [[Wariancja|wariancji]]. 
- Na drugim poziomie rozważamy konkretny rozkład z nieznanymi parametrami i wnioskujemy o jego parametrach na podstawie danych. Zakładamy, że naszym rozkładem jest na przykład jednowymiarowy rozkład normalny $\mathcal N(\micro,\sigma^2)$ z nieznaną średnią $\micro$ i wariancją $\sigma^2$. Do znalezienia najlepszych parametrów tego rozkładu wykorzystujemy metodę największej wiarygodności. 
- Trzeci poziomem abstrakcji jest rozważanie rodzin wykładów, które reprezentuje rodzina wykładnicza. Jednowymiarowy rozkład normalny jest przykładowym członkiem rodziny wykładniczej. 

Rodziny wykładnicze zapewniają wygodny sposób znajdowania [[Sprzężenie|sprzężonych]] par rozkładów. Rozważmy zmienną losową $X$ należącą do rodziny wykładniczej taką, że:
$$
p(\boldsymbol x|\boldsymbol \theta)=
h(\boldsymbol x)\exp(
\langle\boldsymbol\theta,\boldsymbol\phi(\boldsymbol x)\rangle- 
A(\boldsymbol\theta)
)
$$
Każdy członek rodziny wykładniczej posiada następujące sprzężenie a priori
$$
p(\boldsymbol \theta|\boldsymbol\gamma)=
h_c(\boldsymbol\theta)
\exp\Big(
	\Big\langle
	\begin{bmatrix}
		\boldsymbol\gamma_1 \\
		\gamma_2
	\end{bmatrix},
	\begin{bmatrix}
		\boldsymbol\theta\\
		-A(\boldsymbol\theta)
	\end{bmatrix}
	\Big\rangle
	-A_c(\boldsymbol\gamma)
\Big),
$$
gdzie $\gamma=\begin{bmatrix} \gamma_1 \\ \gamma_2 \end{bmatrix}$ ma wymiar $\text{dim}({\boldsymbol\theta})+1$. [[Statystyki dostateczne|Statystyka dostateczna]] tego sprzężenia to $\begin{bmatrix} \boldsymbol\theta \\ -A(\boldsymbol \theta)\end{bmatrix}$. Z ogólnej postaci sprzężenia a priori dla rodzin wykładniczych możemy wyprowadzić funkcyjne postaci sprzężeń a priori odpowiadające poszczególnym rozkładom.
#### Przykład
![[Screenshot from 2024-07-04 16-54-36.png]]![[Screenshot from 2024-07-04 16-54-46.png]]
