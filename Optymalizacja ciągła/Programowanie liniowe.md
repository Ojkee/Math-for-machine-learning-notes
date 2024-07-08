Rozważmy szczególny przypadek, w którym wszystkie funkcje optymalizowane są liniowe, to znaczy problem
$$
\underset{x\in\mathbb R^d}{\min}\boldsymbol c^T\boldsymbol x
$$
z ograniczeniem 
$$
\boldsymbol{Ax} \le \boldsymbol b,
$$
gdzie $\boldsymbol A\in\mathbb R^{m\times d}$ i $\boldsymbol b\in\mathbb R^m$. Problem ten nazywamy programem liniowym. Ma on $d$ zmiennych i $m$ ograniczeń liniowych. Odpowiadający my [[Mnożniki Lagrange'a|lagranżjan]] to
$$
\mathfrak L(\boldsymbol{x, \lambda})=
\boldsymbol c^T\boldsymbol x + \boldsymbol\lambda^T(\boldsymbol{Ax}-\boldsymbol b),
$$
gdzie $\boldsymbol\lambda\in\mathbb R^m$ jest wektorem nieujemnych mnożników Lagrange'a. Po uporządkowaniu składników związanych z wektorem $\boldsymbol x$ otrzymujemy
$$
\mathfrak L(\boldsymbol x, \boldsymbol \lambda)=
(\boldsymbol c+\boldsymbol A^T\boldsymbol\lambda)^T\boldsymbol x -
\boldsymbol\lambda^T\boldsymbol b
$$
Po obliczeniu pochodnej $\mathfrak L(\boldsymbol{x, \lambda})$ względem $\boldsymbol x$ i przyrównaniu jej do zera otrzymujemy
$$
\boldsymbol c+ \boldsymbol A^T\boldsymbol\lambda=\boldsymbol 0
$$
Stąd lagranżjan problemu dualnego to $\mathfrak D(\boldsymbol\lambda)=-\boldsymbol\lambda^T\boldsymbol b$. Przypomnijmy, że chcemy zmaksymalizować $\mathfrak D(\boldsymbol\lambda)$. Oprócz ograniczenia mówiącego, że pochodna $\mathfrak L(\boldsymbol{x, \lambda})$ musi być równa zero, mamy jeszcze ograniczenie $\boldsymbol\lambda\ge\boldsymbol0$. W efekcie otrzymujemy więc następujący problem dualny
$$
\underset{\lambda\in\mathbb R^m}{\max}-\boldsymbol b^T\boldsymbol\lambda
$$
z ograniczeniami 
$$
\boldsymbol c +
\boldsymbol A^T\boldsymbol\lambda =
\boldsymbol0
$$
$$
\boldsymbol\lambda\ge0
$$
Jest to również program liniowy, ale z $m$ zmiennych. W zależności od tego, czy $m$, czy $d$ jest większe, możemy rozwiązać problem pierwotny lub dualny. 

#### Przykład
![[Screenshot from 2024-07-08 18-42-53.png]]
