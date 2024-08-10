Macierz $\boldsymbol{A}\in\mathbb{R}^{n\times n}$ jest macierzą [[Ortogonalność|ortogonalną]] wtedy i tylko wtedy, gdy jej kolumny są [[Ortonormalność|ortonormalne]]
$$
\boldsymbol{AA}^T=\boldsymbol{I}=\boldsymbol{A}^T\boldsymbol{A}
$$
co oznacza, że
$$
\boldsymbol{A}^{-1}=\boldsymbol{A}^T
$$

Przekształcenia z macierzami ortonormalnymi nie zmieniają długości wektora. Mając macierz ortogonalną $\boldsymbol{A}$ oraz wektor $\boldsymbol{x}$ otrzymujemy
$$
\|\boldsymbol{Ax}\|^2-(\boldsymbol{Ax})^T(\boldsymbol{Ax})=\boldsymbol{x^TA^TAx}=\boldsymbol{x^TIx}=\boldsymbol{x^Tx}=\|\boldsymbol{x}\|^2
$$

[[Kąty|Kąt]] pomiędzy dwoma dowolnymi wektorami $\boldsymbol{x}$ i $\boldsymbol{y}$, mierzony za pomocą ich iloczynu wewnętrznego, również nie ulega zmianie. 

Jeżeli [[Iloczyn wewnętrzny|iloczynem wewnętrznym]] jest [[Iloczyn skalarny|iloczyn skalarny]], to kąt pomiędzy
$\boldsymbol{Ax}$ i $\boldsymbol{Ay}$ jest zdefiniowany jako
$$
cos\omega=\frac{\boldsymbol{(Ax)^T(Ay)}}{\|\boldsymbol{Ax}\|\|\boldsymbol{Ay}\|}=\frac{\boldsymbol{x^TA^TAx}}{\sqrt{\boldsymbol{x^TA^TAxy^TA^TAy}}}=\frac{\boldsymbol{x^Ty}}{\|\boldsymbol{x\|\|\boldsymbol{y}\|}}
$$

Macierze ortogonalne opisują obroty i możliwością odbicia. 
