```python
>>> list(map(factorial, range(6)))
[1, 1, 2, 6, 24, 120]

>>> [factorial(n) for n in range(6)]
[1, 1, 2, 6, 24, 120]

>>> list(map(factorial, filter(lambda n: n % 2, range(6))))
[1, 6, 120]

>>> [factorial(n) for n in range(6) if n % 2]
[1, 6, 120]
```

``` python
>>> from functools import reduce 
>>> from operator import add

>>> reduce(add, range(100))
4950

>>> sum(range(100))
4950
```