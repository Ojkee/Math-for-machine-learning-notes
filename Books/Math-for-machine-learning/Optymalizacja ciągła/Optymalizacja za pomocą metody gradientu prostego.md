Metoda [[Gradient|gradientu]] prostego to algorytm optymalizacji pierwszego rzędu. Znajdowanie minimum lokalnego za pomocą tej metody sprowadza się do wykonywania kroków proporcjonalnych do ujemnego gradientu ujemnego w aktualnie przetwarzanym punkcie. 
Inną pomocną koncepcją może być rozważenie zbioru linii, w których [[Funkcja|funkcja]] przyjmuje określoną wartość. Linie te są znane jako linie konturowe (izolinie). Gradient wskazuje kierunek prostopadły do linii konturowych optymalizowanej funkcji. 

Przypadek wielowymiarowy
Rozważmy powierzchnię opisaną przez $f(\boldsymbol x)$ oraz znajdują się w punkcie $\boldsymbol x_0$ kulę. Po uwolnieniu kula stoczy się w dół zgodnie z kierunkiem najszybszego spadku. Metodo gradientu prostego wykorzystuje fakt, że wartości $f(\boldsymbol x_0)$ maleją najszybciej, jeśli poruszamy się od $\boldsymbol x_0$ w kierunku ujemnego gradientu $-\big((\nabla f)(\boldsymbol x_0\big)^T$  funkcji $f$ w punkcie $\boldsymbol x_0$. Zatem jeżeli
$$
\boldsymbol x_1=
\boldsymbol x_0-\gamma
\Big(
	(\nabla f)(\boldsymbol x_0)
\Big)^T,
$$
to dla małego [[Rozmiar kroku|rozmiaru kroku]] $\gamma\ge 0$, $f(\boldsymbol x_1)\le f(\boldsymbol x_0)$. Transpozycja gradientu zapewnia zgodność wymiarów. 
Powyższa obserwacja pozwala nam zdefiniować prosty algorytm metody gradientu prostego. Poszukiwania lokalnego optimum $f(\boldsymbol x_{\ast})$ funkcji $f:\mathbb R^N\to\mathbb R, \boldsymbol x\mapsto f(\boldsymbol x)$ zaczynamy od wstępnego przypuszczenia co do wartości parametru $\boldsymbol x_0$, który chcemy zoptymalizować. Następnie dokonujemy iteracyjnego przybliżenia tego parametru zgodnie ze wzorem
$$
\boldsymbol x_{i+1}=
\boldsymbol x_i-\gamma_i
\Big(
	(\nabla f)(\boldsymbol x_i)
\Big)^T
$$
Dla odpowiednio dobranego $\gamma_i$ ciąg $f(x_0)\ge f(x_1)\ge\dots$ jest zbieżny do lokalnego minimum. ![[Screenshot from 2024-07-07 20-26-05.png]]
#### Przykład
![[Screenshot from 2024-07-07 20-25-47.png]]

Ta metoda jest metodą optymalizacji 'wsadowej', tj. optymalizacja jest przeprowadzana przy użyciu pełnego zbioru uczącego i odbyta się poprzez aktualizację parametrów zgodnie z poniższym równaniem:
$$
\boldsymbol\theta_{i+1}=
\boldsymbol\theta_i-\gamma_i
\Big(
	\nabla L(\boldsymbol\theta_i)
\Big)^T=
\boldsymbol\theta_i-\gamma_i\sum^N_{n=1}(\nabla L_n(\boldsymbol\theta_i))^T
$$
^aktualizacja-parametrow-gradient-prosty
dla odpowiednio dobranej długości kroku $\gamma_i$, lecz ta metoda może być kosztowna.  ^a5f9e5
