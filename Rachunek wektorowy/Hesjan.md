Inaczej macierz Hessego, to zbiór wszystkich [[Pochodne cząstkowe|pochodnych cząstkowych]] [[Pochodne wyższych rzędów|drugiego rzędu]]. Jeśli $f(x,y)$ jest funkcją dwukrotnie różniczkowalną, to
$$
\frac{\partial^2f}{\partial x\partial y}=
\frac{\partial^2f}{\partial y\partial x}
$$
tj. kolejność różniczkowania nie ma znaczenia. Hesjanem tej funkcji jest macierz symetryczna
$$
\boldsymbol H=
\begin{bmatrix}
\dfrac{\partial^2f}{\partial x^2} & 
\dfrac{\partial^2f}{\partial x\partial y} \\
\dfrac{\partial^2f}{\partial x\partial y} &
\dfrac{\partial^2f}{\partial y^2}
\end{bmatrix}
$$
Oznaczamy go również symbolem $\nabla^2_{x,y}f(x,y)$. Dla $\boldsymbol x\in\mathbb R^n$ i $f:\mathbb R^n\to\mathbb R$ hesjan jest macierzą o wymiarach $n\times n$. Hesjan mierzy lokalną krzywiznę wokół punktu $(x, y)$. 

