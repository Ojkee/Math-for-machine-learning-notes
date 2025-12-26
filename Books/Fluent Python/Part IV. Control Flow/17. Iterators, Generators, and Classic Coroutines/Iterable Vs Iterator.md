![[Pasted image 20251226181834.png]]

```python
class Iterator(Iterable):
	__slots__ = ()
	
	@abstractmethod
	def __next__(self):
		'Return the next item from the iterator. \
		 When exhausted, raise StopIteration'
		raise StopIteration
	
	def __iter__(self):
		return self
		
	@classmethod
	def __subclasshook__(cls, C):
		if cls is Iterator:
			return _check_methods(C, '__iter__', '__next__')
		return NotImplemented
```