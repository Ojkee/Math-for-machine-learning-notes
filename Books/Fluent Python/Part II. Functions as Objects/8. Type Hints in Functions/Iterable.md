```python
# math.fsum
def fsum(__seq: Iterable[float]) -> float:
	...
```

The leading underscores in `__seq` are a PEP 484 convention for positional-only parameters.

```python
from collections.abc import Iterable

FromTo = tuple[str, str]

def zip_replace(text: str, changes: Iterable[FromTo]) -> str:
	for from_, to in changes:
		text = text.replace(from_, to)
	return text
	
	
>>> l33t = [('a', '4'), ('e', '3'), ('i', '1'), ('o', '0')]
>>> text = 'mad skilled noob powned leet'
>>> from replacer import zip_replace
>>> zip_replace(text, l33t)
'm4d sk1ll3d n00b p0wn3d l33t'
```
