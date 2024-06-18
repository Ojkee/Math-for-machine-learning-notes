#### Twierdzenie
Macierz kwadratowa $\boldsymbol{A}\in\mathbb{R}^{n\times n}$ może być rozłożona na iloczyn
$$
\boldsymbol{A=PDP}^{-1},
$$
w którym $\boldsymbol{P}\in\mathbb{R}^{n\times n}$, a $\boldsymbol{D}$ jest [[Macierz diagonalna|macierzą diagonalną]], która na przekątnej zawiera [[Wartości i wektory własne|wartości własne]] $\boldsymbol{A}$, wtedy i tylko wtedy, gdy wektory własne $\boldsymbol{A}$ tworzą [[Bazy|bazę]] $\mathbb{R}^n$.

Dzięki rozkładowi macierzy według wartości własnych możemy potęgować macierz $\boldsymbol{A}\in\mathbb{R}^{n\times n}$ w następujący sposób:
$$
\boldsymbol{A}^k=(\boldsymbol{PDP}^{-1})^k=\boldsymbol{PD}^k\boldsymbol{P}^{-1}
$$
Załóżmy, że istnieje rozkład własny $\boldsymbol{A=PDP}^{-1}$. Wtedy:
$$
\det(\boldsymbol{A})=\det(\boldsymbol{PDP}^{-1})=\det(\boldsymbol{P})\det(\boldsymbol{D})\det(\boldsymbol{P}^{-1})=\det(\boldsymbol{D})=\prod_id_{ii}
$$

#### Przykład
![[Screenshot from 2024-06-18 19-14-21.png]]![[Screenshot from 2024-06-18 19-14-37.png]]
