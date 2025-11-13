```python
def angle(self, n):
	r = math.hypot(*self[n:])
	a = math.atan2(r, self[n-1])
	if (n == len(self) - 1) and (self[-1] < 0):
		return math.pi * 2 - a
	else:
		return a

def angles(self):
	return (self.angle(n) for n in range(1, len(self)))
	
def __format__(self, fmt_spec=''):
	if fmt_spec.endswith('h'): # hyperspherical coordinates
		fmt_spec = fmt_spec[:-1]
		coords = itertools.chain([abs(self)],
								 self.angles())
		outer_fmt = '<{}>'
	else:
		coords = self
		outer_fmt = '({})'
	components = (format(c, fmt_spec) for c in coords)
	return outer_fmt.format(', '.join(components))


>>> format(Vector([-1, -1, -1, -1]), 'h')
'<2.0, 2.0943951023931957, 2.186276035465284, 3.9269908169872414>'

>>> format(Vector([2, 2, 2, 2]), '.3eh')
'<4.000e+00, 1.047e+00, 9.553e-01, 7.854e-01>'

>>> format(Vector([0, 1, 0, 0]), '0.5fh')
'<1.00000, 1.57080, 0.00000, 0.00000>'
```