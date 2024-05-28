Rzeczywista przestrzeń wektorowa $V = (\mathcal{V}, +, \cdot)$ jest zbiorem $\mathcal{V}$, na którym określono następujące działania
$$
+:\mathcal{V}\times\mathcal{V}\to\mathcal{V}
$$
$$
\cdot:\mathbb{R}\times\mathcal{V}\to\mathcal{V} 
$$
gdzie:
1. $(\mathcal{V}, +)$ jest [[Grupy|grupą abelową]].
2. Zachodzi rozdzielność względem dodawania:
$$
\forall \lambda\in \mathbb{R},\textbf{x,y}\in \mathcal{V}:\lambda \cdot (\textbf{x +y}) = \lambda \cdot \textbf{x} + \lambda \cdot \textbf{y}
$$
$$
\forall \lambda,\psi \in \mathbb{R}, \textbf{x}\in \mathcal{V}: (\lambda + \psi)\cdot\textbf{x} = \lambda\cdot\textbf{x} + \psi\cdot\textbf{x}
$$
3. Działanie zewnętrzne jest łączne:
$$
\forall\lambda,\psi\in\mathbb{R}, \textbf{x}\in\mathcal{V}:\lambda\cdot(\psi\cdot\textbf{x}) = (\lambda\psi)\cdot\textbf{x}
$$
4. Istnieje element neutralny względem operacji zewnętrznej: 
$$
\forall \textbf{x}\in\mathcal{V}:1\cdot \textbf{x} = \textbf{x}
$$
### Przykład
- $\mathcal{V} = \mathbb{R}^n$, gdzie $n\in\mathbb{N}$ oraz jej zdefiniowane działania:
  - $\textbf{x + y} = (x_1, ... ,x_n) + (y_1, ... , y_n) = (x_1 + y_1, ... , x_n + y_n)$ dla wszystkich $\textbf{x, y} \in \mathbb{R}^n$ 
  - $\lambda\textbf{x} = \lambda (x_1,...,x_n) = (\lambda x_1,...,\lambda x_n)$ dla wszystkich $\lambda \in \mathbb{R}, \textbf{x}\in\mathbb{R}^n$  