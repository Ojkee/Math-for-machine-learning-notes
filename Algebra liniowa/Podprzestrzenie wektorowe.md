Podprzestrzenie wektorowe to zbiory zawarte w oryginalnej [[Przestrzenie wektorowe|przestrzeni wektorowej]]. Przydatne w redukcji wymiarowości.

### Definicja
Niech $V = (\mathcal{V}, +, \cdot)$ będzie przestrzenią wektorową i $\mathcal{U} \subseteq\mathcal{V}, \mathcal{U} \neq \emptyset. U = (\mathcal{U}, +, \cdot)$ nazywamy **podprzestrzenią wektorową** V (lub podprzestrzenią liniową), jeśli U jest przestrzenią wektorową z operacjami + oraz $\cdot$ ograniczonymi do $\mathcal{U} \times \mathcal{U}$ i $\mathbb{R} \times \mathcal{U}$. U jest podprzestrzenią V, zapisujemy jako $U \subseteq V$. 

Aby pokazać, czy $(\mathcal{U}, +, \cdot)$ jest podprzestrzenią V, musimy pokazać, że:
1. $\mathcal{U} \neq \emptyset$, a w szczególności, że $\textbf{0} \in \mathcal{U}$. 
2. U jest zamknięte:
  - w odniesieniu do operacji zewnętrznej: $\forall \lambda \in \mathbb{R} \forall \textbf{x} \in \mathcal{U}: \lambda\textbf{x} \in \mathcal{U}$ 
  - w odniesieniu do operacji wewnętrznej: $\forall \textbf{x,y} \in \mathcal{U}: \textbf{x + y} \in \mathcal{U}$ 

Każda podprzestrzeń $U \subseteq (\mathbb{R}^n, +, \cdot)$ jest przestrzenią rozwiązań układu jednorodnych równań liniowych $\textbf{Ax = 0}$ dla $\textbf{x}\in\mathbb{R}^n$. 