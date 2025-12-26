![[Pasted image 20251226192603.png]]
```python
>>> sample = [5, 4, 2, 8, 7, 6, 3, 0, 9, 1]

>>> import itertools
>>> list(itertools.accumulate(sample))
[5, 9, 11, 19, 26, 32, 35, 35, 44, 45]

>>> list(itertools.accumulate(sample, min))
[5, 4, 2, 2, 2, 2, 2, 0, 0, 0]

>>> list(itertools.accumulate(sample, max))
[5, 5, 5, 8, 8, 8, 8, 8, 9, 9]

>>> import operator
>>> list(itertools.accumulate(sample, operator.mul))
[5, 20, 40, 320, 2240, 13440, 40320, 0, 0, 0]

>>> list(itertools.accumulate(range(1, 11), operator.mul))
[1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800]

>>> list(enumerate('albatroz', 1))
[(1, 'a'), (2, 'l'), (3, 'b'), (4, 'a'), (5, 't'), (6, 'r'), (7, 'o'), (8, 'z')

>>> list(map(operator.mul, range(11), range(11)))
[0, 1, 4, 9, 16, 25, 36, 49, 64, 81, 100]

>>> list(map(operator.mul, range(11), [2, 4, 8]))
[0, 4, 16]

>>> list(map(lambda a, b: (a, b), range(11), [2, 4, 8]))
[(0, 2), (1, 4), (2, 8)]

>>> import itertools
>>> list(itertools.starmap(operator.mul, enumerate('albatroz', 1)))
['a', 'll', 'bbb', 'aaaa', 'ttttt', 'rrrrrr', 'ooooooo', 'zzzzzzzz']

>>> sample = [5, 4, 2, 8, 7, 6, 3, 0, 9, 1]

>>> list(itertools.starmap(lambda a, b: b / a,
>>> 	enumerate(itertools.accumulate(sample), 1)))
[5.0, 4.5, 3.6666666666666665, 4.75, 5.2, 5.333333333333333,
5.0, 4.375, 4.888888888888889, 4.5]
```