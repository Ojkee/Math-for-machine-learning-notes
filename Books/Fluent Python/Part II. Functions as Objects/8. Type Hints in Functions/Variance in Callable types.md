```python
from collections.abc import Callable

def update(
	probe: Callabe[[], float],
	display: Callable[[float], None]
) -> None:
	temperature = probe()
	# Control code
	display(temperature)
```
```python
def probe_ok() -> int:
	return 42
	
def display_wrong(temperature: int) -> None:
	print(hex(temperature))
	
update(probe_ok, display_wrong) # type error
```
```python
def display_ok(temperature: complex) -> None:
	print(temperature)
	
update(probe_ok, display_ok) # OK
```
To summarize, it’s OK to provide a callback that returns an `int` when the code
expects a callback that returns a `float`, because an `int` value can always be used
where a `float` is expected.

Formally, we say that `Callable[[], int]` is [[Subtype-of|subtype-of]] `Callable[[], float]`—as
`int` is subtype-of `float`. This means that `Callable` is covariant on the return type because the subtype-of relationship of the types `int` and `float` is in the same direction as the relationship of the `Callable` types that use them as return types.

On the other hand, it’s a type error to provide a callback that takes a `int` argument
when a callback that handles a `float` is required.

Formally, `Callable[[int], None]` is **not** a subtype-of `Callable[[float], None]`.
Although `int` is subtype-of `float`, in the parameterized `Callable` type the relationship is reversed: `Callable[[float], None]` is subtype-of `Callable[[int], None]`.

Therefore we say that `Callable` is **contravariant** on the declared parameter types.