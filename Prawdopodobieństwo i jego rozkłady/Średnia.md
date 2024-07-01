Szczególny przypadek [[Wartość oczekiwana|wartości oczekiwanej]], w którym [[Funkcja|funkcja]] $g$ jest przekształceniem identycznościowym.

Średnia [[Zmienna losowa|zmiennej losowej]] $X$, która przyjmuje wartości $\boldsymbol x\in\mathbb R^D$, jest zdefiniowana jako
$$
\mathbb E_X(\boldsymbol x)=
\begin{bmatrix}
\mathbb E_X{}_1(x_1) \\
\vdots \\
\mathbb E_X{}_D(x_D) \\
\end{bmatrix} \in \mathbb R^D,
$$
gdzie dla $d=1,\dots,D$ 
$$
\mathbb E_X{}_d(x_d):= 
\begin{cases}
\int_\mathcal Xx_dp(x_d)\text dx,
\qquad\qquad \text{jeżeli $X$ jest ciągłą zmienna losową} \\
\sum_{x_i\in\mathcal X}x_ip(x_d=x_i), 
\qquad\text{jeżeli $X$ jest dyskretną zmienną losową}
\end{cases}
$$
Indeks dolny $d$ wskazuje, o który element (wymiar) wektora $\boldsymbol x$ chodzi. 

#### Przykład
![[Screenshot from 2024-07-01 01-25-09.png]]![[Screenshot from 2024-07-01 01-25-22.png]]
