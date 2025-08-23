[[Optymalizacja za pomocą metody gradientu prostego|Metoda gradientu prostego]] może dość wolno zbiegać się do rozwiązania, jeśli optymalizowana powierzchnia posiada obszary, których krzywizna jest taka, że w wyniku podążania w dół algorytm przeskakuje między ścianami doliny i zbliża się do optimum małymi krokami. Proponowana poprawka ma na celu poprawę zbieżności algorytmu wzbogacając go o pamięć o poprzednich stanach. 

Metoda gradientu prostego z pędem to metoda, w której wprowadzono dodatkowy składnik, pozwalający zapamiętać, co wydarzyło się w poprzedniej iteracji. Składnik ten tłumi oscylacje i wygładza aktualizacje [[Gradient|gradientu]]. 

W metodzie z pędem zapamiętujemy  aktualizację $\Delta\boldsymbol x_i$ z poprzedniej iteracji i wyznaczamy nowe przybliżenie jako kombinację liniową bieżącego i poprzedniego gradientu 
$$
\boldsymbol x_{i+1}=
\boldsymbol x_i-\gamma_i
\Big(
	(\nabla f)(\boldsymbol x_i)
\Big)^T
+\alpha\Delta\boldsymbol x_i
$$
$$
\Delta\boldsymbol x_i=
\boldsymbol x_i-\boldsymbol x_{i-i}=
\alpha\Delta\boldsymbol x_i-\gamma_{i-1}
\Big(
	(\nabla f)(\boldsymbol x_{i-1})
\Big)^T,
$$
gdzie $\alpha\in [0,1]$. 