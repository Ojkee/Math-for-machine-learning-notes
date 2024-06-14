Załóżmy, że [[Rzuty ortogonalne|rzutujemy]] wektor $\boldsymbol{x}\in\mathbb{R}^n$ na [[Przestrzenie wektorowe|przestrzeń]] $U\subseteq\mathbb{R}^n$ o mniejszej liczbie wymiarów: $dim(U)=m\ge1$ oraz $(\boldsymbol{b_1,...,b_m})$ jest uporządkowaną bazą $B$. 
Każdy rzut $\pi_U(\boldsymbol{x})$ na $U$ jest z definicji elementem [[Podprzestrzenie wektorowe|podprzestrzeni]] $U$, więc możemy przedstawić go jako kombinację liniową $\pi_U(\boldsymbol{x}) = \sum^m_{i=1}\lambda_i\boldsymbol{b}_i$ wektorów bazowych $\boldsymbol{b_1,...,b_m}$.
Znalezienie współrzędnych rzutu $\lambda_1,...,\lambda_m$ w [[Bazy|bazie]] $U$ takich, że kombinacja liniowa 
$$
\pi_U(\boldsymbol{x})=\sum^m_{i=1}\lambda_i\boldsymbol{b}_i=\boldsymbol{B\lambda},
$$
$$
\boldsymbol{B}=[\boldsymbol{b_1,...,\boldsymbol{b}_m}]\in\mathbb{R}^{n\times m},\boldsymbol{\lambda}=[\lambda_1,...,\lambda_m]^T\in\mathbb{R}^m
$$
jest najbliższa $\boldsymbol{x}\in\mathbb{R}^{n}$, co oznacza, że wektor łączący $\pi_U(\boldsymbol{x})\in U$ i $\boldsymbol{x}\in\mathbb{R}^n$ musi być [[Ortogonalność|ortogonalny]] do wszystkich wektorów bazowych $U$. 
Gdy przyjmiemy, że [[Iloczyn wewnętrzny|iloczynem wewnętrznym]] jest [[Iloczyn skalarny|iloczyn skalarny]], otrzymujemy $m$ warunków:
$$
\langle\boldsymbol{b_1,x}-\pi_U(\boldsymbol{x})\rangle=\boldsymbol{b}_1^T(\boldsymbol{x}-\pi_U(\boldsymbol{x}))=0
$$
$$
\vdots
$$
$$
\langle\boldsymbol{b_m,x}-\pi_U(\boldsymbol{x})\rangle=\boldsymbol{b}_m^T(\boldsymbol{x}-\pi_U(\boldsymbol{x}))=0,
$$
które $\pi_U(\boldsymbol{x})=\boldsymbol{B\lambda}$ można zapisać jako
$$
\boldsymbol{b}_1^T(\boldsymbol{x-B\lambda})=0
$$
$$
\vdots
$$
$$
\boldsymbol{b}_m^T(\boldsymbol{x-B\lambda})=0
$$
To prowadzi do jednorodnego układu równań liniowych
$$
\newcommand\mycolv[1]{\begin{bmatrix}#1\end{bmatrix}}
\mycolv{\boldsymbol{b}^T_1\\\vdots\\\boldsymbol{b}_m^T}[\boldsymbol{x-B\lambda}]=\boldsymbol{0}\Longleftrightarrow\boldsymbol{B}^T(\boldsymbol{x-B\lambda})=\boldsymbol{0}\Longleftrightarrow\boldsymbol{B}^T\boldsymbol{B\lambda}=\boldsymbol{B}^T\boldsymbol{x}
$$
Ostatnie wyrażenie jest równaniem normalnym. Macierz $\boldsymbol{B}^T\boldsymbol{B}\in\mathbb{R}^{m\times m}$ jest [[Macierz regularna|macierzą regularną]] i może być odwrócona, więc:
$$
\boldsymbol{\lambda}=(\boldsymbol{B}^T\boldsymbol{B})^{-1}\boldsymbol{B}^T\boldsymbol{x}
$$
Macierz $(\boldsymbol{B}^T\boldsymbol{B})^{-1}\boldsymbol{B}^T$ jest nazywana pseudoodwrotnością $\boldsymbol{B}$. 

#### Przykład
![[Screenshot from 2024-06-13 23-21-21 1.png]]
