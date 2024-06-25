Do numerycznego sprawdzenia wyników obliczeń [[Gradient|gradientów]] w programach komputerowych możemy wykorzystać definicję [[Pochodne cząstkowe|pochodnych cząstkowych]] w postaci granicy [[Iloraz różnicowy|ilorazu różnicowego]]. 
Do sprawdzania poprawności implementacji możemy wykorzystać różnice kończone. Wybieramy małą wartość $h$ (np. $h=10^{-4}$) i porównujemy przybliżenie różnicy skończonej z naszą implementacją gradientu. 
$$
\sqrt{\dfrac{\sum_i(dh_i-df_i)^2}{\sum_i(dh_i+df_i)^2}}\lt10^{-6},
$$
gdzie $dh_i$ jest przybliżeniem za pomocą różnic skończonych, a $df_i$ jest różniczką funkcji względem $i$-tej zmiennej $x_i$. 
