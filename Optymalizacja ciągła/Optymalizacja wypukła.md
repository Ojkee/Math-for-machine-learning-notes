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
