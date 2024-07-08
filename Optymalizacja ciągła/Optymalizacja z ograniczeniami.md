Metoda znajdowania minimum [[Funkcja|funkcji]] z ograniczeniami.
Dla funkcji o wartościach rzeczywistych $g_i:\mathbb R^D\to\mathbb R$ $(i=1,\dots,m)$ rozważmy problem optymalizacji 
$$
\underset{x}{\min}f(\boldsymbol x)
$$
z ograniczeniem $g_i(\boldsymbol x)\le\boldsymbol0$ dla wszystkich $i=,\dots,m$.

![[Screenshot from 2024-07-08 02-23-11.png]]

Oczywistym, ale mało praktycznym sposobem zamiany problemu z ograniczeniami na problem bez ograniczeń jest użycie funkcji charakterystycznej
$$
J(\boldsymbol x)=
f(\boldsymbol x)+ \sum^m_{i=1}\boldsymbol1(g_i(\boldsymbol x)),
$$
gdzie $\boldsymbol 1(z)$ jest nieskończoną funkcją kroku zdefiniowaną jako 
$$
\boldsymbol 1(z)=
\begin{equation}
	\begin{cases}
	0 & \text{jeżeli }z\le0\\
	\infty & \text{w przeciwnym wypadku}
	\end{cases}
\end{equation}
$$
Funkcja ta zwraca nieskończoną karę, jeśli ograniczenie nie jest spełnione, a zatem prowadzi do tego samego rozwiązania. Ta funkcja jest trudna do zoptymalizowania, możemy tę trudność przezwyciężyć, wprowadzając [[Mnożniki Lagrange'a|mnożniki Lagrange'a]].
