### Definicja
Równania mają postać 
$$
a\cdot_n x +_n c = b
$$
Ponieważ każdy element $c \in Z_n$ ma element przeciwny $-c=n-c$, to możemy dodać ten element do obu stron równania, otrzymując 
$$
a\cdot_n x =
b +_n (n-c)
$$
Rozważmy równanie liniowe $a ·_n x = b$ w pierścieniu $Z_n$.
Można je też wyrazić w postaci $a · x ≡ b \mod n$.
Zatem $a ·_n x = b$ wtedy i tylko wtedy, gdy $n|a · x − b$.
To zachodzi, gdy istnieje $k$ takie, że $a · x − b = kn$, czyli $a · x − kn = b$.

Aby rozwiązać równanie $a ·_n x = b$ trzeba znaleźć $x, y \in\mathbb Z$, takie że $ax + ny = b$, a następnie obie strony równania podzielić z resztą przez $n$.

### Przykład 
Równanie:
$$
37 \cdot_n x = 14
$$
Rozwiązujemy równanie 
$$
37x + 82y = 14
$$
Używając do tego opisanej na poprzednim wykładzie metody, opartej na odwrotnym
[[Algorytm Euklidesa|algorytmie Euklidesa]], otrzymujemy:
$$
14 · 82 − 31 · 37 = 1
$$
Mnożymy to równanie obustronnie przez $14$:
$$
196 · 82 − 434 · 37 = 14
$$
Ponieważ 
$$−434 = (−6) · 82 + 58
$$
to [[Modulo|modulo]] $82$, powyższe równanie przyjmuje postać:
$$
58 ·82 37 = 14
$$
Zatem jednym z rozwiązań danego równania jest $58$.

### Twierdzenie
Niech $a, b\in\mathbb Z$
1. Równanie $a\cdot_n x = b$ ma rozwiązanie w $Z_n$ wtedy i tylko wtedy, gdy $NWD(a, n)|b$
2. Jeśli równanie $a\cdot_n x = b$ ma rozwiązanie, to potrafimy znaleźć w efektywny sposób jego rozwiązanie
3. Jeśli $x_0$ jest rozwiązaniem równania $a\cdot_n x = b$, to wszystkie rozwiązania mają postać: 
$$
x_t =
x_0 + t \cdot \frac{n}{NWD(a, n)}
$$
dla $t\in\{0, 1,\dots, NWD(a, b)-1\}$
4. Jeśli równanie $a\cdot_n x = b$ ma rozwiązanie, to ma $NWD(a, n)$ rozwiązań

### Przykład 
Równanie w $Z_{50}$:
$$
35\cdot_{50} x = 25
$$
Rozwiążemy równanie 
$$
35x + 50y = 25
$$
w $\mathbb Z$, a potem obie strony podzielimy z resztą przez $50$ i otrzymamy rozwiązanie.
![[Pasted image 20250409204127.png]]
![[Pasted image 20250409204304.png]]
