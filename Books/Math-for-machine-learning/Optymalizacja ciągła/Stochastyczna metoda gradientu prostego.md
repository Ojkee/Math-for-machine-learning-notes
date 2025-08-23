Stochastyczna metoda gradientu prostego to stochastyczne przybliżenie [[Optymalizacja za pomocą metody gradientu prostego|metody gradientu prostego]], które możemy wykorzystać do minimalizacji [[Funkcja|funkcji]] celu zapisanej w postaci sumy funkcji [[Różniczkowanie automatyczne|różniczkowalnych]]. 

W uczeniu maszynowym często rozważamy funkcję celu, które są sumami start $L_n$ spowodowanych przez każdy punkt danych $n$ $(n=1,\dots,N)$. Matematycznie funkcję taką możemy zdefiniować jako
$$
L(\boldsymbol\theta)=
\sum^N_{n=1}L_n(\boldsymbol\theta),
$$
gdzie $\boldsymbol\theta$ jest wektorem interesujących nas parametrów, tj. chcemy znaleźć $\boldsymbol\theta$, który minimalizuje $L$. Przykładem jest ujemny logarytm wiarygodności, który jest sumą logarytmów wiarygodności poszczególnych próbek
$$
L(\boldsymbol\theta)=
-\sum^N_{n=1}\log p(y_n|\boldsymbol x_n, \boldsymbol\theta),
$$
gdzie $\boldsymbol x_n\in\mathbb R^D$ to wejścia, $y_n$ to cele, a $\boldsymbol\theta$ to parametry modelu regresji. 

Rozważmy sumę $\sum^N_{n=1}(\nabla L_n(\boldsymbol\theta_i))$ z [[Optymalizacja za pomocą metody gradientu prostego#^a5f9e5|równania]]. Liczbę niezbędnych obliczeń możemy zmniejszyć, rozważając jedynie podzbiór wartości $L_n$. Ta suma jest empirycznym estymatorem [[Wartość oczekiwana|wartości oczekiwanej]] [[Gradient|gradientu]]. W związku z tym do zagwarantowania zbieżności możemy posłużyć się również każdym innym nieobciążonym estymatorem wartości oczekiwanej, na przykład dowolnym podzbiorem danych. 


