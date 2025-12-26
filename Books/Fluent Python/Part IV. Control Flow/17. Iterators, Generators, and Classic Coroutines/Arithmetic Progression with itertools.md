```python

>>> import itertools
>>> gen = itertools.count(1, .5)
>>> next(gen)
1

>>> next(gen)
1.5

>>> next(gen)
2.0

>>> next(gen)
2.5

>>> gen = itertools.takewhile(lambda n: n < 3, itertools.count(1, .5))
>>> list(gen)
[1, 1.5, 2.0, 2.5]
```

```python
import itertools

def aritprog_gen(begin, step, end=None):
	first = type(begin + step)(begin)
	ap_gen = itertools.count(first, step)
	if end is None:
		return ap_gen
	return itertools.takewhile(lambda n: n < end, ap_gen)	
```