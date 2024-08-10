Powiedzmy, że chcemy zamodelować [[Zmienna losowa|zmienną losową]] na skończonym przedziale. Rozkład beta to rozkład ciągłej zmiennej losowej $\micro\in[0,1]$, który jest często wykorzystywany do reprezentowania [[Prawdopodobieństwo|prawdopodobieństwa]] jakiegoś zdarzenia binarnego. Sam rozkład beta $(\alpha, \beta)$ posiada dwa parametry $\alpha\gt 0$ i $\beta\gt0$, oraz jest zdefiniowany jako
$$
p(\micro\,|\,\alpha, \beta)=
\frac{\Gamma(\alpha+\beta)}{\Gamma(\alpha)\Gamma(\beta)}
\micro^{\alpha-1}(1-\micro)^{\beta -1}
$$
$$
\mathbb E[\micro]=
\frac{\alpha}{\alpha+\beta}
$$
$$
\mathbb V[\micro]=
\frac{\alpha\beta}{(\alpha+\beta)^2(\alpha+\beta+1)},
$$
gdzie $\Gamma(\cdot)$ jest [[Funkcja gamma|funkcją gamma]]. 
#### Przykład
![[Screenshot from 2024-07-04 01-34-35.png]]

Intuicyjnie $\alpha$ przesuwa funkcję masy prawdopodobieństwa w kierunku 1, podczas gdy $\beta$ przesuwa ją w kierunku 0. Istnieje kilka przypadków szczególnych rozkładu beta:
- Dla $\alpha=0=\beta$ otrzymujemy rozkład jednostajny $\mathcal U[0,1]$. 
- Dla $\alpha,\beta\lt1$ otrzymujemy rozkład bimodalny z pikami w 0 i 1.
- Dla $\alpha, \beta\gt1$ rozkład jest jednomodalny. 
- Dla $\alpha,\beta\gt1$ i $\alpha=\beta$ rozkład jest jednomodalny, symetryczny i wyśrodkowany w przedziale $[0,1]$, tj. [[Dominanta lub moda|moda]]/[[Średnia|średnia]] jest równa $\dfrac{1}{2}$.  