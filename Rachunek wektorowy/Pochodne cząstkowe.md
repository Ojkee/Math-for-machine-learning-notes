[[Pochodna|Pochodne]] cząstkowe funkcji $f:\mathbb{R}^n\to\mathbb{R}$, $\boldsymbol{x}\mapsto f(\boldsymbol{x})$, $\boldsymbol{x}\in\mathbb{R}^n$ $n$-zmiennych $x_1,...,x_n$ są definiowane w następujący sposób:
$$
\frac{\partial f}{\partial x_1}=
\lim_{h\to 0}\frac{f(x_1+h, x_2,...,x_n)- f(\boldsymbol{x})}{h}
$$
$$
\vdots
$$
$$
\frac{\partial f}{\partial x_n}=
\lim_{h\to 0}\frac{f(x_1, x_2,...,x_n+h)- f(\boldsymbol{x})}{h}
$$
Pochodne te zapisuje się w postaci wektora wierszowego:
$$
\nabla_xf=
\text{grad}f=
\frac{df}{d\boldsymbol{x}}=
\bigg
[\frac{\partial f(\boldsymbol{x})}{\partial x_1}\quad
\frac{\partial f(\boldsymbol{x})}{\partial x_2}\quad
\dots \quad
\frac{\partial f(\boldsymbol{x})}{\partial x_n}
\bigg] \in \mathbb{R}^{1\times n},
$$
gdzie $n$ to liczba zmiennych, a 1 to wymiar zbioru wartości funkcji $f$. 
Wektor wierszowy z tego równania nazywamy jest [[Gradient|gradientem]] funkcji $f$ lub jej szczególną macierzą Jacobiego. 
