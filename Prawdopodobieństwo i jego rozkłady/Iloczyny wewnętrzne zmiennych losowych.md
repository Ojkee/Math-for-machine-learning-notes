[[Iloczyn wewnętrzny|Iloczyny wewnętrzne]] możemy również zdefiniować pomiędzy [[Zmienna losowa|zmiennymi losowymi]]. 
Jeśli mamy dwie nieskorelowane zmienne losowe $X,Y$, to
$$
\mathbb V[x+y] =
\mathbb V[x] +
\mathbb V[y]
$$
Ponieważ [[Wariancja|wariancje]] są mierzone w jednostkach do kwadratu to powyższe twierdzenie przypomina twierdzenie Pitagorasa dla trójkątów prostokątnych $c^2=a^2+b^2$. 
Zmienne losowe można uznać za wektory w [[Przestrzenie wektorowe|przestrzeni wektorowej]], więc można na nich zdefiniować iloczyny wewnętrzne, które pozwolą zbadać ich własności geometryczne. Dla dwóch zmiennych losowych $X$ i $Y$ o zerowej [[Średnia|średniej]] arytmetycznej możemy zdefiniować iloczyn wewnętrzny jako 
$$
\langle X, Y\rangle:=
\text{cov}[x,y]
$$
Widzimy, że kowariancja jest [[Symetryczne, dodatnio określone macierze|symetryczna, dodatnio określona]] i liniowa w każdym argumencie. 
Długość zmiennej losowej to jej [[Odchylenie standardowe|odchylenie standardowe]], tj
$$
\|X\|=
\sqrt{\text{cov}[x,x]}=
\sqrt{\mathbb V[x]}=
\sigma[x]
$$
$$
\text{cov}(x,x)=0 
\Leftrightarrow
x=0
$$
$$
\text{cov}(\alpha x+z, y)=
\alpha\text{cov}(x+y) +\text{cov}(z+y) 
$$
dla $\alpha\in\mathbb R$. 
Im dłuższa jest zmienna losowa, tym większa jej niepewność. Zmienna losowa o długości 0 jest w pełni deterministyczna. 

Jeśli spojrzymy na kąt $\theta$ między dwiema zmiennymi losowymi $X, Y$, to możemy zauważyć, że
$$
\cos\theta=
\dfrac{\langle X,Y\rangle}{\|X\|\|Y\|}=
\dfrac{\text{cov}[x,y]}{\sqrt{\mathbb V[x]\mathbb V[y]}}
$$
Jest to [[Współczynnik korelacji|korelacja]] dwóch zmiennych losowych. Oznacza to, że w kontekście geometrycznym możemy myśleć o korelacji jako o cosinusie kąta między dwiema zmiennymi losowymi. 

Z definicji wiemy, że $X\bot Y\Leftrightarrow \langle X,Y\rangle=0$. Tutaj oznacza to, że $X$ i $Y$ są [[Ortogonalność|ortogonalne]] wtedy i tylko wtedy, gdy $\text{cov}[x,y]=0$, czyli, gdy zmienne nie są skorelowane.
![[Screenshot from 2024-07-03 14-58-13.png]]


