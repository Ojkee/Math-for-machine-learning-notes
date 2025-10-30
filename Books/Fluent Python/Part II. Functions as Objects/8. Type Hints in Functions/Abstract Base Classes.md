Be conservative in what you send, be liberal in what you accept.
	*—Postel’s law, a.k.a. the Robustness Principle*

```python
from collections.abc import Mapping

def name2hex(name: str, color_map: Mapping[str, int]) -> str:
	...
```

Using `abc.Mapping` allows the caller to provide an instance of `dict`, `defaultdict`, `ChainMap`, a `UserDict` subclass, or any other type that is [[Subtype-of|subtype-of]] `Mapping`.


```python
def name2hex(name: str, color_map: dict[str, int]) -> str:
	...
```
In this case `collections.UserDict` would not pass the type check, because `UserDict` is not subclass of type `dict`; they are siblings. Both are subclasses of `abc.MutableMapping`.
