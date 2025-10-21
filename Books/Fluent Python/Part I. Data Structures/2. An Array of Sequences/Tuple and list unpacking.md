```python
>>> lax_coordinates = (33.9425, -118.408056)
>>> latitude, longitude = lax_coordinates 
>>> latitude
3533.9425
>>> longitude
-118.40805
```

```python
>>> b, a = a, b
```

```python
>>> divmod(20, 8)
(2, 4)

>>> t = (20, 8)
>>> divmod(*t)
(2, 4)

>>> quotient, remainder = divmod(*t)
>>> quotient, remainder
(2, 4)
```

```python
>>> import os

>>> _, filename = os.path.split('/home/luciano/.ssh/id_rsa.pub')
>>> filename
'id_rsa.pub'
```

```python
>>> a, b, *rest = range(5)
>>> a, b, rest
(0, 1, [2, 3, 4])

>>> a, b, *rest = range(3)
>>> a, b, rest
(0, 1, [2])

>>> a, b, *rest = range(2)
>>> a, b, rest
(0, 1, []

>>> a, *body, c, d = range(5)
>>> a, body, c, d
(0, [1, 2], 3, 4)

>>> *head, b, c, d = range(5)
>>> head, b, c, d
([0, 1], 2, 3, 4
```

```python
>>> def fun(a, b, c, d, *rest):
>>> 	return a, b, c, d, rest

>>> fun(*[1, 2], 3, *range(4, 7))
(1, 2, 3, 4, (5, 6)
```

```python
>>> *range(4), 4
(0, 1, 2, 3, 4)

>>> [*range(4), 4]
[0, 1, 2, 3, 4]

>>> {*range(4), 4, *(5, 6, 7)}
{0, 1, 2, 3, 4, 5, 6, 7
```

```python
metro_areas = [
	('Tokyo', 'JP', 36.933, (35.689722, 139.691667)),
	('Delhi NCR', 'IN', 21.935, (28.613889, 77.208889)),
	('Mexico City', 'MX', 20.142, (19.433333, -99.133333)),
	('New York-Newark', 'US', 20.104, (40.808611, -74.020386)),
	('São Paulo', 'BR', 19.649, (-23.547778, -46.635833)),
]
def main():
	print(f'{"":15} | {"latitude":>9} | {"longitude":>9}')
	for name, _, _, (lat, lon) in metro_areas:
		if lon <= 0:
			print(f'{name:15} | {lat:9.4f} | {lon:9.4f}')

if __name__ == '__main__':
	main()
```
```Bash
                |   latitude |  longitude
Mexico City     |    19.4333 |   -99.1333
New York-Newark |    40.8086 |   -74.0204
São Paulo       |   -23.5478 |   -46.635
```

```python
>>> [record] = query_returning_single_row()
>>> [[field]] = query_returning_single_row_with_single_field()
```