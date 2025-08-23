Najprostszym sposobem na wyznaczenie macierzy [[Obroty|obrotu]] jest ustalenie, w jaki sposób obracane są obrazy [[Bazy|bazy]] standardowej $\boldsymbol{e_1,e_2,e_3}$ i upewnienie się, że te obrazy $\boldsymbol{Re_1,Re_2,Re_3}$ są względem siebie [[Ortonormalność|ortonormalne]]. 
Po połączeniu obrazów bazy standardowej otrzymamy ogólną macierz rotacji $\boldsymbol{R}$. 

#### Przykład
![[Screenshot from 2024-06-14 12-57-32.png]]
$$
\boldsymbol{R}(\Theta) = [\Phi(\boldsymbol{e}_1) \:\Phi(\boldsymbol{e}_2)\:\Phi(\boldsymbol{e}_3)]
$$
- Obrót wokół osi $\boldsymbol{e}_1, \boldsymbol{e}_2$ oraz $\boldsymbol{e}_3$ 
$$
\boldsymbol{R}_1(\Theta)=
\begin{bmatrix}
1 & 0 & 0 \\
0 & cos\Theta & -sin\Theta \\
0 & sin\Theta & cos\Theta
\end{bmatrix}
$$
$$
\boldsymbol{R}_2(\Theta)=
\begin{bmatrix}
cos\Theta & 0 & sin\Theta \\
0 & 1 & 0 \\
-sin\Theta & 0 & cos\Theta
\end{bmatrix}
$$
$$
\boldsymbol{R}_3(\Theta)=
\begin{bmatrix}
cos\Theta & -sin\Theta & 0 \\
sin\Theta & cos\Theta & 0 \\
0 & 0 & 1
\end{bmatrix}
$$

