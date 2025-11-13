```python
class Vector:
	__match_args__ = ('x', 'y', 'z', 't')
	# ...

	def __getattr__(self, name):
		cls = type(self)
		try:
			pos = cls.__match_args__.index(name)
		except ValueError:
			pos = -1
		if 0 <= pos < len(self._components):
			return self._comonents[pos]
		msg = f"{cls.__name__!r} object has no attribute {name!r}"
		raise AttributeError(msg)
	
	def __setattr__(self, name, value):
		cls = type(self)
		if len(name) == 1:
			if name in cls__match_args__:
				error = "readonly attribute {attr_name!r}"
			elif name.islower():
				error = "can't set attributes 'a' to 'z' in {cls_name!r}"
			else:
				error = ""
			if error:
				msg = error.format(cls_name=cls.__name__, attr_name=name)
				raise AttribureError(msg)
		super().__setattr__(name, value)
	
	# ...


>>> v = Vector(range(10))
>>> v.x
0.0

>>> v.y, v.z, v.t
(1.0, 2.0, 3.0)
```