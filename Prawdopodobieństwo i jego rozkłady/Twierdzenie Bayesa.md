Twierdzenie Bayesa możemy zapisać jako 
$$
\underset{\text{a posteriori}}
{p(\boldsymbol x|\boldsymbol y)}=
\dfrac{
\stackrel{wiarygodność}
{p(\boldsymbol y|\boldsymbol x)}
\,\,
\stackrel{\text{a priori}}
{p(\boldsymbol x)}
}{
\underset{dowód}
{p(\boldsymbol y)}
}
$$
Twierdzenie to wynika bezpośrednio z [[Reguła mnożenia|reguły iloczynu]].

- W tym równaniu $p(\boldsymbol x)$ jest rozkładem a priori, który opisuje naszą wcześniejszą subiektywną wiedzę o nieobserwowanej zmiennej $\boldsymbol x$ przed zaobserwowaniem jakichkolwiek danych. Rozkładem a priori może być dowolna, sensowna z naszego punktu widzenia [[Funkcja|funkcja]]. 

- Wiarygodność $p(\boldsymbol y|\boldsymbol x)$ opisuje związek pomiędzy $\boldsymbol x$ i $\boldsymbol y$. W przypadku [[Prawdopodobieństwo dyskretne|dyskretnym]] jest to [[Prawdopodobieństwo|prawdopodobieństwo]] zaobserwowania $\boldsymbol y$ w przypadku, w którym znamy ukrytą wartość $\boldsymbol x$. $p(\boldsymbol x)$ nazywamy wiarygodnością $\boldsymbol x$ dla danego $\boldsymbol y$ lub prawdopodobieństwem $\boldsymbol y$ pod warunkiem zajścia $\boldsymbol x$. 

- Rozkład a posteriori $p(\boldsymbol x|\boldsymbol y)$ to przedmiot zainteresowania statystyki bayesowej. Rozkład ten opisuje to, co wiemy o $\boldsymbol x$ po zaobserwowaniu $\boldsymbol y$. 

Twierdzenie Bayesa pozwala nam odwrócić zależność pomiędzy $\boldsymbol x$ i $\boldsymbol y$ określoną przez wiarygodność. Z tego powodu twierdzenie Bayesa jest czasami nazywane odwrotnością probabilistyczną. 
