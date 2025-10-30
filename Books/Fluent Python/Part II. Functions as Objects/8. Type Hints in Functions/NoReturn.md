This is a special type used only to annotate the return type of functions that never return.

Usually, they exist to raise exceptions.

```python
def exit(__status: object = ...) -> NoReturn: ...
```

The `__status` parameter is positional only, and it has a default value. Stub files don’t
spell out the default values, they use `...` instead. 
The type of `__status` is `object`, which means it may also be `None`, therefore it would be redundant to mark it `Optional[object]`.
