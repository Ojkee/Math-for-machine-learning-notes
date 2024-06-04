#### Definicja
Rząd to liczba [[Niezależność liniowa|liniowo niezależnych]] kolumn macierzy $A\in\mathbb{R}^{m\times n}$. Oznacza się jako $rz(\textbf{A})$.

#### Własności
- $rz(\textbf{A}) = rz(\textbf{A}^T)$
- Kolumny $\textbf{A}\in\mathbb{R}^{m\times n}$ generują [[Podprzestrzenie wektorowe|podprzestrzeń]] $U \subseteq \mathbb{R}^m$ o wymiarze $dim(W)=rz(\textbf{A})$, tę przestrzeń nazywamy obrazem. [[Bazy|Bazę]] podprzestrzeni $U$ można znaleźć stosując eliminację Gaussa na macierzy $\textbf{A}$.
- Wiersze macierzy $\textbf{A}\in \mathbb{R}^{m\times n}$ generują podprzestrzeń $W \subseteq \mathbb{R}^n$ o wymiarze $\dim(W) = rz(\textbf{A})$. Bazę podprzestrzeni $W$ można znaleźć, stosując eliminację Gaussa na macierzy $\textbf{A}^T$.
- Dla wszystkich $\textbf{A}\in\mathbb{R}^{n\times n}$, $\textbf{A}$ jest odwracalna wtedy i tylko wtedy, gdy $rz(\textbf{A}) = n$. 
- Dla $\textbf{A}\in\mathbb{R}^{n\times n}$ podprzestrzeń rozwiązań $\textbf{Ax=0}$ ma wymiar $n-rz(\textbf{A})$, tę przestrzeń nazywamy [[Jądro|jądrem]].

