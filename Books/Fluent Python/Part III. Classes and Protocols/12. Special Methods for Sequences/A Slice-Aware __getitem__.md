```python
def __getitem__(self, key):
	if isinstance(key, slice):
		cls = type(self)
		return cls(self._components[key])
	index = operator.index(key)
	return self._component[index]


>>> v7 = Vector(range(7))
>>> v7[-1]
6.0

>>> v7[1:4]
Vector([1.0, 2.0, 3.0])

>>> v7[-1:]
Vector([6.0])

>>> v7[1,2]
Traceback (most recent call last):
	...
TypeError: 'tuple' object cannot be interpreted as an integer
```