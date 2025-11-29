
```python
from typing import TypeVar, Protocol

T = TypeVar('T')

class Repeatable(Protocol):
	def __mul__(self: T, repeat_count: int) -> T: ...
	
RT = TypeVar('RT', bound=Repeatable)

def double(x: RT) -> RT:
	return x * 2
```

```python
>>> def double(x):
>>> 	return x * 2

>>> double(1.5)
3.0

>>> double('A')
'AA'

>>> double([10, 20, 30])
[10, 20, 30, 10, 20, 30]

>>> from fractions import Fraction

>>> double(Fraction(2, 5))
Fraction(4, 5)

>>> from vector_v7 import Vector

>>> double(Vector([11.0, 12.0, 13.0]))
Vector([22.0, 24.0, 26.0])
```

