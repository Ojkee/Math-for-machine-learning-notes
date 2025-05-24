[[Rzuty ortogonalne|Rzutowanie]] stanowi podstawę metody Grama-Schmidta, która pozwala nam przekształcić dowolną bazę $(\boldsymbol{b_1,...,b_n})$ $n$-wymiarowej [[Przestrzenie wektorowe|przestrzeni wektorowej]] $V$ w bazę [[Ortogonalność|ortogonalną]]/[[Ortonormalność|ortonormalną]] $(\boldsymbol{u_1,...,u_n})$. [[Bazy|Baza]] ortogonalna istnieje zawsze, a $lin[\boldsymbol{b_1,...,b_n}]=lin[\boldsymbol{u_1,...,u_n}]$.  

Załóżmy, że dysponujemy zbiorem nieortogonalnych i nieznormalizowanych wektorów bazowych $\{\boldsymbol{\tilde{b}_1,...,\tilde{b}_n}\}$. Wektory zapisujemy do macierzy $\boldsymbol{\tilde{B}}=[\boldsymbol{\tilde{b}_1,...,\tilde{b}_n}]$ i za pomocą metody eliminacji Gaussa przekształcamy macierz rozszerzoną $[\boldsymbol{\tilde{B}\tilde{B}^T|\tilde{B}}]$ w celu uzyskania [[Baza ortonormalna|bazy ortonormalnej]]. 

Proces iteracyjny:
$$
\boldsymbol{u}_1:=\boldsymbol{b}_1
$$
$$
\boldsymbol{u}_k:=\boldsymbol{b}_k-\pi_{lin[\boldsymbol{u_1,...,u_k-1}]}(\boldsymbol{b}_k), \text{  } k=2,...,n
$$
$k$-ty wektor bazowy $\boldsymbol{b}_k$ jest rzutowany na [[Podprzestrzenie wektorowe|podprzestrzeń]] generowaną przez pierwsze $(k-1)$ wektorów ortogonalnych $\boldsymbol{u_1,...,u_{k-1}}$. Otrzymany rzut jest następnie odejmowany od $\boldsymbol{b}_k$, co daje wektor $\boldsymbol{u}_k$, który jest ortogonalny do $(k-1)$-wymiarowej podprzestrzeni generowanej przez $\boldsymbol{u_1,...,u_{k-1}}$. 

#### Przykład
![[Screenshot from 2024-06-14 00-52-31.png]]
