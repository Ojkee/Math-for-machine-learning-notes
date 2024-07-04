Niech $x\in0,1$ będzie zmienną o [[Rozkład zero-jedynkowy|rozkładzie zero-jedynkowym]] z parametrem $\theta\in[0,1]$, tj. niech $p(x=1|\theta)=\theta$. [[Prawdopodobieństwo]] to można też zapisać jako $p(x|\theta)=\theta^x(1-\theta)^{1-x}$. Zauważmy, że $\theta$ ma [[Rozkład beta|rozkład beta]] o parametrach $\alpha, \beta$, tj. $p(\theta|\alpha,\beta)\propto\theta^{\alpha-1}(1-\theta)^{\beta-1}$. 
Po wymnożeniu funkcji rozkładu beta z zero-jedynkowego otrzymujemy
$$
p(\theta|x,\alpha,\beta)=
p(x|\theta)p(\theta|\alpha,\beta)\propto
$$
$$
\propto
\theta^x(1-\theta)^{1-x}\theta^{\alpha-1}(1-\theta)^{\beta-1}=
$$
$$
=
\theta^{\alpha +x-1}(1-\theta)^{\beta+(1-x)-1}\propto
$$
$$
\propto
p(\theta|\alpha+x,\beta+(1-x))
$$
Ostatni wierz to rozkład beta z parametrami $(\alpha +x, \beta + (1-x))$. 
