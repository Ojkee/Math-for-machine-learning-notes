```python
import contextlib
import sys

@contextlib.contextmanager
def looking_glass():
	original_write = sys.stdout.write
	
	def reverse_write(text):
		original_write(text[::-1])
	
	sys.stdout.write = reverse_write
	msg = ''
	try:
		yield 'JABBERWOCKY'
	except ZeroDivisionError:
		msg = 'Please DO NOT divide by zero!'
	finally:
		sys.stdout.write = original_write
		if msg:
			print(msg)


>>> from mirror_gen import looking_glass
>>> with looking_glass() as what:
>>> 	print('Alice, Kitty and Snowdrop')
>>> 	print(what)
pordwonS dna yttiK ,ecilA
YKCOWREBBAJ

>>> what
'JABBERWOCKY'

>>> print('back to normal')
back to normal
```

- Everything before `yield` happens as if it was in `__enter__`.
- Value with `yield` keyword becomes the variable after `as`.
- Everything after `yield`  happens as if it was in `__exit__`.

Having a `try/finally` (or a with block) around the `yield` is an unavoidable price of using `@contextmanager`, because you never know what the users of your context manager are going to do inside the with block.

