### Definicja
Rozważmy zbiór $\mathcal{G}$ i operację $\otimes:\mathcal{G}\times\mathcal{G}\to\mathcal{G}$ zdefiniowaną na $G :=(\mathcal{G}, \otimes)$ nazywamy grupą, jeżeli spełnione są następujące własności:
#### Działanie wewnętrzne
$$
\mathcal{G}:\forall{x, y\in\mathcal{G}}:x\otimes y \in \mathcal{G}
$$
#### Łączność 
$$
\forall{x, y,z\in\mathcal{G}}:(x\otimes y )\otimes z=x\otimes(y\otimes z)
$$
#### Element neutralny
$$
\exists e \in \mathcal{G} \forall x \in \mathcal{G}: x \otimes e = x \text{ oraz } e\otimes x = x
$$
#### Element odwrotny 
$$
\forall x \in \mathcal{G} \exists y \in \mathcal{G}: x \otimes y = e \text{ oraz } y \otimes x = e 
$$
gdzie $e$ to element neutralny. Element odwrotny do $x$ jest często oznaczany jako $x^{-1}$.

#### Grupa abelowa
Grupa jest grupą abelową jeżeli dodatkowo jest spełniony warunek
$$
\forall x,y\in \mathcal{G}: x\otimes y = y \otimes x
$$
### Przykłady
- $(\mathbb{Z}, +)$ jest grupą abelową
- $(\mathbb{N}_0, +)$ nie jest grupą. Posiada element neutralny (0), ale nie ma elementów odwrotnych
- $(\mathbb{R}, \cdot)$ nie jest grupą, ponieważ 0 nie posiada elementu odwrotnego
- $(\mathbb{R}\setminus\{0\}, \cdot)$ jest grupą abelową
- $(\mathbb{R}^n, +)$, $(\mathbb{Z}^n, +)$, $n\in\mathbb{N}$ są grupami abelowymi, jeżeli dodawanie jest zdefiniowane pomiędzy odpowiadającymi sobie elementami