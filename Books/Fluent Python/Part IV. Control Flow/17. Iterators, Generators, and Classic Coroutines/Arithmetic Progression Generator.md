```python
class ArithmeticProgression:
	def __init__(self, begin, step, end=None):
		self.begin = begin
		self.step = step
		self.end = end # None -> "infinite" series
		
	def __iter__(self):
		result_type = type(self.begin + self.step)
		result = result_type(self.begin)
		forever = self.end is None
		index = 0
		while forever or result < self.end:
			yield result
			index += 1
			result = self.begin + self.step * index
			

>>> ap = ArithmeticProgression(0, 1, 3)
>>> list(ap)
[0, 1, 2]

>>> ap = ArithmeticProgression(1, .5, 3)
>>> list(ap)
[1.0, 1.5, 2.0, 2.5]

>>> ap = ArithmeticProgression(0, 1/3, 1)
>>> list(ap)
[0.0, 0.3333333333333333, 0.6666666666666666]

>>> from fractions import Fraction
>>> ap = ArithmeticProgression(0, Fraction(1, 3), 1)
>>> list(ap)
[Fraction(0, 1), Fraction(1, 3), Fraction(2, 3)]

>>> from decimal import Decimal
>>> ap = ArithmeticProgression(0, Decimal('.1'), .3)
>>> list(ap)
[Decimal('0'), Decimal('0.1'), Decimal('0.2')]

# Why we multiply instead of accumulating
>>> 100 * 1.1
110.00000000000001

>>> sum(1.1 for _ in range(100))
109.99999999999982

>>> 1000 * 1.1
1100.0

>>> sum(1.1 for _ in range(1000))
1100.000000000008
```