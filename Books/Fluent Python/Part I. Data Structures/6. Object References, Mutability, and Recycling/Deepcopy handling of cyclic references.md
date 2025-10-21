```python
>>> a = [10, 20]
>>> b = [a, 30]
>>> a.append(b)
>>> a
[10, 20, [[...], 30]]

>>> from copy import deepcopy

>>> c = deepcopy(a)
>>> c
[10, 20, [[...], 30]]
```
