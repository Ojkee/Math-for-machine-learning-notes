Wektorem wartości funkcji $\boldsymbol{f}:\mathbb R^n\to \mathbb R^m$, która przyjmuje $\boldsymbol{x}=[x_1,\dots,x_n]^T\in\mathbb R^n$, jest
$$
\boldsymbol{f}(\boldsymbol{x})=
\begin{bmatrix}
f_1(\boldsymbol x) \\
\vdots \\
f_2(\boldsymbol x)
\end{bmatrix} \in \mathbb R^m
$$
Ten zapis pozwala nam traktować funkcję o wartościach wektorowych jako wektor $[f_1,\dots,f_m]^T$ postaci $f_i:\mathbb R^n \to \mathbb R$, których zbiorem wartości jest $\mathbb R$. [[Iloraz różnicowy|Różniczkowanie]] funkcji $f_i$ odbywa się za pomocą [[Zasady różniczkowania|reguł różniczkowania]]. 
A zatem [[Pochodne cząstkowe|pochodną cząstkową]] funkcji o wartościach wektorowych $\boldsymbol f:\mathbb R^n\to\mathbb R^m$ względem $x_i\in\mathbb R (i=1,\dots n)$ jest wektor
$$
\frac{\partial \boldsymbol f}{\partial x_i}=
\begin{bmatrix}
\dfrac{\partial f_1}{\partial x_i} \\
\vdots \\
\dfrac{\partial f_m}{\partial x_i}
\end{bmatrix}=
\begin{bmatrix}
\lim_{h \to 0} \dfrac{f_1(x_1,\dots,x_{i-1},x_i+h,x_{i+1},\dots,x_n)-f_1(\boldsymbol x)}{h} \\
\lim_{h \to 0} \dfrac{f_m(x_1,\dots,x_{i-1},x_i+h,x_{i+1},\dots,x_n)-f_m(\boldsymbol x)}{h} \\
\end{bmatrix}
$$
[[Gradient|Gradientem]] $\boldsymbol f$ względem wektora jest wektor wierszowy pochodnych cząstkowych, a każda pochodna cząstkowa $\frac{\partial \boldsymbol f}{\partial x_i}$ jest wektorem kolumnowym. 
Gradient $\boldsymbol f:\mathbb R^n\to\mathbb R^m$ względem $\boldsymbol x\in\mathbb R^n$ to zbiór wszystkich pochodnych cząstkowych:
$$
\dfrac{\text d\boldsymbol f(\boldsymbol x)}{\text d\boldsymbol x}=
\begin{bmatrix} 
\,
\bbox[border: 2px solid white]{\dfrac{\partial \boldsymbol f(\boldsymbol x)}{\partial x_1}} & 
\dots &
\bbox[border: 2px solid white]{\dfrac{\partial \boldsymbol f(\boldsymbol x)}{\partial x_n}} \,
\end{bmatrix} = 
\begin{bmatrix} \,\,
\bbox[border: 2px solid white]{
\begin{matrix}
\dfrac{\partial f_1(\boldsymbol x)}{\partial x_1} \\
\vdots \\
\dfrac{\partial f_m(\boldsymbol x)}{\partial x_1}
\,\, \end{matrix}
}
\quad
\begin{matrix}
\dots \\
\\
\dots\\
\end{matrix}
\quad

\bbox[border: 2px solid white]{
\begin{matrix}
\dfrac{\partial f_1(\boldsymbol x)}{\partial x_n} \\
\vdots \\
\dfrac{\partial f_m(\boldsymbol x)}{\partial x_n}
\,\, \end{matrix}}
\,\,\end{bmatrix} \in \mathbb R^{m\times n}
$$

#### Przykład 
