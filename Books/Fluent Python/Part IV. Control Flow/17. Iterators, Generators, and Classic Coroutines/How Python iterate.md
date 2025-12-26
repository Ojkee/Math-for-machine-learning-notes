```python
# This
>>> s = 'ABC'
>>> for char in s:
>>> 	print(char)
A
B
C

# is basically this
>>> s = 'ABC'
>>> it = iter(s)
>>> while True:
>>> 	try:
>>> 		print(next(it))
>>> 	except StopIteration:
>>> 		del it
>>> 		break
```

```python
class Spam:
	def __getitem__(self, i):
		print('->', i)
		raise IndexError()
		

>>> spam_can = Spam()
>>> iter(spam_can)
<iterator object at 0x10a878f70>

>>> list(spam_can)
-> 0
[]

>>> from collections import abc
>>> isinstance(spam_can, abc.Iterable)
False
```

Python may use `__getitem__` to iterate over object, and use `IndexError` or `StopIteration` as signal to stop. Note that although implementing mechanism to iterate, `isinstance` check returns `False`, because **Spam** doesn't implement `__iter__` method.

```python
class GooseSpam:
	def __iter__(self):
		pass
		

>>> from collections import abc
>>> issubclass(GooseSpam, abc.Iterable)
True

>>> goose_spam_can = GooseSpam()
>>> isinstance(goose_spam_can, abc.Iterable)
True
```
