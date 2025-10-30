```python
def tag(
	name: str,
	/,
	*content: str,
	class_: Optional[str] = None,
	**attrs: str,
) -> str:
	...
```
Note the type hint `*content: str` for the arbitrary positional parameters; this means all those arguments must be of type `str`. The type of the content local variable in the function body will be `tuple[str, ...]`.

The type hint for the arbitrary keyword arguments is `**attrs: str` in this example, therefore the type of `attrs` inside the function will be `dict[str, str]`. 

For a type hint like `**attrs: float`, the type of `attrs` in the function would be `dict[str, float]`.

If the `attrs` parameter must accept values of different types, you’ll need to use a `Union[]` or `Any`: `**attrs: Any`.

