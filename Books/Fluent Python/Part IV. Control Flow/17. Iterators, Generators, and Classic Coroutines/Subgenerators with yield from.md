```python
# This
>>> def sub_gen():
>>> 	yield 1.1
>>> 	yield 1.2

>>> def gen():
>>> 	yield 1
>>> 	for i in sub_gen():
>>> 		yield i
>>> 	yield 2

>>> for x in gen():
>>> 	print(x)
1
1.1
1.2
2

# can be written like this
>>> def sub_gen():
>>> 	yield 1.1
>>> 	yield 1.2

>>> def gen():
>>> 	yield 1
>>> 	yield from sub_gen()
>>> 	yield 2

>>> for x in gen():
>>> 	print(x)
1
1.1
1.2
2
```