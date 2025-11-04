Within *averager*, *series* is a **free variable**, which means that this variable is not bound in the local scope.

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
>>> avg = make_averager()
>>> avg.__code__.co_freevars
('series',)
```