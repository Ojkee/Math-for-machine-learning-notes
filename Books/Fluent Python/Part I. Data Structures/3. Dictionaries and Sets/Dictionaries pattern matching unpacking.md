```python
def get_creators(record: dict) -> list:
	case {'type': 'book', 'api': 2, 'authors': [*names]}:
		return names
	case {'type': 'book', 'api': 1, 'author': name}:
		return [name] 
	case {'type': 'book'}:
		raise ValueError(f"Invalid 'book' record: {record!r}")
	case {'type': 'movie', 'director': name}:
		return [name]
	case _:
		raise ValueError(f'Invalid record: {record!r}')

>>> b1 = dict(api=1, author='Douglas Hofstadter', 
>>> 		type='book', title='Gödel, Escher, Bach')
>>> get_creators(b1)
['Douglas Hofstadter']

>>> from collections import OrderedDict
>>> b2 = OrderedDict(api=2, type='book',
>>> 		title='Python in a Nutshell',
>>> 		authors='Martelli Ravenscroft Hodlen'.split())
>>> get_creators(b2)
['Martelli', 'Ravenscroft', 'Hodlen']

>>> get_creators({'type': 'book', 'pages': 770})
Traceback (most recent call last):
	...
ValueError: Invalid 'book' record: {'type': 'book', 'pages': 770}

>>> get_creators('Spam, spam, spam')
Traceback (most recent call last):
	...
ValueError: Invalid record: 'Spam, spam, spam'
```

```python
>>> food = dict(category='ice cream', flavor='vanilla', cost=199)
>>> match food:
>>> 	case {'category': 'ice cream', **details}:
>>> 		print(f'Ice cream details: {details}')
Ice cream details: {'flavor': 'vanilla', 'cost': 199}
```