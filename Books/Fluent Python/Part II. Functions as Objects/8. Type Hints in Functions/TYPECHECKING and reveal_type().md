```python
from collections.abc import Iterator
from typing import TYPE_CHECKING

import pytest

from top import top

# several lines omitted

def test_top_tuples() -> None:
	fruit = 'mango pear apple kiwi banana'.split()
	series: Iterator[tuple[int, str]] = (
		(len(s), s) for s in fruit)
	length = 3
	expected = [(6, 'banana'), (5, 'mango'), (5, 'apple')]
	result = top(series, length)
	if TYPE_CHECKING:
		reveal_type(series)
		reveal_type(expected)
		reveal_type(result)
	assert result == expected
	
# intentional type error
def test_top_objects_error() -> None:
	series = [object() for _ in range(4)]
	if TYPE_CHECKING:
		reveal_type(series)
	with pytest.raises(TypeError) as excinfo:
		top(series, 3)
	assert "'<' not supported" in str(excinfo.value)
```

```bash
…/comparable/ $ mypy top_test.py
top_test.py:32: note:
	Revealed type is "typing.Iterator[Tuple[builtins.int, builtins.str]]"
top_test.py:33: note:
	Revealed type is "builtins.list[Tuple[builtins.int, builtins.str]]"
top_test.py:34: note:
	Revealed type is "builtins.list[Tuple[builtins.int, builtins.str]]"
top_test.py:41: note:
	Revealed type is "builtins.list[builtins.object*]"
top_test.py:43: error:
	Value of type variable "LT" of "top" cannot be "object"
Found 1 error in 1 file (checked 1 source file)
```
