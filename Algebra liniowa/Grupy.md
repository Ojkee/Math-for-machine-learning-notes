Rozważmy zbiór $\mathcal{G}$ i operację $\otimes:\mathcal{G}\times\mathcal{G}\to\mathcal{G}$ zdefiniowaną na $G :=(\mathcal{G}, \otimes)$ nazywamy grupą, jeżeli spełnione są następujące własności:
### Działanie wewnętrzne
$$
\mathcal{G}:\forall{x, y\in\mathcal{G}}:x\otimes y \in \mathcal{G}
$$
### Łączność 
$$
\forall{x, y,z\in\mathcal{G}}:(x\otimes y )\otimes z=x\otimes(y\otimes z)
$$
### Element neutralny
$$
\exists e \in \mathcal{G} \forall x \in \mathcal{G}: x \otimes e = x \text{ oraz } e\otimes x = x
$$
### Element odwrotny 
$$
\forall x \in \mathcal{G} \exists y \in \mathcal{G}: x \otimes y = e \text{ oraz } y \otimes x = e 
$$
gdzie $e$ to element neutralny. Element odwrotny do $x$ jest często oznaczany jako $x^{-1}$.

## Grupa abelowa
Grupa jest grupą abelową jeżeli dodatkowo jest spełniony warunek
$$
\forall x,y\in \mathcal{G}: x\otimes y = y \otimes x
$$
