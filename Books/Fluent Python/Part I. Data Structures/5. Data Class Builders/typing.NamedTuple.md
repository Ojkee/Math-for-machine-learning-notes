```python
>>> import typing

>>> Coordinate = typing.NamedTuple('Coordinate',
>>> 	[('lat', float), ('lon', float)])

>>> issubclass(Coordinate, tuple)
True

>>> typing.get_type_hints(Coordinate)
{'lat': <class 'float'>, 'lon': <class 'float'>}
```

```python
from typing import NamedTuple

class Coordinate(NamedTuple):
	lat: float
	lon: float
	
	def __str__(self):
		ns = 'N' if self.lat >= 0 else 'S'
		we = 'E' if self.lon >= 0 else 'W'
		return f'{abs(self.lat):.1f}°{ns}, {abs(self.lon):.1f}°{we}'

>>> issubclass(Coordinate, typing.NamedTuple)
False

>>> issubclass(Coordinate, tuple)
True
```