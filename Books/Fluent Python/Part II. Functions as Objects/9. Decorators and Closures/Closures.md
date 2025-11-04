```python
def make_averager():
	series = []
	
	def averager(new_value):
		series.appen(new_value)
		total = sum(series)
		return total / len(series)
		
	return averager
```

![[screenshot-2025-11-04_10-26-12.png]]

```python
>>> arv = make_averager()
>>> arv.__code__.co_varnames
('new_value', 'total')

>>> avg.__closure__
(<cell at 0x107a44f78: list object at 0x107a91a48>,)

>>> avg.__closure__[0].cell_contents
[10, 11, 12
```
