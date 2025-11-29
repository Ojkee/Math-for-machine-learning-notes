```python
_Number = Union[float, Decimal, Fraction]
_NumberT = TypeVar('_NumberT', float, Decimal, Fraction)
```

```python
>>> import numpy as np
>>> cd = np.cdouble(3+4j)
>>> cd
(3+4j)

>>> float(cd)
<stdin>:1: ComplexWarning: Casting complex values to real
discards the imaginary part
3.0
```

```python
>>> import numpy as np
>>> from typing import SupportsComplex

>>> sample = [1+0j, np.complex64(1+0j), 1.0, np.float16(1.0), 1, np.uint8(1)]

>>> [isinstance(x, SupportsComplex) for x in sample]
[False, True, False, False, False, False]

>>> [complex(x) for x in sample]
[(1+0j), (1+0j), (1+0j), (1+0j), (1+0j), (1+0j)]
```

```python
def to_complex(n: SupportsComplex) -> complex:
	return complex(n)
```