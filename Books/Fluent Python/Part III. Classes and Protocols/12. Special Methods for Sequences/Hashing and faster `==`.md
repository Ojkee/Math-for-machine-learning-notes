```python
def __hash__(self):
	hashes = (hash(x) for x in self._components)
	return functools.reduce(operator.xor, hashes, 0)

def __eq__(self, other):
	return len(self) == len(other) and all(a == b for a, b in zip(self, other))
```