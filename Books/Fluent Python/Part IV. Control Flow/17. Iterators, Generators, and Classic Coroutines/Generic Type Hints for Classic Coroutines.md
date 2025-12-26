```python
my_coro : Generator[YieldType, SendType, ReturnType
```

```python
T_co = TypeVar('T_co', covariant=True)
V_co = TypeVar('V_co', covariant=True)
T_contra = TypeVar('T_contra', contravariant=True)

# many lines omitted

class Generator(
	Iterator[T_co],
	Generic[T_co, T_contra, V_co],
	extra=_G_base,
):
```

```python
					   float :> int
Generator[float, Any, float] :> Generator[int, Any, int]
```

```python
					 float :> int
Generator[Any, float, Any] <: Generator[Any, int, Any]
```