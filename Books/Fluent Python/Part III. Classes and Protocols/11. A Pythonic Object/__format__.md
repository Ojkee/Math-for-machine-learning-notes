```python
def angle(self):
	return math.atan2(self.y, self.x)
	
def __format__(self, fmt_spec=''):
	if fmt_spec.endswith('p'):
		fmt_spec = fmt_spec[:-1]
		coords = (abs(self), self.angle())
		outer_fmt = '<{}, {}>'
	else:
		coords = self
		outer_fmt = '({}, {})'
	components = (format(c, fmt_spec) for c in coords)
	return outer_fmt.format(*components)


>>> format(Vector2d(1, 1), 'p')
'<1.4142135623730951, 0.7853981633974483>'

>>> format(Vector2d(1, 1), '.3ep')
'<1.414e+00, 7.854e-01>'

>>> format(Vector2d(1, 1), '0.5fp')
'<1.41421, 0.78540>'
```