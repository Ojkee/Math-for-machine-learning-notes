Chcemy obliczyć $NWD(a, b)$
Możemy założyć, że $a > b > 0$. Dzielimy kolejno liczby przez siebie z resztą:
![[Pasted image 20250408211549.png]]
Zauważmy, że reszty $r_i$ tworzą malejący ciąg liczb naturalnych więc
powyższy ciąg musi się kiedyś skończyć, to znaczy istnieje $n$, że reszta $r_n$ jest równa zero:
![[Pasted image 20250408211823.png]]
Na podstawie własności 2 mamy:
$NWD(a, b) = NWD(b, r ) =NWD(r , r_1) =\dots = NWD(r_{n−1}, r_n) = NWD(r_n, 0)=r_n$ 

### Przykład
![[Pasted image 20250408212016.png]]

![[Pasted image 20250408212036.png]]

