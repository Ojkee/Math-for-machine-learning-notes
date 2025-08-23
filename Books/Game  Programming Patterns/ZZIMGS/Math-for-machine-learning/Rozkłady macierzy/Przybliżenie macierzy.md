Macierze $\boldsymbol{A}_i\in\mathbb{R}^{m\times n}$ o [[Rząd|rzędzie]] równym 1 możemy utworzyć, korzystając z następującego równania:
$$
\boldsymbol{A}_i:= \boldsymbol{u}_i\boldsymbol{v}_i^T
$$
Macierze te są wynikiem [[Iloczyn wewnętrzny|iloczynu wewnętrznego]] $i$-tych kolumn macierzy  $\boldsymbol{U}$ i $\boldsymbol{V}$. 
Macierz $\boldsymbol{A}\in\mathbb{R}^{m\times n}$ rzędu $r$ może być zapisana jako suma ważona macierzy $\boldsymbol{A}_i$ o rzędzie równym 1:
$$
\boldsymbol{A}=
\sum_{i=1}^r\sigma_i\boldsymbol{u_iv_i}^T=
\sum_{i=1}^r\sigma_i\boldsymbol{A}_i
$$
Jeśli nie zsumujemy ze sobą wszystkich macierzy $\boldsymbol{A}_i$ $(i=1,\dots,r)$, a jedynie $k\lt r$ z nich, to otrzymamy przybliżenie $\boldsymbol{A}$ $k$-tego rzędu $(rz(\boldsymbol{\hat{A}}(k))=k)$:
$$
\boldsymbol{\hat{A}}(k):=
\sum_{i=1}^k\sigma_i\boldsymbol{u_iv_i}^T=
\sum_{i=1}^k\sigma_i\boldsymbol{A}_i
$$
