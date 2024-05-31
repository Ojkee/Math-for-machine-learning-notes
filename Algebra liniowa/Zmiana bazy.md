Rozważmy odwzorowanie liniowe $\Phi:V\to W$ oraz uporządkowane [[Bazy|bazy]] 
$$
B=(\textbf{b}_1,...,\textbf{b}_n), 
\tilde{B}=(\tilde{\textbf{b}}_1,...,\tilde{\textbf{b}}_n) 
$$
[[Przestrzenie wektorowe|przestrzeni]] $V$ i uporządkowane bazy
$$
C=(\textbf{C}_1,...,\textbf{C}_n),
\tilde{C}=(\tilde{\textbf{C}}_1,...,\tilde{\textbf{C}}_n) 
$$
przestrzeni $W$. [[Macierz przekształcenia|Macierzą przekształcenia]] reprezentującą odwzorowanie $\Phi :V\to W$  w odniesieniu do baz $B$ i $C$ jest $\textbf{A}_\Phi$ oraz analogicznie w odniesieniu do $\tilde{B}$ i $\tilde{C}$ jest $\tilde{\textbf{A}}_\Phi$. Przekształcając $\textbf{A}_\Phi$ w $\tilde{\textbf{A}}_\Phi$ możemy przeprowadzić zmianę baz z $B$, $C$ na $\tilde{B}$, $\tilde{C}$. 

#### Twierdzenie
Dla powyższych danych mamy:
$$
\tilde{\textbf{A}}_\Phi=\textbf{T}^{-1}\textbf{A}_\Phi\textbf{S}
$$
Gdzie $\textbf{S}\in\mathbb{R}^{n\times n}$ jest macierzą przekształcenia identycznościowego $id_V$, które odwzorowuje [[Współrzędne|współrzędne]] w bazie $\tilde{B}$ na współrzędne w bazie $B$, a $\textbf{T}\in\mathbb{R}^{m\times m}$ jest macierzą przekształcenia $id_W$, które odwzorowuje współrzędne w bazie $\tilde{C}$ na $C$.  