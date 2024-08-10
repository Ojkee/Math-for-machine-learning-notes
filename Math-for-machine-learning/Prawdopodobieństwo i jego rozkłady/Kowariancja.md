- Jednowymiarowa
Kowariancja dwóch jednowymiarowych [[Zmienna losowa|zmiennych losowych]] $X, Y\in\mathbb R$ to [[Wartość oczekiwana|wartość oczekiwana]] iloczynu ich odchyleń od [[Średnia|średnich]] 
$$
\text{cov}_{X,Y}:=
\mathbb E_{X,Y}[x-\mathbb E_X(x)(y-\mathbb E_Y(y))]
$$
Korzystając z liniowości wartości oczekiwanej, wyrażenie można zapisać jako wartość oczekiwaną iloczynu minus iloczyn wartości oczekiwanych
$$
\text{cov}(x,y)=
\mathbb E(xy)-\mathbb E(x)\mathbb E(y)
$$

- Wielowymiarowa 
Rozważmy dwie wielowymiarowe zmienne losowe $X$ i $Y$ ze stanami, odpowiednio, $\boldsymbol x\in\mathbb R^D$ i $\boldsymbol y\in\mathbb R^E$. Kowariancja $X$ i $Y$ jest zdefiniowana jako 
$$
\text{cov}[\boldsymbol x, \boldsymbol y]=
\mathbb E[\boldsymbol{xy}^T]-\mathbb{E}[\boldsymbol x]\mathbb E[\boldsymbol y]^T=
\text{cov}[\boldsymbol y, \boldsymbol x]^T\in\mathbb R^{D\times E}
$$
