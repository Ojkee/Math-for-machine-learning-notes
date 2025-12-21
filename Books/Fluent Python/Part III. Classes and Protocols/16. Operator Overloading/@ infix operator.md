```python
def __matmul__(self, other):
	if (isinstance(other, abc.Sized) and
		isinstance(other, abc.Iterable)):
		if len(self) == len(other):
			return sum(a * b for a, b in zip(self, other))
		else:
			raise ValueError('@ requires vectors of equal length.')
	else:
		return NotImplemented
		
def __rmatmul__(self, other):
	return self @ other


>>> va = Vector([1, 2, 3])
>>> vz = Vector([5, 6, 7])
>>> va @ vz == 38.0 # 1*5 + 2*6 + 3*7
True

>>> [10, 20, 30] @ vz
380.0

>>> va @ 3
Traceback (most recent call last):
...
TypeError: unsupported operand type(s) for @: 'Vector' and 'int'
```