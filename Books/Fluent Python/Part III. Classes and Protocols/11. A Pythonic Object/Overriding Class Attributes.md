```python
>>> from vector2d_v3 import Vector2d

>>> v1 = Vector2d(1.1, 2.2)
>>> dumpd = bytes(v1)
>>> dumpd
b'd\x9a\x99\x99\x99\x99\x99\xf1?\x9a\x99\x99\x99\x99\x99\x01@'

>>> len(dumpd)
17

>>> v1.typecode = 'f'
>>> dumpf = bytes(v1)
>>> dumpf
b'f\xcd\xcc\x8c?\xcd\xcc\x0c@'

>>> len(dumpf)
9

>>> Vector2d.typecode
'd'
```

```python
>>> Vector2d.typecode = 'f'
```
This works for all instances, but isn't Pythonic.

```python
from vector2d_v3 import Vector2d
class ShortVector2d(Vector2d):
	typecode = 'f'


>>> sv = ShortVector2d(1/11, 1/27)
>>> sv
ShortVector2d(0.09090909090909091, 0.037037037037037035)

>>> len(bytes(sv))
9
```