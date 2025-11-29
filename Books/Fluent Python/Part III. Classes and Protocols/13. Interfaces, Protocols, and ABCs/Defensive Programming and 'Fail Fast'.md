
```python
def __init__(self, iterable):
	self._balls = list(iterable)
```

That way you make your code more flexible, because the list() constructor handles any iterable that fits in memory. If the argument is not iterable, the call will fail fast with a very clear `TypeError` exception, right when the object is initialized.
