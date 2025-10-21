```python
import math 
	def __init(self, x=0, y=0):
		self.x = x
		self.y = y
		
	def __repr__(self):
		return f'Vector({self.x!r}, {self.y!r})'
		
	def __abs__(self):
		return math.hypot(self.x, self.y)
		
	def __bool__(self):
		return bool(self.x or self.y)
		
	def __add__(self, other):
		x = self.x + other.x
		y = self.y + other.y
		return Vector(x, y)	
		
	def __mul__(self, scalar):
		return Vector(self.x * scalar, self.y * scalar)
```

```python
>>> v = Vector(3, 4)
>>> abs(v)
5.0

>>> v * 3
Vector(9, 12)

>>> abs(v * 3)
15.0
```