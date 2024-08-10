Dana jest [[Przestrzenie afiniczne|przestrzeń afiniczna]] $L=\boldsymbol{x}_0+U$. Wektory $\boldsymbol{b}_1$ i $\boldsymbol{b}_2$ są wektorami bazowymi przestrzeni $U$. Aby wyznaczyć [[Rzuty ortogonalne|rzut ortogonalny]] $\pi_L(\boldsymbol{x})$ wektora $\boldsymbol{x}$ na przestrzeń afiniczną $L$ dokonamy przekształcenia i wykonamy obliczeń jak [[Rzut na przestrzeń|tutaj]].
$$
L-\boldsymbol{x}_0=U
$$
Do znalezienia rzutu możemy teraz wykorzystać [[Rzuty ortogonalne|rzuty ortogonalne]] na [[Przestrzenie wektorowe|przestrzeń wektorową]] $U$.
$$
\pi_U(\boldsymbol{x-x_0})
$$
Aby przekształcić z powrotem na przestrzeń afiniczną dodajemy $\boldsymbol{x}_0$. 
$$
\pi_L(\boldsymbol{x})=\boldsymbol{x}_0+\pi_U(\boldsymbol{x}-\boldsymbol{x}_0)
$$

Obliczanie odległości:
$$
d(\boldsymbol{x},L)=\|\boldsymbol{x}-\pi_L(\boldsymbol{x})\|=\|\boldsymbol{x}-(\boldsymbol{x}_0+\pi_U(\boldsymbol{x}-\boldsymbol{x}_0))\|=d(\boldsymbol{x-x_0}, \pi_U(\boldsymbol{x-x_0}))
$$

![[Screenshot from 2024-06-14 01-50-08.png]]