```python
from collections.abc import Sequence
from random import shuffle
from typing import TypeVar

T = TypeVar('T')

def sample(population: Sequence[T], size: int) -> list[T]:
	if size < 1:
		raise ValueError('size must be >= 1')
	result = list(population)
	shuffle(result)
	return result[:size]
```


```python
from collections.abc import Iterable, Hashable
def mode(data: Iterable[Hashable]) -> Hashable:
	...
```
This example has issue, type `Hashable` implements only the `__hash__` method, so it is inconvenient to return that type.

```python
from collections import Counter
from collections.abc import Iterable, Hashable
from typing import TypeVar

HashableT = TypeVar('HashableT', bound=Hashable)

def mode(data: Iterable[HashableT]) -> HashableT:
	pairs = Counter(data).most_common(1)
	if len(pairs) == 0:
		raise ValueError('no mode for empty data')
	return pairs[0][0]
```


```python
AnyStr = TypeVar('AnyStr', bytes, str)
```
