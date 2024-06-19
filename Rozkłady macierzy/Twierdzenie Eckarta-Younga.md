Rozważmy macierz $\boldsymbol{A}\in\mathbb{R}^{m\times n}$ [[Rząd|rzędu]] $r$. Niech $\boldsymbol{B}\in\mathbb{R}^{m\times n}$ będzie macierzą rzędu $k$. Dla dowolnego $k\le r$ i $\boldsymbol{\hat{A}}(k)=\sum^k_{i=1}\sigma_i\boldsymbol{u}_i\boldsymbol{v}_i^T$:
$$
\boldsymbol{\hat A}(k)=
\text{argmin}_{rk(\boldsymbol B)k}\|\boldsymbol A-\boldsymbol B\|_2
$$
$$
\|\boldsymbol A - \boldsymbol{\hat A}(k)\|_2=
\sigma_{k+1}
$$
Twierdzenie Eckerta-Younga jawnie określa błąd [[Przybliżenie macierzy|przybliżenia]] $\boldsymbol{A}$ za pomocą macierzy $k$-tego rzędu.
Z twierdzenia Eckerta-Younga wynika, że możemy wykorzystać [[Rozkład według wartości osobliwych|rozkład według wartości osobliwych]] do zredukowania macierzy $\boldsymbol{A}$ o rzędzie r do macierzy $\boldsymbol{A}$ o rzędzie $k$ w uporządkowany i optymalny sposób. 

