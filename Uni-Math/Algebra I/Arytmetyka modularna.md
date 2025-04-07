### Definicja 
Niech $Z_n$ będzie zbiorem klas abstrakcji relacji przystawienia [[Modulo|modulo]] $n$.
Czyli 
$$
Z_n=
\{[0], [1], \dots , [n-1]\}
$$
W zbiorze $Z_n$ określamy działania 
$$
[a]+[b]=
[a+b]
$$
$$
[a]\cdot[b]=
[a\cdot b]
$$
Tak zdefiniowane działania w zbiorach klas abstrakcji nazywamy arytmetyką modularną.

### Twierdzenie
Załóżmy, że $[a]=[a']$ i $[b]=[b']$.
Czy $[a+b] = [a'+b']$ oraz $[ab]=[a'b']$? 
### Dowód
$$
\begin{aligned}
\ [a] = [a'] \cap 
	[b] = [b'] &\implies a \equiv a' \mod n \cap b\equiv b'\mod n \\
			   &\implies a+b=a'+b'\mod n \\&\implies 
			   [a+b]=[a'+b']
\end{aligned}
$$

### Działania
- Dodawanie modulo - $a+_n b =$ reszta z dzielenia $a+b$ przez $n$
- Mnożenie modulo - $a\cdot_n b =$ reszta z dzielenia $a\cdot b$ przez $n$
-  $-_n a$ = reszta z dzielenia $-a$ przez $n$
Zauważmy, że $-_n a = n-a$ jeśli $a\neq 0$ i $-_n 0 = 0$ 

### Przykłady
![[Pasted image 20250407180852.png]]
  