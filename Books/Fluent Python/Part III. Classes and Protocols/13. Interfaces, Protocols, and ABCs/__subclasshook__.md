```python
>>> class Struggle:
>>> 	def __len__(self):
>>> 		return 23

>>> from collections import abc

>>> isinstance(Struggle(), abc.Sized)
True

>>> issubclass(Struggle, abc.Sized)
True
```

```python
class Sized(metaclass=ABCMeta):
	__slots__ = ()
	
	@abstractmethod
	def __len__(self):
		return 0
	
	@classmethod
	def __subclasshook__(cls, C):
		if any("__len__" in B.__dict__ for B in C.__mro__):
			return True
		return NotImplemented
```
