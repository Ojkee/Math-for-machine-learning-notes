```python
>>> City._fields
('name', 'country', 'population', 'location')

>>> Coordinate = namedtuple('Coordinate', 'lat lon')
>>> delhi_data = ('Delhi NCR', 'IN', 21.935, Coordinate(28.613889, 77.208889))
>>> delhi = City._make(delhi_data)
>>> delhi._asdict()
{'name': 'Delhi NCR', 'country': 'IN', 'population': 21.935,
'location': Coordinate(lat=28.613889, lon=77.208889)}

>>> import json

>>> json.dumps(delhi._asdict())
'{"name": "Delhi NCR", "country": "IN", "population": 21.935,
"location": [28.613889, 77.208889]}'
```

```python
>>> Coordinate = namedtuple('Coordinate', 'lat lon reference', defaults=['WGS84'])

>>> Coordinate(0, 0)
Coordinate(lat=0, lon=0, reference='WGS84')

>>> Coordinate._field_defaults
{'reference': 'WGS84'}
```