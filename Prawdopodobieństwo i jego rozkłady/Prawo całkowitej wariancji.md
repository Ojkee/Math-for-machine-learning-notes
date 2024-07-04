W przypadku gęstości mieszaniny poszczególne składniki można uznać za  [[Rozkłady brzegowe i warunkowe rozkładu Gaussa są rozkładami normalnymi|rozkłady warunkowe]].
Przykład wzoru na [[Wariancja|wariancję]] warunkową
$$
\mathbb V_X[x]=
\mathbb E_X[x^2] - (\mathbb E_X[x])^2=
$$
$$
=
[\alpha\sigma^2_1+(1-\alpha)\sigma^2_2]+
([\alpha\micro^2_1+(1-\alpha)\micro^2_2]-
[\alpha\micro_1+(1-\alpha)\micro_2]^2)
$$
jest znany również jako prawo całkowitej wariancji.
Prawo to mówi, że dla dwóch [[Zmienna losowa|zmiennych losowych]] $X$ i $Y$ 
$$
\mathbb V_X[x]=
\mathbb E_Y[\mathbb V[x\,|\,y]]+
\mathbb V_Y[\mathbb E_X[x\,|\,y]]
$$
tj. że (całkowita) wariancja $X$ jest równa sumie [[Wartość oczekiwana|wartości oczekiwanej]] i wariancji warunkowej wartości oczekiwanej.
