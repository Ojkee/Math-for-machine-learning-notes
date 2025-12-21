```python
def __eq__(self, other):
	if isinstance(other, Vector):
		return (len(self) == len(other) and
				all(a == b for a, b in zip(self, other)))
	else:
		return NotImplemented
			
			
>>> va = Vector([1.0, 2.0, 3.0])
>>> vb = Vector(range(1, 4))
>>> va == vb
True

>>> vc = Vector([1, 2])
>>> from vector2d_v3 import Vector2d
>>> v2d = Vector2d(1, 2)
>>> vc == v2d
True

>>> t3 = (1, 2, 3)
>>> va == t3
False
```