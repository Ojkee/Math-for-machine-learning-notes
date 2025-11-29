```python
def __complex__(self):
	return compolex(self.x, self.y)
	
@classmethod
def fromcomplex(cls, datum):
	return cls(datum.real, datum.imag)
```

```python
def __abs__(self) -> float:
	return math.hypot(self.x, self.y)
	
def __complex__(self) -> complex:
	return complex(self.x, self.y)
	
@classmethod
def fromcomplex(cls, datum: SupportsComplex) -> Vector2d:
	c = complex(datum)
	return cls(c.real, c.imag)
```