Wewnętrzność dodawania i mnożenia wektorów przez skalar gwarantuje, że otrzymamy inny wektor należący do tej samej [[Przestrzenie wektorowe|przestrzeni]] wektorowej. Zbiór wektorów, za pomocą, których stosując dodawanie i skalowanie, możemy przedstawić każdy wektor określonej przestrzeni nazywamy bazą.

### Definicja 
Rozważmy przestrzeń wektorową V i skończoną liczbę wektorów $x_1,...,x_n \in V$. Każdy wektor $\mathcal{v} \in V$ taki, że:
$$
\mathcal{v} = \lambda_1x_1 + ... + \lambda_kx_k = \sum_{i=1}^k\lambda_i\textbf{x}_i\in V
$$
dla $\lambda_1, ... , \lambda_k \in \mathbb{R}$ nazywamy kombinacją liniową wektorów $x_1,...,x_k$.
Rozważmy przestrzeń wektorową V i $x_1,...,x_k \in V(k\in\mathbb{N})$. Jeżeli dla co najmniej jednego $\lambda_i \neq 0$ istnieje nietrywialna kombinacja liniowa taka, że $\textbf{0} = \sum_{i=1}^k \lambda_ix_i$, to wektory $x_1,...,x_k$ są $\textbf{liniowo zależne}$. Jeśli istnieje jedynie rozwiązanie trywialne, tj. $\lambda_1 = ... = \lambda_k = 0$, to wektory $x_1,...,x_k$ są $\textbf{liniowo niezależne}$. 

Aby sprawdzić czy wektory są liniowo niezależne wystarczy użyć eliminacji Gaussa na macierzy stworzonej z owych wektorów jako kolumny. 