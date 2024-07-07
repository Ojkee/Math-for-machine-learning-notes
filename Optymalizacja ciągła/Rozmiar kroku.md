Dobór odpowiedniego rozmiaru kroku jest kluczowy. Jeżeli jest zbyt mały, metoda może zmierzać do minimum bardzo wolno, a jak za duży, to metoda może ominąć minimum, nie osiągnąć zbieżności lub okazać się rozbieżna. 

Adaptacyjne metody [[Gradient|gradientowe]] skalują rozmiar kroku w każdej iteracji z zależności od lokalnych własności [[Funkcja|funkcji]]. Istnieją dwie proste heurystyki, które można do tego wykorzystać:
- Jeżeli wartość funkcji w kolejnej iteracji wzrasta, to rozmiar kroku był za duży. W takim przypadku cofnij się do poprzedniego punktu i zmniejsz rozmiar
- Jeżeli wartość funkcji maleje, to rozmiar kroku mógł być większy, więc analogicznie zwiększamy rozmiar. 
