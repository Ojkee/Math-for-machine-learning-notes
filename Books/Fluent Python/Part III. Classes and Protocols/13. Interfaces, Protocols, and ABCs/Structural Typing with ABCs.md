```python
>>> class Struggle:
>>> def __len__(self):
>>> 	return 23

>>> from collections import abc

>>> isinstance(Struggle(), abc.Sized)
True

>>> issubclass(Struggle, abc.Sized)
True
```

`ABCs` are mostly used with nominal typing. When a class *Sub* explicitly inherits from *AnABC*, or is registered with *AnABC*, the name of *AnABC* is linked to the Sub class—and that’s how at runtime, `issubclass(AnABC, Sub)` returns `True`.

In contrast, structural typing is about looking at the structure of an object’s public interface to determine its type: an object is **consistent-with** a type if it implements the methods defined in the type. Dynamic and static duck typing are two approaches to structural typing.


