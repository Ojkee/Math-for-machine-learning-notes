Obszar silnie eksploatujący [[Reguła łańcuchowa|regułę łańcuchową]]. 

Mamy [[Funkcja|funkcję]]:
$$
\boldsymbol y = 
(f_K\circ f_{K-1}\circ\dots\circ f_1)(\boldsymbol x)=
f_K(f_{K-1}(\dots(f_1(\boldsymbol x)))),
$$
gdzie $\boldsymbol x$ to dane wejściowe (np. obraz), a $\boldsymbol y$ obserwacje (np. etykiety klas). Każda funkcja $f_i, i=1,\dots,K$ posiada własne parametry. W wielowarstwowej sieci neuronowej z $i$-tą warstwą sieci związana jest funkcja $f_i(\boldsymbol  x_{i-1})=\sigma(\boldsymbol A_{i-1}+\boldsymbol b_{i-1})$, w której $\boldsymbol x_{i-1}$ jest wyjście z $i-1$ warstwy, a $\sigma$ jest funkcją aktywacji, na przykład sigmoidalną $\dfrac{1}{1+e^{-x}}$, tangesem hiperbolicznym lub ReLU. 
Proces uczenia takich sieci wymaga obliczenia [[Gradient|gradientu]] funkcji straty $L$ względem wszystkich parametrów $\boldsymbol A_j, B_j\, (j=1,\dots,K)$ modelu. Konieczne jest znalezienie gradientu $L$ względem danych wejściowych każdej warstwy. 

Rozważmy przykład, w którym $\boldsymbol x$ to dane wejściowe, a $\boldsymbol y$ to obserwacje. Struktura sieci jest określona przez 
$$
\boldsymbol f_0:\boldsymbol x
$$
$$
\boldsymbol f_i:= \sigma_i(\boldsymbol A_i\boldsymbol f_{i-1}+\boldsymbol b_{i-1}), \, i=1,\dots,K
$$
Chcemy znaleźć parametry $\boldsymbol A_j, B_j\, (j=1,\dots,K)$ minimalizujące kwadratową funkcję straty 
$$
L(\boldsymbol\theta)=
\|\boldsymbol y-\boldsymbol f_K(\boldsymbol \theta, \boldsymbol x)\|^2,
$$
gdzie $\boldsymbol \theta=\{\boldsymbol A_0, \boldsymbol b_0, \dots,\boldsymbol A_{K-1}, \boldsymbol b_{K-1})\}$ 
![[Screenshot from 2024-06-26 14-29-16.png]]
Do wyznaczenia gradientów względem zbioru parametrów $\boldsymbol\theta$ potrzebne będą [[Pochodne cząstkowe|pochodne cząstkowe]] $L$ względem parametrów $\boldsymbol\theta_j =\{\boldsymbol A_j, \boldsymbol b_j\}$ każdej warstwy $j=1,\dots, K$. Używamy reguły łańcuchowej:
$$
\frac{\partial L}{\partial \boldsymbol\theta_{K-1}}=
\frac{\partial L}{\partial \boldsymbol{f}_K}
\color{yellow}
\frac{\partial\boldsymbol f_K}{\partial \boldsymbol\theta_{K-1}}
$$
$$
\frac{\partial L}{\partial \boldsymbol\theta_{K-2}}=
\frac{\partial L}{\partial\boldsymbol f_K}
\bbox[border: 2px solid white]{
	\color{red}
	\dfrac{\partial \boldsymbol f_K}{\partial \boldsymbol f_{K-1}}
	\color{yellow}
	\frac{\partial \boldsymbol f_{K-1}}{\partial \boldsymbol\theta_{K-2}}
}
$$
$$
\frac{\partial L}{\partial \boldsymbol\theta_{K-3}}=
\frac{\partial L}{\partial\boldsymbol f_K}
\color{red}
\frac{\partial\boldsymbol f_K}{\partial\boldsymbol f_{K-1}}
\bbox[border: 2px solid white]{
	\color{red}
	\dfrac{\partial \boldsymbol f_{K-1}}{\partial \boldsymbol f_{K-2}}
	\color{yellow}
	\frac{\partial \boldsymbol f_{K-2}}{\partial \boldsymbol\theta_{K-3}}
}
$$
$$
\frac{\partial L}{\partial\boldsymbol\theta_i}=
\frac{\partial L}{\partial\boldsymbol f_K}
\color{red}
\frac{\partial\boldsymbol f_K}{\partial\boldsymbol f_{K-1}}
\dots
\bbox[border: 2px solid white]{
	\color{red}
	\dfrac{\partial \boldsymbol f_{i+2}}{\partial \boldsymbol f_{i+1}}
	\color{yellow}
	\frac{\partial \boldsymbol f_{i+1}}{\partial \boldsymbol\theta_{i}}
}
$$
na $\color{red}\text{czerwono}$ zaznaczono pochodne cząstkowe wyjścia warstwy względem jej wejścia, a na $\color{yellow}\text{żółto}$ pochodne cząstkowe wyjścia warstwy względem jej parametrów.