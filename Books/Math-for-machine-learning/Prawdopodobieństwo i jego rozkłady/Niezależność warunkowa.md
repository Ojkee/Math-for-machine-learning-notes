Dwie [[Zmienna losowa|zmienne losowe]] $X, Y$ są niezależne warunkowo dla zadanego $Z$ wtedy i tylko wtedy, gdy
$$
p(\boldsymbol{x,y|z})=
p(\boldsymbol{x|z})p(\boldsymbol{y|z}),
$$
dla $\boldsymbol z\in\mathcal Z$, gdzie $\mathcal Z$ jest zbiorem stanów zmiennej losowej $Z$. Fakt, że $X$ jest warunkowo niezależne od $Y$ przy danym $Z$, zapisujemy ![[Screenshot from 2024-07-03 14-22-48.png]]

Definicja wymaga, aby relacja była prawdziwa dla każdej wartości $\boldsymbol z$. Równanie można interpretować jako stwierdzenie, że 'wiedza o $\boldsymbol z$, powoduje rozkład wspólnego rozkładu $\boldsymbol x$ i $\boldsymbol y$'. Niezależność zmiennych możemy potraktować jako szczególny przypadek niezależności warunkowej, w którym ![[Screenshot from 2024-07-03 14-27-21.png]]![[Screenshot from 2024-07-03 14-27-26.png]].
Za pomocą [[Reguła mnożenia|reguły mnożenia]] możemy rozszerzyć lewą stronę równania i otrzymać
$$
p(\boldsymbol{x,y|z})=
p(\boldsymbol{x|y,z})p(\boldsymbol{y|z})
$$
Jeżeli porównamy prawą stronę z pierwszego równania z powyższym to zauważyć można, że 
$$ 
p(\boldsymbol{x|y,z})=
p(\boldsymbol{x|z})
$$
Jest to alternatywna definicja. Ta reprezentacja może być zinterpretowana jako 'biorąc pod uwagę, że znamy $\boldsymbol z$, wiedza o $\boldsymbol y$ nie zmienia naszej wiedzy o $\boldsymbol x$'.