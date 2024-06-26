Rozważmy [[Funkcja|funkcję]] $f:\mathbb{R}^2\to\mathbb{R}$ dwóch zmiennych $x_1$ i $x_2$. Niech $x_1(t)$ i $x_2(t)$ będą funkcjami zmiennej $t$. Aby obliczyć [[Gradient|gradient]] $f$ względem $t$, musimy zastosować regułę łańcuchową dla funkcji wielowymiarowych:
$$
\frac{\text d f}{\text d t}=
\begin{bmatrix}
\frac{\partial f}{\partial x_1} & \frac{\partial f}{\partial x_2}
\end{bmatrix}
\begin{bmatrix}
\frac{\partial x_1(t)}{\partial t} \\
\frac{\partial x_2(t)}{\partial t}
\end{bmatrix} =
\frac{\partial f}{\partial x_1}\frac{\partial x_1}{\partial t} + 
\frac{\partial f}{\partial x_2}\frac{\partial x_2}{\partial t},
$$
gdzie $d$ oznacza gradient, a $\partial$ [[Pochodne cząstkowe|pochodne cząstkowe]].

#### Przykład
![[Screenshot from 2024-06-25 22-56-02.png]]

Jeśli $f(x_1, x_2)$ jest funkcją $x_1$ i $x_2$, a $x_1(s, t)$ i $x_2(s, t)$ są funkcjami dwóch zmiennych $s$ i $t$, to za pomocą reguły łańcuchowej możemy obliczyć pochodne cząstkowe w następujący sposób:
$$
\dfrac{\partial f}{\partial s}=
\dfrac{\partial f}{\partial \color{yellow} x_1}
\dfrac{\partial \color{yellow}x_1}{\partial \color{red} s}+
\dfrac{\partial f}{\partial \color{yellow}x_2}
\dfrac{\partial \color{yellow}x_2}{\partial \color{red}t}
$$
Gradient otrzymamy z mnożenia macierzy:
$$
\frac{\text d f}{\text d(s,t)}=
\frac{\partial f}{\partial \boldsymbol{x}}
\frac{\partial\boldsymbol{x}}{\partial(s,t)}=
\underset{=\dfrac{\partial f}{\partial\boldsymbol x}}{
\begin{bmatrix}
\frac{\partial f}{\color{yellow}{\partial x_1}} & 
\frac{\partial f}{\color{red}{\partial x_2}}
\end{bmatrix}
}
\underset{=\dfrac{\partial\boldsymbol x}{\partial(s,t)}}{
\begin{bmatrix}
\color{yellow}\dfrac{\partial x_1}{\partial s} &
\color{yellow}\dfrac{\partial x_1}{\partial t} \\
\color{red}\dfrac{\partial x_2}{\partial s} &
\color{red}\dfrac{\partial x_2}{\partial t}
\end{bmatrix}
}
$$
#### Przykład
![[Screenshot from 2024-06-26 00-50-16.png]]