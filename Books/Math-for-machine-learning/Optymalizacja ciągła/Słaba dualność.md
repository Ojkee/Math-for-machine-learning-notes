Różnica między $J(\boldsymbol x)$ [[Optymalizacja z ograniczeniami#^2177d7|z równania]] a lagranżjanem z [[Mnożniki Lagrange'a#^0136d6|z równania]] sprowadza się do zastąpienia funkcji charakterystycznej funkcją liniową. Dlatego, gdy $\lambda\ge 0$, lagranżjan $\mathfrak L(\boldsymbol{x,\lambda})$ jest kresem dolnym $J(\boldsymbol x)$. A zatem maksimum $\mathfrak L(\boldsymbol{x,\lambda})$ względem $\boldsymbol\lambda$ jest równe
$$
J(\boldsymbol x)=
\underset{\lambda\ge0}{\max}\mathfrak L(\boldsymbol{x,\lambda})
$$
Problemem pierwotnym była minimalizacja $J(\boldsymbol x)$, a zatem 
$$
\underset{\boldsymbol x\in\mathbb R^d}{\min}
\underset{\boldsymbol{\lambda\ge0}}{\max}
\mathfrak L(\boldsymbol{x,\lambda})
$$
Z [[Nierówność minmaks|nierówności minmaks]] wynika, że zmienna kolejność minimum i maksimum daje w wyniku mniejszą wartość, tj.
$$
\underset{\boldsymbol x\in\mathbb R^d}{\min}
\underset{\boldsymbol{\lambda\ge0}}{\max}
\mathfrak L(\boldsymbol{x,\lambda}) \ge
\underset{\boldsymbol{\lambda\ge0}}{\max}
\underset{\boldsymbol x\in\mathbb R^d}{\min}
\mathfrak L(\boldsymbol{x,\lambda})
$$
Związek ten nazywany jest słabą dualnością. Wewnętrzna część prawej strony równania to dokładnie definicja dualnej funkcji celu
$$
\mathfrak D(\boldsymbol\lambda)=\underset{\boldsymbol x\in\mathbb R^d}{\min}\mathfrak L(\boldsymbol{x,\lambda})
$$
