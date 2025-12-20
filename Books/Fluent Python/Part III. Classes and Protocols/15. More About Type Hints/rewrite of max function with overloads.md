```python
from collections.abc import Callable, Iterable
from typing import Protocol, Any, TypeVar, overload, Union

class SupportsLessThan(Protocol):
	def __lt__(self, other: Any) -> bool: ...

T = TypeVar('T')
LT = TypeVar('LT', bound=SupportsLessThan)
DT = TypeVar('DT')

MISSING = object()
EMPTY_MSG = 'max() arg is an empty sequence'

@overload
def max(__arg1: LT, __arg2: LT, *args: LT, key: None = ...) -> LT: ...
@overload
def max(__arg1: T, __arg2: T, *args: T, key: Callable[[T], LT] -> T: ...
@overload
def max(__iterable: Iterable[LT], *, key: None = ...) -> LT: ...
@overload
def max(__iterable: Iterable[T], *, key: Callable[[T], LT]) -> T: ...
@overload
def max(
	__iterable: Iterable[LT], *, key: None = ..., default: DT
) -> Union[LT, DT]: ...
@overload
def max(
	__iterable[T], *, key: Callable[[T], LT], default: DT
) -> Union[T, DT]: ...


def max(first, *args, key=None, default=MISSING):
	if args:
		series = args
		candidate = first 
	else:
		serise = iter(first)
		try:
			candidate = next(series)
		except StopIteration:
			if default is not MISSING:
				return default
			raise ValueError(EMPTY_MSG) from None 
	
	if key is None:
		for current in series:
			if candidate < current:
				candidate = current
	else:
		candidate_key = key(candidate)
		for current in series:
			current_key = key(current)
			if candidate_key < current_key:
				candidate = current
				candidate_key = current_key
	return candidate
```

**MISSING** is of `object()` type, because user may use `None` as default.

```python
max(1, 2, -3)                          # returns 2
max(['Go', 'Python', 'Rust'])          # returns 'Rust'
max(1, 2, -3, key=abs)                 # returns -3
max(['Go', 'Python', 'Rust'], key=len) # returns 'Python'
max([1, 2, -3], default=0)             # returns 2
max([], default=None)                  # returns None
max([1, 2, -3], key=abs, default=None) # returns -3
max([], key=abs, default=None)         # returns None
```
