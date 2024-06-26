jest to technika, której szczególnym przypadkiem jest [[Gradienty w uczeniu głębokim|propagacji wstecznej]]. 
Ogólniej to zbiór metod służących do numerycznego wyznaczania [[Gradient|gradientów]] z dokładnością maszynową.

Mając przepływ danych z wejść $\boldsymbol x$ do wyjść $\boldsymbol y$ przez zmienne pośrednie $\boldsymbol a$ i $\boldsymbol b$. Wyznaczając [[Pochodna|pochodną]] $\dfrac{\text dy}{\text dx}$, możemy korzystać z [[Reguła łańcuchowa|reguły łańcuchowej]] i zapisać jako:
$$
\frac{\text dy}{\text dx}=
\frac{\text dy}{\text db}
\frac{\text db}{\text da}
\frac{\text da}{\text dx}
$$
![[Screenshot from 2024-06-26 18-35-49.png]]

Warianty w przód i w tył różnią się kolejnością wykonywania mnożenia. Ponieważ mnożenie macierzy jest łączne, możemy wybrać pomiędzy 
$$
\frac{\text dy}{\text dx}=
\Big(
\frac{\text dy}{\text db}
\frac{\text db}{\text da}
\Big)
\frac{\text da}{\text dx}
$$
i
$$
\frac{\text dy}{\text dx}=
\frac{\text dy}{\text db}
\Big(
\frac{\text db}{\text da}
\frac{\text da}{\text dx}
\Big)
$$
#### Przykład 
![[Screenshot from 2024-06-26 18-39-30.png]]![[Screenshot from 2024-06-26 18-39-54.png]]![[Screenshot from 2024-06-26 18-40-03.png]]
