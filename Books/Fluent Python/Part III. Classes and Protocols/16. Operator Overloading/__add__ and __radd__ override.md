```python
def __add__(self, other):
	try:
		pairs = itertools.zip_longest(self, other, fillvalue=0.0)
		return Vector(a + b for a, b in pairs)
	except TypeError:
		return NotImplemented

def __radd__(self, other):
	return self + other

# alternatively in this case
__radd__ = __add__


>>> v1 = Vector([3, 4, 5])
>>> v2 = Vector([6, 7, 8])
>>> v1 + v2
Vector([9.0, 11.0, 13.0])

>>> v1 + v2 == Vector([3 + 6, 4 + 7, 5 + 8])
True

>>> v1 = Vector([3, 4, 5, 6])
>>> v3 = Vector([1, 2])
>>> v1 + v3
Vector([4.0, 6.0, 5.0, 6.0])

>>> v1 = Vector([3, 4, 5])
>>> v1 + (10, 20, 30)
Vector([13.0, 24.0, 35.0])

>>> from vector2d_v3 import Vector2d

>>> v2d = Vector2d(1, 2)
>>> v1 + v2d
Vector([4.0, 6.0, 5.0])

>>> v1 = Vector([3, 4, 5])
>>> (10, 20, 30) + v1
Traceback (most recent call last):
	File "<stdin>", line 1, in <module>
TypeError: can only concatenate tuple (not "Vector") to tuple

>>> from vector2d_v3 import Vector2d

>>> v2d = Vector2d(1, 2)
>>> v2d + v1
Traceback (most recent call last):
	File "<stdin>", line 1, in <module>
TypeError: unsupported operand type(s) for +: 'Vector2d' and 'Vector'

>>> v1 + 1
Traceback (most recent call last):
	File "<stdin>", line 1, in <module>
	File "vector_v6.py", line 328, in __add__
		pairs = itertools.zip_longest(self, other, fillvalue=0.0)
TypeError: zip_longest argument #2 must support iteration

>>> v1 + 'ABC'
Traceback (most recent call last):
	File "<stdin>", line 1, in <module>
	File "vector_v6.py", line 329, in __add__
		return Vector(a + b for a, b in pairs)
	File "vector_v6.py", line 243, in __init__
		self._components = array(self.typecode, components)
	File "vector_v6.py", line 329, in <genexpr>
		return Vector(a + b for a, b in pairs)
TypeError: unsupported operand type(s) for +: 'float' and 'str'
```

Note that this function constructs new `Vector` object.

