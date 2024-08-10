Dla $\Phi:V\to W$ jądro przekształcenia to:
$$
ker(\Phi):=\Phi^{-1}(\boldsymbol{0}_W)=\{\boldsymbol{v}\in V:\Phi(\boldsymbol{v}) = \boldsymbol{0}_W\}
$$
- $\Phi(\boldsymbol{0}_V)=\boldsymbol{0}_W$, a zatem $\boldsymbol{0}_V\in ker(\Phi)$.
- $\Phi$ jest [[Iniekcja|iniekcją]] wtedy i tylko wtedy, gdy $ker(\Phi)=\{\boldsymbol{0}\}$.

![[Screenshot from 2024-06-04 21-19-41.png]]
- Jądro jest zbiorem wektorów $\boldsymbol{v} \in V$ przekształcanych przez $\Phi$ w element neutralny $\boldsymbol{0}_W\in W$. 
- nigdy nie jest zbiorem pustym.
- $ker(\Phi)$ jest ogólnym rozwiązaniem jednorodnego układu równań liniowych $\boldsymbol{Ax=0}$ i zawiera wszystkie możliwe kombinacje liniowe elementów $\mathbb{R}^n$, które dają $\boldsymbol{0}\in \mathbb{R}^n$.
- jest [[Podprzestrzenie wektorowe|podprzestrzenią]] $\mathbb{R}^n$, gdzie $n$ jest "szerokością" macierzy.
- skupia się na relacji między kolumnami. Możemy je wykorzystać, aby określić, czy i jak możemy wyrazić kolumnę macierzy w postaci kombinacji liniowej innych kolumn.

Dla [[Przestrzenie wektorowe|przestrzeni wektorowych]] $V$ i $W$ oraz przekształcenia liniowego $\Phi:V\to W$:
$$
dim(ker(\Phi))+dim(Im(\Phi))=dim(V)
$$

