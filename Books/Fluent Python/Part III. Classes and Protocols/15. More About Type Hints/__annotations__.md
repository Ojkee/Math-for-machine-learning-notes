```python
def clip(text: str, max_len: int = 80) -> str: ...


>>> from clip_annot import clip
>>> clip.__annotations__
{'text': <class 'str'>, 'max_len': <class 'int'>, 'return': <class 'str'>}
```

Evaluated at import time. Note that python types are `int` and `str` not `'int'` or `'str'`.
