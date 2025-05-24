Statystyki dostateczne zawierają wszystkie informacje potrzebne do wnioskowania o populacji, co oznacza, że są to statystyki wystarczające do przedstawienia rozkładu.

Rozważmy zbiór rozkładów sparametryzowanych przez $\theta$. Niech $X$ będzie [[Zmienna losowa|zmienną losową]] o rozkładzie $p(x|\theta_0)$ dla nieznanego $\theta_0$. Wektor statystyk $\phi(x)$ nazywamy statystyką dostateczną $\theta_0$, jeśli zawiera on wszystkie możliwe informacje o $\theta_0$. Bardziej formalnie 'zawieranie wszystkich możliwych informacji' oznacza. że [[Prawdopodobieństwo|prawdopodobieństwo]] wystąpienia $x$ przy danym $\theta$ można rozłożyć na część, która nie zależy od $\theta$, oraz na część, która zależy od $\theta$ tylko przez $\phi(x)$. 

#### Twierdzenie
Niech $p(x|\theta)$ będzie [[Funkcja gęstości prawdopodobieństwa|funkcją gęstości prawdopodobieństwa]] zmiennej $X$. $\phi(x)$ jest statystyką dostateczną wtedy i tylko wtedy, gdy $p(x|\theta)$ można zapisać w postaci
$$
p(x|\theta)=h(x)g_\theta(\phi(x)),
$$
gdzie $h(x)$ jest rozkładem niezależnym od $\theta$, a $g_\theta(x)$ opisuje całą zależność od $\theta$ za pomocą statystyki dostatecznej $\phi(x)$. 

Jeśli $p(x|\theta)$ nie zależy od $\theta$, to $\phi(x)$ jest statystyką dostateczną dla dowolnej funkcji $\varphi$. 

Gdy $p(x|\theta)$ zależy tylko od $\phi(x)$, a nie od samego $x$, to $\phi(x)$ jest statystyką dostateczną $\theta$. 
