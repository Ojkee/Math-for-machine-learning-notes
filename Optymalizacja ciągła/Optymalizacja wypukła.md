Klasa problemów optymalizacyjnych, w której globalność optimum są gwarantowane.

Jeżeli $f(\cdot)$ jest [[Funkcja|funkcją]] wypukłą, a ograniczenia obejmujące $g(\cdot)$ i $h(\cdot)$ są zbiorami wypukłymi, to problem nazywamy problemem optymalizacji wypukłej. Optymalne rozwiązanie problemu dualnego jest takie samo jak optymalne rozwiązanie problemu pierwotnego. 

Zbiór $\mathcal C$ jest zbiorem wypukłym, jeżeli dla dowolnych $x, y\in\mathcal C$ i dla dowolnego skalara $\theta$ takiego, że $0\le\theta\le1$:
$$
\theta x+(1-\theta)y\in\mathcal C
$$
Zbiory wypukłe to zbiory, dla których odcinek łączący dowolne dwa elementy zbioru leży wewnątrz niego. 

![[Screenshot from 2024-07-08 16-39-26.png]]![[Screenshot from 2024-07-08 16-39-32.png]]
#### Przykład
![[Screenshot from 2024-07-08 16-41-31.png]]

Niech $f:\mathbb R^D\to\mathbb R$ będzie funkcją, której dziedziną jest zbiór wypukły. Funkcja $f$ jest funkcją wypukłą, jeśli dla wszystkich $\boldsymbol{x,y}$ należących do dziedziny $f$ i dla dowolnego $\theta$ takiego, że $0\le\theta\le1$:
$$
f(\theta\boldsymbol x+(1-\theta)\boldsymbol y) \le
\theta f(\boldsymbol x)+(1-\theta)f(\boldsymbol y)
$$
Funkcja wklęsła to minus funkcja wypukła.

Funkcje ograniczające O $g(\cdot)$ i $h(\cdot)$ ograniczają dziedzinę funkcji $f(x)$ do pewnego jej podzbioru. 

Jeżeli funkcja $f:\mathbb R^n\to\mathbb R$ jest różniczkowalna to możemy określić jej wypukłość za pomocą [[Gradient|gradientu]] $\nabla_\boldsymbol x f(\boldsymbol x)$. Funkcja $f(\boldsymbol x)$ jest wypukła wtedy i tylko wtedy, gdy dla dowolnych dwóch punktów $\boldsymbol x$ i $\boldsymbol y$ 
$$
f(\boldsymbol y) \ge
f(\boldsymbol x) + \nabla_\boldsymbol xf(\boldsymbol x)^T(\boldsymbol{y-x})
$$
Jeśli dodatkowo wiemy, że funkcja $f(\boldsymbol x)$ jest dwukrotnie różniczkowalna to znaczy, że dla wszystkich wartości w dziedzinie $\boldsymbol x$ istnieje jej [[Hesjan|hesjan]] - to $f(\boldsymbol x)$ jest wypukła wtedy i tylko wtedy, gdy $\nabla_\boldsymbol x^2f(\boldsymbol x)$ jest [[Symetryczne, dodatnio półokreślone macierze|dodatnio półokreślony]]. 

#### Przykład
![[Screenshot from 2024-07-08 17-22-46.png]]

Do sprawdzenia, czy funkcja lub zbiór są wypukłe, możemy wykorzystać definicję wypukłości. W praktyce do sprawdzenia, czy dana funkcja lub zbiór są wypukłe, wykorzystujemy przekształcenia zachowujące wypukłość. Chociaż występuje pomiędzy nimi wiele różnic, wypukłość jest podobna do koncepcji domknięcia [[Przestrzenie wektorowe|przestrzeni wektorowych]].

Podsumowując, problem [[Optymalizacja z ograniczeniami|optymalizacji z ograniczeniami]] nazywamy problemem optymalizacji wypukłej, jeżeli w problemie
$$
\underset{x}{\min}f(\boldsymbol x)
$$
z ograniczeniami:
- $g_i(\boldsymbol x)\le0$ dla wszystkich $i=1,\dots,m$
- $h_j=0$ dla wszystkich $j=1,\dots,m$
wszystkie funkcje $f(\boldsymbol x)$ i $g_i(\boldsymbol x)$ są funkcjami wypukłymi, a wszystkie $h_j(\boldsymbol x)=0$ są zbiorami wypukłymi. 