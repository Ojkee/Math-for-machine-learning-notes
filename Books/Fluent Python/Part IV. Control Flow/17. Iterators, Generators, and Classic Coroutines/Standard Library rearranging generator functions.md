![[Pasted image 20251226193252.png]]
```python
>>> list(itertools.groupby('LLLLAAGGG'))
[('L', <itertools._grouper object at 0x102227cc0>),
('A', <itertools._grouper object at 0x102227b38>),
('G', <itertools._grouper object at 0x102227b70>)]

>>> for char, group in itertools.groupby('LLLLAAAGG'):
>>> 	print(char, '->', list(group))
L -> ['L', 'L', 'L', 'L']
A -> ['A', 'A',]
G -> ['G', 'G', 'G']

>>> animals = ['duck', 'eagle', 'rat', 'giraffe', 'bear',
>>> 	'bat', 'dolphin', 'shark', 'lion']
>>> animals.sort(key=len)
>>> animals
['rat', 'bat', 'duck', 'bear', 'lion', 'eagle', 'shark',
'giraffe', 'dolphin']

>>> for length, group in itertools.groupby(animals, len):
>>> 	print(length, '->', list(group))
3 -> ['rat', 'bat']
4 -> ['duck', 'bear', 'lion']
5 -> ['eagle', 'shark']

>>> list(itertools.tee('ABC'))
[<itertools._tee object at 0x10222abc8>, <itertools._tee object at 0x10222ac08>]

>>> g1, g2 = itertools.tee('ABC')
>>> next(g1)
'A'

>>> next(g2)
'A'

>>> next(g2)
'B'

>>> list(g1)
['B', 'C']

>>> list(g2)
['C']

>>> list(zip(*itertools.tee('ABC')))
[('A', 'A'), ('B', 'B'), ('C', 'C')]
```