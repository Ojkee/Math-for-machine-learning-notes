```python
import typing

class DemoNTClass(typing.NamedTuple):
	a: int
	b: float = 1.1
	c = 'spam'
```

```python
>>> from demo_nt import DemoNTClass

>>> DemoNTClass.__annotations__
{'a': <class 'int'>, 'b': <class 'float'>}

>>> DemoNTClass.a
<_collections._tuplegetter object at 0x101f0f940>

>>> DemoNTClass.b
<_collections._tuplegetter object at 0x101f0f8b0>

>>> DemoNTClass.c
'spam'

>>> DemoNTClass.__doc__
'DemoNTClass(a, b)'

>>> nt = DemoNTClass(8)
>>> nt.a
8

>>> nt.b
1.1

>>> nt.c
'spam'
```