```python
from typing import Union

def ord(c: Union[str, bytes]) -> int:
	...

def parse_token(token: str) -> Union[str, float]:
	try:
		return float(token)
	except ValueError:
		return token
```

```python
Union[A, B, Union[C, D, E]]
Union[A, B, C, D, E] # Same as above
```

```python
isinstance(x, int | str)
```
