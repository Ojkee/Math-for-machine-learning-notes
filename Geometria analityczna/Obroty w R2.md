Rozważmy [[Bazy|bazę]] standardową $\{\boldsymbol{e}_1=[1, 0]^T, \boldsymbol{e}_2=[0, 1]^T\}$ przestrzeni $\mathbb{R}^2$, która definiuje standardowy układ [[Współrzędne|współrzędnych]]. Po [[Obroty|obrocie]] te wektory wciąż są nadal [[Niezależność liniowa|liniowo niezależne]] i dalej stanowią bazę przestrzeni $\mathbb{R}^2$, co oznacza, że w wyniku obrotu następuje [[Zmiana bazy|zmiana bazy]].

Obroty $\Phi$ są odwzorowaniami liniowymi, dzięki czemu możemy zapisać je za pomocą macierzy obrotu $\boldsymbol{R}(\Theta)$. 

#### Przykład
$$
\newcommand\mycolv[1]{\begin{bmatrix}#1\end{bmatrix}}
\Phi(\boldsymbol{e}_1)=\mycolv{cos\Theta\\sin\Theta}\;\;\;\;\;\Phi(\boldsymbol{e}_2)=\mycolv{-sin\Theta\\cos\Theta}
$$
![[Screenshot from 2024-06-14 02-11-09.png]]
W tym przykładzie macierz obrotu ma postać
$$
\boldsymbol{R}(\Theta)=[\Phi(\boldsymbol{e}_1) \:\Phi(\boldsymbol{e}_2)]=
\begin{bmatrix}
cos\Theta & -sin\Theta\\
sin\Theta & cos\Theta
\end{bmatrix}
$$
