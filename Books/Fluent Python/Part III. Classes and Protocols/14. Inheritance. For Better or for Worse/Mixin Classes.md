```python
import collections

def _upper(key):
	try:
		return key.upper()
	except AttributeError:
		return key
		

class UpperCaseMixin:
	def __setitem__(self, key, item):
		super().__setitem__(_upper(key), item)
	
	def __getitem__(self, key):
		return super().__getitem__(_upper(key))
	
	def get(self, key, default=None):
		return super().get(_upper(key), default)
	
	def __contains__(self, key):
		return super().__contains__(_upper(key))
```

```python
class UpperDict(UpperCaseMixin, collections.UserDict):
	pass
	

class UpperCounter(UpperCaseMixin, collections.Counter):
	"""Specialized 'Counter' that uppercases string keys"""
```

```python
>>> d = UpperDict([('a', 'letter A'), (2, 'digit two')])
>>> list(d.keys())
['A', 2]

>>> d['b'] = 'letter B'
>>> 'b' in d
True

>>> d['a'], d.get('B')
('letter A', 'letter B')

>>> list(d.keys())
['A', 2, 'B']

>>> c = UpperCounter('BaNanA')
>>> c.most_common()
[('A', 3), ('N', 2), ('B', 1)]
```
