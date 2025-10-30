```python
Callable[[ParamType1, ParamType2], ReturnType]
```

```python
def repl(input_fn: Callable[[Any], str] = input]) -> None:
	...

def input(__prompt: Any = ...) -> str: ...
# Callable[[Any], str]
```

There is no syntax to annotate **optional** or **keyword** arguments types. In that case use
```python
Callable[..., ReturnType]
```

