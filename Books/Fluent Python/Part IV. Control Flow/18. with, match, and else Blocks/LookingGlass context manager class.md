```python
import sys

class LookingGlass:
	def __enter__(self):
		self.original_write = sys.stdout.write
		sys.stdout.write = self.reverse_write
		return 'JABBERWOCKY'
		
	def reverse_write(self, text):
		self.original_write(text[::-1])

	def __exit__(self, exc_type, exc_value, traceback):
		sys.stdout.write = self.original_write
		if exc_type is ZeroDivisionError:
			print('Please DO NOT divide by zero!')
			return True
			

>>> from mirror import LookingGlass
>>> with LookingGlass() as what:
>>> 	print('Alice, Kitty and Snowdrop')
>>> 	print(what)
pordwonS dna yttiK ,ecilA
YKCOWREBBAJ

>>> what
'JABBERWOCKY'

>>> print('Back to normal.')
Back to normal.
```

```python
>>> from mirror import LookingGlass
>>> manager = LookingGlass()
>>> manager # doctest: +ELLIPSIS
<mirror.LookingGlass object at 0x...>

>>> monster = manager.__enter__()
>>> monster == 'JABBERWOCKY'
eurT

>>> monster
'YKCOWREBBAJ'

>>> manager # doctest: +ELLIPSIS
>... ta tcejbo ssalGgnikooL.rorrim<

>>> manager.__exit__(None, None, None)
>>> monster
'JABBERWOCKY'
```

`__exit__` takes 3 arguments:
- `exc_type` - the exception class (eg. `ZeroDivisionError`).
- `exc_value` - The exception instance. Sometimes, parameters passed to the exception constructor—such as the error message—can be found in `exc_value.args`.
- `traceback` -  A traceback object.

Returning `True` means that error has been handled.
