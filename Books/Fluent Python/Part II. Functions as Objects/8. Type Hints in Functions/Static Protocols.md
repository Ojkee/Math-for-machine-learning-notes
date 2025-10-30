Suppose we need to implement function that takes `Iterable`, performs sorting and other operations, so we need to accept any type of elements that implement `__lt__` method, that sort function will work.

```python
from typing import Protocol, Any

class SupportsLessThan(Protocol):
	def __lt__(self, other: Any) -> bool: ...
```
```python
from collections.abc import Iterable
from typing import TypeVar
from comparable import SupportsLessThan

LT = TypeVar('LT', bound=SupportsLessThan)

def top(series: Iterable[LT], length: int) -> list[LT]:
	ordered = sorted(series, reverse=True)
	return ordered[:length]
```
