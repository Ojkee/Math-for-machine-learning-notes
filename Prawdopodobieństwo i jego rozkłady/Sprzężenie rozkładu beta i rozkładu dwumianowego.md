Rozważmy [[Rozkład dwumianowy|dwumianową]] [[Zmienna losowa|zmienną losową]] $x\sim\text{Bin}(N, \micro)$ taką, że
$$
p(x|N,\micro)=
\binom{N}{x}\micro^x(1-\micro)^{N-x},\quad x=0,1,\dots,N
$$
jest [[Prawdopodobieństwo|prawdopodobieństwem]] otrzymania $x$ orłów w $N$ rzutach. Wartość $\micro$ jest prawdopodobieństwem wyrzucenia orła. Przyjmijmy, że wiedza a priori na temat $\micro$ jest opisana przez rozkład $\micro\sim\text{beta}(\alpha,\beta)$, gdzie
$$
p(\micro|\alpha, \beta)=
\dfrac{\Gamma(\alpha+\beta)}{\Gamma(\alpha)\Gamma(\beta)}\micro^{\alpha-1}(1-\micro)^{\beta-1}
$$
Załóżmy, że zaobserwowaliśmy $x=h$, czyli, innymi słowy, wyrzuciliśmy $h$ orłów w $N$ rzutach monetą. W tym przypadku rozkład a posteriori [[Średnia|średniej]] $\micro$ będzie miał następującą formę
$$
p(\micro|x=h,N,\alpha,\beta)\propto p(x|N,\micro)p(\micro|\alpha, \beta)\propto
$$
$$
\propto
\micro^h(1-\micro)^{(N-h)}\micro^{\alpha-1}(1-\micro)^{\beta-1}=
$$
$$
\micro^{h+\alpha-1}(1-\micro)^{(N-h)+\beta-1}\propto
$$
$$
\propto
\text{beta}(h+\alpha,N-h+\beta)
$$
Rozkład a posteriori jest rozkładem beta tak samo jak rozkład a priori, tj. rozkład a priori beta jest [[Sprzężenie|sprzężony]] z parametrem $\micro$ wiarygodności rozkładu dwumianowego.
