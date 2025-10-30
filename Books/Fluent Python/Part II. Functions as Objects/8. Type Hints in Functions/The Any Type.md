`Any` is dynamic type, which means, type checker assumes, that it supports every possible operation.

```python
def double(x):
	return x * 2

def double(x: Any) -> Any:
	return x * 2 
```

Without type hints (*first function*) type checker assumes `Any` as types (*second function*).
