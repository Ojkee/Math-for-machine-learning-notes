Iloczyn dwóch [[Rozkład Gaussa|rozkładów normalnych]] $\mathcal N(\boldsymbol x|\boldsymbol a,\boldsymbol A)\mathcal N(\boldsymbol x|\boldsymbol b, \boldsymbol B)$ jest rozkładem normalnym $c\mathcal N(\boldsymbol x|\boldsymbol c, \boldsymbol C)$ przeskalowanym za pomocą parametru $c\in\mathbb R$, gdzie
$$
\boldsymbol C=
(\boldsymbol A^{-1}+\boldsymbol B^{-1})^{-1}
$$
$$
\boldsymbol c=
\boldsymbol C(\boldsymbol A^{-1}\boldsymbol a
+\boldsymbol B^{-1}\boldsymbol b)
$$
$$
c=
(2\pi)^{-\frac{D}{2}}|\boldsymbol A+\boldsymbol B|^{-\frac{1}{2}}
\exp
\Big(
	-\frac{1}{2}(\boldsymbol a-\boldsymbol b)^T
	(\boldsymbol A+\boldsymbol B)^{-1}
	(\boldsymbol a-\boldsymbol b)^T
\Big)
$$

