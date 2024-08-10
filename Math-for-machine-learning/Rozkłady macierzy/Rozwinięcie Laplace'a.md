Metoda obliczenia [[Wyznacznik|wyznacznika]].

Rozważmy macierz $\boldsymbol{A}\in\mathbb{R}^{n\times n}$. Dla wszystkich $j=1,...,n$:
1. Rozwinięcie względem $j$-tej kolumny:
$$
\det(\boldsymbol{A})=\sum^{n}_{k=1}(-1)^{k+j}a_{kj}\det(\boldsymbol{A}_{k,j})
$$
2. Rozwinięcie względem $i$-tego wiersza:
$$
\det(\boldsymbol{A})=\sum^n_{k=1}(-1)^{k+j}a_{kj}\det(\boldsymbol{A}_{j,k})
$$
$\boldsymbol{A}_{k,j}\in\mathbb{R}^{(n-1)\times (n-1)}$ jest pod-macierzą $\boldsymbol{A}$, którą otrzymujemy poprzez usunięcie z $\boldsymbol{A}$ $k$-tego wiersza i $j$-tej kolumny.

#### Przykład
![[Screenshot from 2024-06-17 17-08-48.png]]![[Screenshot from 2024-06-17 17-08-56.png]]