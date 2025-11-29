```python
>>> from collections import ChainMap
>>> d1 = dict(a=1, b=3)
>>> d2 = dict(a=2, b=4, c=6)
>>> chain = ChainMap(d1, d2)

>>> chain['a']
1

>>> chain['c']
6

>>> chain['c'] = -1
>>> d1
{'a': 1, 'b': 3, 'c': -1}

>>> d2
{'a': 2, 'b': 4, 'c': 6}
```