```python
class Vector:
	typecode = 'd'
	
	def __init__(self, components):
		self._components = array(self.typecode, components)
		
	# many methods omitted
	
	def __mul__(self, scalar):
		try:
			factor = float(scalar)
		except TypeError:
			return NotImplemented
		return Vector(n * factor for n in self)
		
	def __rmul__(self, scalar):
		return self * scalar
	

>>> v1 = Vector([1, 2, 3])
>>> v1 * 10
Vector([10.0, 20.0, 30.0])

>>> 11 * v1
Vector([11.0, 22.0, 33.0])

>>> v1 = Vector([1.0, 2.0, 3.0])
>>> 14 * v1
Vector([14.0, 28.0, 42.0])

>>> v1 * True
Vector([1.0, 2.0, 3.0])

>>> from fractions import Fraction

>>> v1 * Fraction(1, 3)
Vector([0.3333333333333333, 0.6666666666666666, 1.0])
```