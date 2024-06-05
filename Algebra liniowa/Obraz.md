Dla $\Phi:V\to W$ obraz to:
$$
Im(\Phi):=\Phi(V)=\{\boldsymbol{w}\in W|\exists\boldsymbol{v}\in V:\Phi(\boldsymbol{v})=\boldsymbol{w}\}
$$
- $Im(\Phi)\subseteq W$ jest [[Przestrzenie wektorowe|przestrzenią]] $W$.
- $\Phi$ jest [[Iniekcja|iniekcją]] wtedy i tylko wtedy, gdy [[Jądro|jądro]] $ker(\Phi)=\{\boldsymbol{0}\}$.
![[Screenshot from 2024-06-04 21-19-41.png]]
- Obraz jest zbiorem wektorów $\boldsymbol{w}\in W$, które możemy 'osiągnąć' za pomocą $\Phi$ z dowolnego wektora $V$.
- $rz(\boldsymbol{A})=dim(Im(\Phi))$.
- jest [[Przestrzenie wektorowe|przestrzenią]] generowaną przez kolumny $\boldsymbol{A}$, a zatem przestrzeń kolumnowa (obraz) jest [[Podprzestrzenie wektorowe|podprzestrzenią]] $\mathbb{R}^n$, gdzie $m$ jest "wysokością" macierzy.
- Dla $\boldsymbol{A=[a_1,...,a_n]}$, gdzie $\boldsymbol{a}_i$ są kolumnami macierzy $\boldsymbol{A}$, otrzymujemy
$$
Im(\Phi)=\{\boldsymbol{Ax:x}\in \mathbb{R}^n\}=\{\sum_{i=1}^nx_i\boldsymbol{a}_i:x_i,...,x_n \in \mathbb{R}^m\}=lin[\boldsymbol{a_1,...,a_n}]\subseteq \mathbb{R}^m
$$

Dla przestrzeni wektorowych $V$ i $W$ oraz przekształcenia liniowego $\Phi:V\to W$:
$$
dim(ker(\Phi))+dim(Im(\Phi))=dim(V)
$$
