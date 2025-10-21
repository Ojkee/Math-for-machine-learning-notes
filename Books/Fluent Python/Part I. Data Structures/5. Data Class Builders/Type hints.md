```python
from typing import NamedTuple

class Coordinate(NamedTuple):
	lat: float
	lon: float
	reference: str = 'WGS84'
```

```python
>>> Coordinate('Ni!', None)
Coordinate(lat='Ni!', lon=None)
```