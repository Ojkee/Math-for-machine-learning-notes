### Definicja
Rozważmy [[Przestrzenie wektorowe|przestrzeń wektorową]] $V = (\mathcal{V},+,\cdot)$ i $\mathcal{A} \subseteq \mathcal{V}$. Zbiór generujący przestrzeń V $(\mathcal{A})$ nazywamy minimalnym, jeśli nie istnieje mniejszy zbiór $\mathcal{Ã} \subsetneq \mathcal{A} \subseteq \mathcal{V}$, który rozpina V. Każdy [[Niezależność liniowa|liniowo niezależny]] zbiór generujący V jest minimalny. Zbiór taki nazywamy Bazą. 

Niech $V = (\mathcal{V}, +, \cdot)$ będzie przestrzenią wektorową oraz $\mathcal{B} \subseteq\mathcal{V}, \mathcal{B} \neq \emptyset$. Wówczas:
- $\mathcal{B}$ jest bazą V.
- $\mathcal{B}$ to minimalny zbiór generujący V.
- $\mathcal{B}$ jest maksymalny zbiorem liniowo niezależnych wektorów w przestrzeni V, czyli, jeżeli dodamy do niego dowolny wektor, to spowoduje, że ten zbiór stanie się zbiorem wektorów liniowo zależnych.
- Każdy wektor $\textbf{x} \in \mathcal{V}$ jest kombinacją liniową wektorów z $\mathcal{B}$. Każda kombinacja jest unikalna, więc:
$$
\textbf{x} = \sum_{i=1}^k\lambda_i\textbf{b}_i=\sum_{i=1}^k\psi_i\textbf{b}_i
$$
	$\lambda_i, \psi_i \in \mathbb{R}$ oraz $\textbf{b}_i \in \mathcal{B}: \lambda_i = \psi_i$ $(i = 1,...,k)$.

$\textbf{Bazą ortogonalną}$ jest baza, której wektory są to siebie prostopadłe.
$\textbf{Bazą ortonormalną}$ jest baza ortogonalna, której wektory mają długość 1.
$\textbf{Bazą standardową}$ (kanoniczną) jest baza ortonormalna, której wektory wskazują kierunki osi współrzędnych.

Każda przestrzeń wektorowa V ma bazę $\mathcal{B}$ oraz może mieć ich kilka. 

#### Wyznaczanie bazy na przykładzie
Mamy podprzestrzeń $U \subseteq \mathbb{R}^5$ generowaną przez wektory:
$$
\newcommand\mycolv[1]{\begin{bmatrix}#1\end{bmatrix}}
x_1= \mycolv{1\\2\\-1\\-1\\-1}, x_2=\mycolv{2\\-1\\1\\2\\-2}, x_3=\mycolv{3\\-4\\3\\5\\-3}, x_4= \mycolv{-1\\8\\-5\\-6\\1}\in \mathbb{R^5} 
$$
Aby sprawdzić czy są [[Niezależność liniowa|liniowo niezależne]] musimy rozwiązać równanie:
$$
\sum_{i=1}^4\lambda_ix_i = \textbf{0}
$$
Układamy macierz:
$$
\left[x_1,x_2,x_3,x_4\right]= \begin{bmatrix} 1 & 2 & 3 & -1 \\2&-1&-4&8\\-1&1&3&-5\\-1&2&5&-6\\-1&-2&-3&1\end{bmatrix}
$$
Po przekształceniach otrzymujemy:
$$
 \begin{bmatrix} 1&2&3&-1\\0&1&2&-2\\0&0&0&1\\0&0&0&0\\0&0&0&0\end{bmatrix}
$$
Wartości wiodące postaci schodkowej pokazują wektory liniowo niezależne. Są nimi $x_1, x_2, x_4$. Oraz jedynym rozwiązaniem $\lambda_1x_1 + \lambda_2x_2 + \lambda_3x_3 =\textbf{0}$ jest $\lambda_1 = \lambda_2 = \lambda_4 = 0$. Stąd bazą $U$ jest zbiór $\{x_1, x_2, x_3\}$. 