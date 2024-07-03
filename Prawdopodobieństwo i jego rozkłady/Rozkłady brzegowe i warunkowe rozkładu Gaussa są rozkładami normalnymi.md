Wymiary [[Zmienna losowa|zmiennych losowych]] mogą się różnić, aby uwidocznić efekty [[Reguła dodawania|reguły dodawania]] i warunkowania, jawnie zapiszemy [[Rozkład Gaussa|rozkład Gaussa]] w kategoriach stanów połączonych $[\boldsymbol x^T, \boldsymbol y^T]$:
$$
p(\boldsymbol x, \boldsymbol y)=
\mathcal N\Big(
\begin{bmatrix}
	\boldsymbol\micro_x \\
	\boldsymbol\micro_y
\end{bmatrix},
\begin{bmatrix}
	\boldsymbol\Sigma_{xx} &
	\boldsymbol\Sigma_{xy} \\
	\boldsymbol\Sigma_{yx} &
	\boldsymbol\Sigma_{yy}
\end{bmatrix}
\Big),
$$
gdzie $\boldsymbol\Sigma_{xx}=\text{cov}[\boldsymbol x,\boldsymbol x]$ i  $\boldsymbol\Sigma_{yy}=\text{cov}[\boldsymbol y,\boldsymbol y]$ są brzegowymi [[Macierz kowariancji|macierzami kowariancji]] i odpowiednio $\boldsymbol x$ i $\boldsymbol y$, a $\boldsymbol\Sigma){xy}=\text{cov}[\boldsymbol x, \boldsymbol y]$ jest macierzą kowariancji krzyżowej $\boldsymbol x$ i $\boldsymbol y$. 

Rozkład warunkowy $p(\boldsymbol x\,\,|\,\,\boldsymbol y)$ również jest rozkładem normalnym. Ma on następującą postać:
$$
p(\boldsymbol x\,\,|\,\,\boldsymbol y)=
\mathcal N(\boldsymbol\micro_{x|y}, \boldsymbol\Sigma_{x|y})
$$
$$
\boldsymbol\micro_{x|y}=
\boldsymbol\micro_x+\boldsymbol\Sigma_{xy}\boldsymbol\Sigma_{xy}^{-1}
(\boldsymbol y-\boldsymbol\micro_y)
$$
$$
\boldsymbol\Sigma_{x|y}=
\boldsymbol\Sigma_{xx}-
\boldsymbol\Sigma_{xy}
\boldsymbol\Sigma_{yy}^{-1}
\boldsymbol\Sigma_{yx}
$$
Zauważmy, że we wzorze na [[Średnia|średnią]] $\boldsymbol y$ jest obserwacją, a więc nie ma już losowego charakteru. 

Rozkład brzegowy $p(\boldsymbol x)$ wspólnego rozkładu normalnego $p(\boldsymbol x, \boldsymbol y)$ jest sam w sobie rozkładem Gaussa, który możemy wyznaczyć za pomocą reguły sumy. Ma on następującą postać
$$
p(\boldsymbol x)=
\int p(\boldsymbol x,\boldsymbol y)d\boldsymbol y=
\mathcal N(\boldsymbol x\,\,|\,\,\boldsymbol\micro_x, \boldsymbol\Sigma_{xx})
$$

#### Przykład
![[Screenshot from 2024-07-03 16-28-01.png]]
![[Screenshot from 2024-07-03 16-28-29.png]]


