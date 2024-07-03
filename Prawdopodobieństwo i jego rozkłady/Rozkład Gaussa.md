Rozkład ten często nazywa się rozkładem normalnym. 
[[Funkcja gęstości prawdopodobieństwa|Funkcją gęstości]] jednowymiarowego rozkładu normalnego jest
$$
p(x\,\,|\,\,\micro, \sigma^2)=
\dfrac{1}{\sqrt{2\pi\sigma^2}}
\exp\Big(
	-\dfrac{(x-\micro)^2}{2\sigma^2}
\Big)
$$
Wielowymiarowy rozkład Gaussa jest opisany przez wektor [[Średnia|średnich]] $\boldsymbol\micro$ i [[Macierz kowariancji|macierz kowariancji]] $\boldsymbol\Sigma$. Funkcją gęstości rozkładu jest 
$$
p(\boldsymbol x\,\,|\,\,\boldsymbol\micro,\boldsymbol\Sigma)=
(2\pi)^{-\frac{D}{2}}|\boldsymbol\Sigma|^{-\frac{1}{2}}
\exp
\Big(
	-\frac{1}{2}(\boldsymbol x-\boldsymbol\micro)^T
	\boldsymbol\Sigma(\boldsymbol x-\boldsymbol\micro)
\Big),
$$
gdzie $\boldsymbol x\in\mathbb R^D$.

Rozkład normalny możemy oznaczyć jako $p(\boldsymbol x)=\mathcal N(\boldsymbol x\,\,|\,\,\boldsymbol\micro,\boldsymbol\Sigma)$ lub $X\sim\mathcal N(\boldsymbol\micro,\boldsymbol\Sigma)$. 
Rozkład normalny jest w pełni określony przez średnią i [[Kowariancja|kowariancję]]. 


Specjalny przypadek rozkładu Gaussa z zerową średnią i jednostkową kowariancją $(\boldsymbol\micro=\boldsymbol0$ i $\boldsymbol \Sigma=\boldsymbol I$) nazywamy standardowym rozkładem normalnym. 

![[Screenshot from 2024-07-03 15-58-47.png]]