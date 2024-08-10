Przydatną cechą zbioru wypukłego jest to, że możemy go opisać za pomocą [[Hiperpłaszczyzna wspierająca|hiperpłaszczyzn wspierających]]. Przypomnijmy, że możemy wypełnić funkcję wypukłą i otrzymać [[Epigraf funkcji wypukłej|epigraf]], który jest zbiorem wypukłym. Z tego powodu możemy też opisać [[Funkcja|funkcje]] wypukłe za pomocą ich hiperpłaszczyzn wspierających. Co więcej, hiperpłaszczyzna nośna jedynie 'dotyka' funkcji wypukłej i jest jej styczną w tym punkcie. Przypomnijmy, że tangens funkcji $f(\boldsymbol x)$ w punkcie $\boldsymbol x_0$ jest wartością [[Gradient|gradientu]] $\frac{\text df(\boldsymbol x)}{\text d\boldsymbol x}|_{\boldsymbol x=\boldsymbol x_0}$ tej funkcji w tym punkcie. 

Podsumowując, ponieważ zbiory wypukłe można równoważnie opisać za pomocą ich hiperpłaszczyzn wspierających, funkcje wypukłe mogą być równoważnie opisane przez funkcje ich gradientów. Transformacja Legendre'a jest formalizacją tej koncepcji. 

Transformacja Legendre'a-Fenchela jest przekształceniem (w sensie transformaty Fouriera) wypukłej [[Pochodna|różniczkowalnej]] $f(\boldsymbol x)$ w [[Funkcja|funkcję]], która zależy od stycznych $s(\boldsymbol x)=\nabla_\boldsymbol x f(\boldsymbol x)$. Warto podkreślić, że jest to przekształcenie funkcji $f(\cdot)$, a nie zmiennej $\boldsymbol x$ czy wartości funkcji w $\boldsymbol x$. Transformata ta jest nazywana sprzężeniem wypukłym i jest ściśle powiązana z koncepcją problemu dualnego. 

Sprzężenie wypukłe funkcji $f:\mathbb R^D\to\mathbb R$ jest funkcją $f^\ast$ zdefiniowaną jako
$$
f^\ast(\boldsymbol s)=
\underset{\boldsymbol x\in\mathbb R^D}{\sup}
\Big(
\langle\boldsymbol s,\boldsymbol x\rangle-f(\boldsymbol x)
\Big)
$$
Zauważmy, że powyższa definicja sprzężenia wypukłego nie wymaga, aby $f$ była wypukła ani różniczkowalna. Wykorzystaliśmy ogólny [[Iloczyn wewnętrzny|iloczyn wewnętrzny]], aby uniknąć wielu szczegółów technicznych, lecz będziemy analizować jedynie standardowy [[Iloczyn skalarny|iloczyn skalarny]] pomiędzy wektorami skończenie wymiarowymi czyli 
$$
\Big(
\langle \boldsymbol s, \boldsymbol x \rangle =
\boldsymbol s^T\boldsymbol x
\Big)
$$

#### Przykład
Rozważmy funkcję wypukłą $f(x)=x^2$. Problem jest jednowymiarowy, więc hiperpłaszczyzny sprowadzają się do prostych. Rozważmy, więc prostą $y=sx+c$. Wybierzmy jakąś wartość $s\in\mathbb R$ i dla każdego punktu $(x_0, f(x))$ na wykresie znajdź minimalną wartość $c$ taką, że prosta o nachyleniu $s$ 'dotyka' funkcji $f(x)$. Prosta przechodząca przez $(x_0,f(x))$ z nachyleniem s jest opisana równaniem
$$
y-f(x_0)=s(x-x_0)
$$
Punkt przecięcia tej prostej z osią $y$ to $-sx_0+f(x_0)$. Najmniejsza wartość $c$, dla której $y=sx+c$ przecina wykres $f$, to zatem
$$
\underset{x_0}{\inf}-x_0+f(x_0)
$$
Zgodnie z ogólnie przyjętą konwencją sprzężenie wypukłe jest zdefiniowane jako minus powyższa wartość. Rozumowanie zaprezentowane powyżej nie korzysta z tego, że badana [[Funkcja|funkcja]] jest jednowymiarowa i ciągła, a zatem obowiązuje też dla funkcji $f:\mathbb R^D\to\mathbb R$, które niekoniecznie są wypukłe i różniczkowalne. 

Różniczkowalne funkcje wypukłe, takie jak na przykład $f(x)=x^2$, to szczególny przypadek, w którym nie ma potrzeby obliczenia supremum, a pomiędzy funkcją, a jej transformatą Legendre'a istnieje zależność jeden do jeden. W przypadku wypukłej funkcji różniczkowalnej wiemy, że w punkcie $x_0$ styczna 'dotyka' $f(x_0)$ w taki sposób, że
$$
f(x_0)=
sx_0+c
$$
Przypomnijmy, że chcemy opisać wypukłą funkcję $f(x)$  w kategoriach gradientu $\nabla_xf(x)$ oraz, że $s=\nabla_xf(x_0)$. Zmieńmy kolejność składników, tak aby otrzymać wyrażenie na $-c$
$$
-c=
sx_0-f(x_0)
$$
Zauważmy, że $-c$ zmienia się w zależności od $x_0$, a zatem również w zależności od $s$. Tym samym możemy potraktować $-c$ jako funkcję od $s$
$$
f^\ast(s):=
sx_0-f(x_0)
$$
Porównując z definicje mamy to samo tylko bez supremum. 

#### Przykład
![[Screenshot from 2024-07-08 20-45-44.png]]
![[Screenshot from 2024-07-08 20-45-49.png]]
![[Screenshot from 2024-07-08 20-45-57.png]]
