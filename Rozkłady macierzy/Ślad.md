Ślad macierzy kwadratowej $\boldsymbol{A}\in\mathbb{R}^{n\times n}$ jest zdefiniowany jako
$$
tr(\boldsymbol{A}):=\sum^n_{i=1}a_{ii}
$$
czyli suma wartości na przekątnej $\boldsymbol{A}$. 

#### Własności:
- Dla $\boldsymbol{A,B}\in\mathbb{R}^{n\times n}:tr(\boldsymbol{A+B})=tr(\boldsymbol{A})+tr(\boldsymbol{B})$
- Dla $\alpha\in\mathbb{R}$ i $\boldsymbol{A}\in\mathbb{R}^{n\times n}:tr(\alpha\boldsymbol{A})=\alpha tr(\boldsymbol{A})$ 
- $tr(\boldsymbol{I}_n)=n$
- Dla $\boldsymbol{A}\in\mathbb{R}^{n\times k}$ i $\boldsymbol{B}\in\mathbb{R}^{k\times n}:tr(\boldsymbol{AB})=tr(\boldsymbol{BA})$

Ostatnia własność jest bardziej ogólna. Ślad jest niezmienny względem permutacji cyklicznych dowolnej liczby macierzy, tj. dla na przykład 3 macierzy $\boldsymbol{A}\in\mathbb{R}^{a\times k}$, $\boldsymbol{K}\in\mathbb{R}^{k\times l}$ i $\boldsymbol{L}\in\mathbb{R}^{l\times a}$:
$$
tr(\boldsymbol{AKL})=tr(\boldsymbol{KLA})
$$
Działa też dla wektorów:
$$
tr(\boldsymbol{xy}^T)=tr(\boldsymbol{y}^T\boldsymbol{x})=\boldsymbol{y}^T\boldsymbol{x}\in\mathbb{R}
$$

Ślad odwzorowania liniowego $\Phi: V\to V$, gdzie $V$ jest [[Przestrzenie wektorowe|przestrzenią wektorową]], możemy zdefiniować za pomocą śladu macierzy tego odwzorowania. Odwzorowanie $\Phi$ w [[Bazy|bazie]] $V$ możemy opisać za pomocą macierzy transformacji $\boldsymbol{A}$. Ślad $\Phi$ będzie w takim przypadku śladem $\boldsymbol{A}$. W przypadku [[Zmiana bazy|zmiany bazy]] macierz przekształcenia $(B$) w nowej bazie możemy wyznaczyć za pomocą równania $\boldsymbol{B}=\boldsymbol{S^{-1}AS}$. A zatem ślad odwzorowania $\Phi$ w nowej bazie to:
$$
tr(\boldsymbol{B})=tr(\boldsymbol{S^{-1}AS})=tr(\boldsymbol{ASS}^{-1})=tr(\boldsymbol{A})
$$
