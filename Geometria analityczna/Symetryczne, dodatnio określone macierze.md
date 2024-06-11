Rozważmy $n$-wymiarową przestrzeń wektorową $V$ z iloczynem skalarnym $\langle\cdot,\cdot\rangle:\Omega:V\times V\to\mathbb{R}$ i uporządkowaną [[Bazy|bazą]] $B=(b_1,...,b_n)$. Dla odpowiednio dobranych $\psi_i, \lambda_j\in\mathbb{R}$ dowolne wektory $\boldsymbol{x,y}\in V$ można zapisać jako kombinację liniową wektorów bazowych $\boldsymbol{x}=\sum_{i=1}^n{\psi_i\boldsymbol{b}_i}\in V$ i $\boldsymbol{y}=\sum^n_{j=1}\lambda_j\boldsymbol{b}_j\in V$. Ze względu na dwuliniowość [[Iloczyn wewnętrzny|iloczynu wewnętrznego]] dla wszystkich $\boldsymbol{x,y}\in V$
$$
\langle\boldsymbol{x,y}\rangle=\langle\sum^n_{i=1}\psi_i\boldsymbol{b}_i, \sum^n_{j=1}\lambda_j\boldsymbol{b}_j\rangle= \sum_{i=1}^n\sum_{j=1}^n\psi_i\langle\boldsymbol{b}_i, \boldsymbol{b}_j\rangle\lambda_j=\boldsymbol{\hat{x}^TA\hat{y}},
$$
gdzie $A_{i,j}:=\langle\boldsymbol{b}_i, \boldsymbol{b}_j\rangle$, a $\boldsymbol{\hat{x}, \hat{y}}$ są współrzędnymi $\boldsymbol{x}$ i $\boldsymbol{y}$ w bazie $B$. Oznacza to, że $\boldsymbol{A}$ jednoznacznie określa [[Iloczyn skalarny|iloczyn skalarny]] $\langle\cdot,\cdot\rangle$. Symetria iloczyny skalarnego powoduje, że $\boldsymbol{A}$ jest macierzą symetryczną, a dodatnia określoność implikuje, że
$$
\forall\boldsymbol{x}\in V \textbackslash\{\boldsymbol{0}\}:\boldsymbol{x^TAx}\gt0
$$
#### Definicja
Symetryczna macierz $\boldsymbol{A}\in \mathbb{R}^{n\times n}$, która spełnia równanie:
$$
\forall\boldsymbol{x}\in V \textbackslash\{\boldsymbol{0}\}:\boldsymbol{x^TAx}\gt0
$$
jest nazywana symetryczną macierzą dodatnio określoną, ale kiedy znak $\gt$ zastąpimy znakiem $\ge$ w powyższym równaniu to taką macierz nazywamy macierzą symetryczną dodatnio półkreśloną (nieujemnie kreśloną).