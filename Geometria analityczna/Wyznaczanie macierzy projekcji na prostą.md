Wyznaczanie [[Macierz projekcji na prostą|macierzy projekcji]] $\boldsymbol{P}_\pi$, która odwzorowuje $\boldsymbol{x}\in\mathbb{R}^n$ na $U$: 

Wiemy, że [[Rzuty ortogonalne|rzut]] jest odwzorowaniem liniowym. Istnieje zatem macierz projekcji $\boldsymbol{P}_\pi$ taka, że $\pi_U(\boldsymbol{x})=\boldsymbol{P_\pi x}$. 

Jeżeli [[Iloczyn wewnętrzny|iloczynem wewnętrznym]] jest [[Iloczyn skalarny|iloczyn skalarny]] to:
$$
\pi_U(\boldsymbol{x})=\lambda\boldsymbol{b}=\boldsymbol{b}\lambda=\boldsymbol{b}\frac{\boldsymbol{b^Tx}}{\|\boldsymbol{b}\|^2}=\frac{\boldsymbol{bb^T}}{\|\boldsymbol{b}\|^2}\boldsymbol{x}
$$
W tym przypadku możemy od razu zauważyć, że
$$
\boldsymbol{P}_\pi=\frac{\boldsymbol{bb}^T}{\|\boldsymbol{b}\|^2}
$$

