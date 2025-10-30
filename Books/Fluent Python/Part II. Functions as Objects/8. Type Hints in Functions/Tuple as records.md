```python
geo_info: tuple[str, float, str] = ('Shanghai', 24.28, 'China')
```

```python
>>> shanghai = 31.2304, 121.4737
>>> geohash(shanghai)
'wtw3sjq6q'
```

```python
from geolib import geohash as gh # type: ignore

PRECISION = 9

def geohash(lat_lon: tuple[float, float]) -> str:
	return gh.encode(*lat_lon, PRECISION)
```