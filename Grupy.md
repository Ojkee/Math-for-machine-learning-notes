Rozważmy zbiór $\mathbb{G}$ i operację $\otimes:\mathbb{G}\times\mathbb{G}\to\mathbb{G}$ zdefiniowaną na $\mathbb{G}$. G := $(\mathbb{G}, \otimes)$ nazywamy grupą, jeżeli spełnione są następujące własności:
### Działanie wewnętrzne
$$
\mathbb{G}:\forall{x, y\in\mathbb{G}}:x\otimes y \in \mathbb{G}
$$
### Łączność 
$$
\forall{x, y,z\in\mathbb{G}}:(x\otimes y )\otimes z=x\otimes(y\otimes z)
$$
### Element neutralny
$$
\exists e \in \mathbb{G} \forall x \in \mathbb{G}: x \otimes e = x \text{ oraz } e\otimes x = x
$$
### Element odwrotny 
$$
\forall x \in \mathbb{G} \exists y \in \mathbb{G}: x \otimes y = e \text{ oraz } y \otimes x = e 
$$
gdzie $e$ to element neutralny. Element odwrotny do $x$ jest często oznaczany jako $x^{-1}$.

## Grupa abelowa
Grupa jest grupą abelową jeżeli dodatkowo jest spełniony warunek
$$
\forall x,y\in \mathbb{G}: x\otimes y = y \otimes x
$$
