```python
def cast(typ, val):
	"""Cast a value to a type.
	This returns the value unchanged. To the type checker this
	signals that the return value has the designated type, but at
	runtime we intentionally don't check anything (we want this
	to be as fast as possible).
	"""
	return val
```

```python
def find_first_str(a: list[object]) -> str:
	index = next(i for i, x in enumerate(a) if isinstance(x, str))
	# We only get here if there's at least one string
	return cast(str, a[index])
```

```python
from asyncio.trsock import TransportSocket
from typing import cast

# ... many lines omitted ...

	socket_list = cast(tuple[TransportSocket, ...], server.sockets)
	addr = socket_list[0].getsockname()
```