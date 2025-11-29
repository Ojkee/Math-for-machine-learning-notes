```python
@runtime_checkable
class SupportsComplex(Protocol):
	"""An ABC with one abstract method __complex__."""
	
	__slots__ = ()
	
	@abstractmethod
	def __complex__(self) -> complex:
		pass
```

Thanks to the `@runtime_checkable` class decorator applied to `SupportsComplex`, that
protocol can also be used with `isinstance` checks.

```python
>>> from typing import SupportsComplex
>>> import numpy as np

>>> c64 = np.complex64(3+4j)
>>> isinstance(c64, complex)
False

>>> isinstance(c64, SupportsComplex)
True

>>> c = complex(c64)
>>> c
(3+4j)

>>> isinstance(c, SupportsComplex)
False

>>> complex(c)
(3+4j)
```

```python
isinstance(c, (complex, SupportsComplex))
```
```python
>>> import numbers
>>> isinstance(c, numbers.Complex)
True
>>> isinstance(c64, numbers.Complex)
True
```
