Niech $\boldsymbol{A}\in\mathbb{R}^{n\times n}$ będzie macierzą kwadratową. $\lambda\in\mathbb{R}$ jest wartością własną macierzy $\boldsymbol{A}$, a $\boldsymbol{x}\in\mathbb{R}^n\backslash\{\boldsymbol{0}\}$ jest odpowiadającym wektorem własnym, jeśli:
$$
\boldsymbol{Ax}=\lambda\boldsymbol{x}
$$
To równanie nazywamy równaniem własnym.

Następujące stwierdzenia są równoważne:
- $\lambda$ jest wartością własną $\boldsymbol{A}\in\mathbb{R}^{n\times n}$.
- Istnieje $\boldsymbol{x}\in\mathbb{R}^n\backslash\{\boldsymbol{0}\}$ takie, że $\boldsymbol{Ax}=\lambda\boldsymbol{x}$ lub, równoważnie, równanie $(\boldsymbol{A}-\lambda\boldsymbol{I}_n)\boldsymbol{x}=\boldsymbol{0}$ ma nietrywialne rozwiązanie.
- $rz(\boldsymbol{A}-\lambda\boldsymbol{I}_n)\lt n$.
- $\det(\boldsymbol{A}-\lambda\boldsymbol{I}_n)=0$. 

Jeśli $\boldsymbol{x}$ jest wektorem własnym macierzy $\boldsymbol{A}$ skojarzonym z wartością własną $\lambda$, to dla dowolnego $c\in\mathbb{R}\backslash\{\boldsymbol{0}\}$, $c\boldsymbol{x}$ również jest wektorem własnym $\boldsymbol{A}$ związanym z tą samą wartością własną, ponieważ:
$$
\boldsymbol{A}(c\boldsymbol{x})=c\boldsymbol{Ax}=c\lambda\boldsymbol{x}=\lambda(c\boldsymbol{x})
$$
Zatem wszystkie wektory [[Współliniowość i współkierunkowość|współliniowe]] do $\boldsymbol{x}$ są również wektorami własnymi macierzy $\boldsymbol{A}$.

#### Twierdzenie
$\lambda\in\mathbb{R}$ jest wartością własną $\boldsymbol{A}\in\mathbb{R}^{n\times n}$ wtedy i tylko wtedy, gdy $\lambda$ jest pierwiastkiem [[Wielomian charakterystyczny|wielomianu charakterystycznego]] $p_\boldsymbol{A}(\lambda)$ macierzy $\boldsymbol{A}$. 

Jeżeli $\lambda$ jest wartością własną macierzy $\boldsymbol{A}\in\mathbb{R}^{n\times n}$, to odpowiadająca jej [[Przestrzeń własna i widmo własne|przestrzeń własna]] $E_\lambda$ jest [[Przestrzenie wektorowe|przestrzenią]] rozwiązań jednorodnego  układu równań liniowych $(\boldsymbol{A}-\lambda\boldsymbol{I})\boldsymbol{x}=\boldsymbol{0}$. Z geometrycznego punku widzenia wektor własny, który odpowiada niezerowej wartości własnej, wskazuje w kierunku 'rozciąganym' przez odwzorowanie liniowe. Wartość własna jest czynnikiem decydującym o stopniu tego rozciągnięcia. Jeżeli wartość jest ujemna to rozciąganie odbywa się w przeciwnym kierunku.

#### Własności
- Macierze $\boldsymbol{A}$ i $\boldsymbol{A}^T$ mają te same wartości własne, ale nie koniecznie te same wektory własne.
- Przestrzeń własna $E\lambda$ jest przestrzenią zerową $\boldsymbol{A}-\lambda$, ponieważ
$$
\boldsymbol{Ax}=\lambda\boldsymbol{x}\Leftrightarrow\boldsymbol{Ax}-\lambda\boldsymbol{x}=\boldsymbol{0}\Leftrightarrow(\boldsymbol{A}-\lambda\boldsymbol{I})\boldsymbol{x}=\boldsymbol{0}\Leftrightarrow\boldsymbol{x}\in\ker(\boldsymbol{A}-\lambda{I})
$$
- Macierze podobne mają te same wartości własne. ą zatem odwzorowanie liniowe $\Phi$ ma wartości własne, które są niezależne od bazy jego macierzy transformacji. To sprawia, że wartości własne, [[Wyznacznik|wyznacznik]] i [[Ślad|ślad]] to kluczowe parametry charakteryzujące odwzorowanie liniowe, bo wszystkie nie zmieniają się w przypadku [[Zmiana bazy|zmiany bazy]].
- Symetryczne i dodatnio określone macierze mają zawsze dodatnie i rzeczywiste wartości własne.

Wektory własne $\boldsymbol{x_1,...x_n}$ macierzy $\boldsymbol{A}\in\mathbb{R}^{n\times n}$ z $n$ różnymi wartościami własnymi $\lambda_1,...,\lambda_n$ są [[Niezależność liniowa|liniowo niezależne]].
