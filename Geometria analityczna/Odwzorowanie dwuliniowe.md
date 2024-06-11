Odwzorowanie dwuargumentowe, które jest [[Przekształcenia liniowe|liniowe]] ze względu na oba argumenty. W [[Przestrzenie wektorowe|przestrzeni wektorowej]] $V$ odwzorowaniem dwuliniowym nazywamy odwzorowanie spełniające poniższe zależności dla wszystkich $\boldsymbol{x, y, z}\in V$, $\lambda, \psi\in\mathbb{R}$:
$$
\Omega(\lambda\boldsymbol{x}+\psi\boldsymbol{y},\boldsymbol{z})=\lambda\Omega(\boldsymbol{x, z})+\psi\Omega(\boldsymbol{y,z})
$$
$$
\Omega(\boldsymbol{x},\lambda\boldsymbol{y}+\psi\boldsymbol{z})=\lambda\Omega(\boldsymbol{x, y})+\psi\Omega(\boldsymbol{x,z})
$$
#### Definicja
Niech $V$ będzie przestrzenią wektorową, a $\Omega:V \times V \to \mathbb{R}$ będzie odwzorowaniem dwuliniowym, które przyjmuje dwa wektory i odwzorowuje je na liczbę rzeczywistą. Odwzorowanie $\Omega$:
- Nazywamy symetrycznym, jeśli $\Omega(\boldsymbol{x, y})=\Omega(\boldsymbol{y, x})$ dla wszystkich $\boldsymbol{x,y}\in V$ (kolejność argumentów nie ma znaczenia).
- Nazywamy dodatnio określonym, jeśli
$$
\forall\boldsymbol{x}\in V\textbackslash\{\boldsymbol{0}\}:\Omega(\boldsymbol{x,x})\gt0, \text{ }\Omega(\boldsymbol{0,0})=0
$$

#### Definicja
Niech $V$ będzie przestrzenią wektorową, a $\Omega:V \times V\to\mathbb{R}$ będzie odwzorowaniem dwuliniowym, które przyjmuje dwa wektory i odwzorowuje je na liczbę rzeczywistą.
- Dodatnio określone, symetryczne odwzorowanie dwuliniowe $\Omega:V\times V\to\mathbb{R}$ nazywamy iloczynem wewnętrznym w przestrzeni $V$, Zazwyczaj zamiast $\Omega(\boldsymbol{x, y})$ piszemy $\langle \boldsymbol{x,y}\rangle$.
- Para $(V, \langle\cdot,\cdot\rangle)$ nazywana jest przestrzenią unitarną. Jeżeli [[Iloczyn skalarny|iloczyn skalarny]] zdefiniowano zgodnie z równaniem, to para $(V, \langle\cdot,\cdot\rangle)$ nazywana jest przestrzenią euklidesową. 