```python
from collections.abc import Iterable

FromTo = tuple[str, str]

def zip_replace(text: str, changes: Iterable[FromTo]) -> str:
	for from_, to in changes:
		text = text.replace(from_, to)
	return text	
```

```python
from collections.abc import Iterator

def fibonacci() -> Iterator[int]:
	a, b = 0, 1
	while True:
		yield a
		a, b = b, a + b
```

```python
from collections.abc import Iterator
from keyword import kwlist

short_kw = (k for k in kwlist if len(k) < 5)
long_kw: Iterator[str] = (k for k in kwlist if len(k) >= 4)
```
