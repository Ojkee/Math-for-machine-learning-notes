![[Pasted image 20251226192820.png]]
![[Pasted image 20251226192835.png]]
```python
>>> list(itertools.chain('ABC', range(2)))
['A', 'B', 'C', 0, 1]

>>> list(itertools.chain(enumerate('ABC')))
[(0, 'A'), (1, 'B'), (2, 'C')]

>>> list(itertools.chain.from_iterable(enumerate('ABC')))
[0, 'A', 1, 'B', 2, 'C']

>>> list(zip('ABC', range(5), [10, 20, 30, 40]))
[('A', 0, 10), ('B', 1, 20), ('C', 2, 30)]

>>> list(itertools.zip_longest('ABC', range(5)))
[('A', 0), ('B', 1), ('C', 2), (None, 3), (None, 4)]

>>> list(itertools.zip_longest('ABC', range(5), fillvalue='?'))
[('A', 0), ('B', 1), ('C', 2), ('?', 3), ('?', 4)]

>>> list(itertools.product('ABC', range(2)))
[('A', 0), ('A', 1), ('B', 0), ('B', 1), ('C', 0), ('C', 1)]

>>> suits = 'spades hearts diamonds clubs'.split()
>>> list(itertools.product('AK', suits))
[('A', 'spades'), ('A', 'hearts'), ('A', 'diamonds'), ('A', 'clubs'),
('K', 'spades'), ('K', 'hearts'), ('K', 'diamonds'), ('K', 'clubs')]

>>> list(itertools.product('ABC'))
[('A',), ('B',), ('C',)]

>>> list(itertools.product('ABC', repeat=2))
[('A', 'A'), ('A', 'B'), ('A', 'C'), ('B', 'A'), ('B', 'B'),
('B', 'C'), ('C', 'A'), ('C', 'B'), ('C', 'C')]

>>> list(itertools.product(range(2), repeat=3))
[(0, 0, 0), (0, 0, 1), (0, 1, 0), (0, 1, 1), (1, 0, 0),
(1, 0, 1), (1, 1, 0), (1, 1, 1)]

>>> rows = itertools.product('AB', range(2), repeat=2)
>>> for row in rows:
>>> 	print(row)
('A', 0, 'A', 0)
('A', 0, 'A', 1)
('A', 0, 'B', 0)
('A', 0, 'B', 1)
('A', 1, 'A', 0)
('A', 1, 'A', 1)
('A', 1, 'B', 0)
('A', 1, 'B', 1)
('B', 0, 'A', 0)
('B', 0, 'A', 1)
('B', 0, 'B', 0)
('B', 0, 'B', 1)
('B', 1, 'A', 0)
('B', 1, 'A', 1)
('B', 1, 'B', 0)
('B', 1, 'B', 1)
```