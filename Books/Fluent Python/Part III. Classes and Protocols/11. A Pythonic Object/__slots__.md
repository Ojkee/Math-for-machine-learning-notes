```python
class Pixel:
	lots__ = ('x', 'y')


>>> p = Pixel()
>>> p.__dict__
Traceback (most recent call last):
	...
AttributeError: 'Pixel' object has no attribute '__dict__'


>>> p.x = 10
>>> p.y = 20
>>> p.color = 'red'
Traceback (most recent call last):
	...
AttributeError: 'Pixel' object has no attribute 'color'
```

```python
class OpenPixel(Pixel):
	pass


>>> op = OpenPixel()
>>> op.__dict__
{}

>>> op.x = 8
>>> op.__dict__
{}

>>> op.x
8

>>> op.color = 'green'
>>> op.__dict__
{'color': 'green'}
```

```python
>>> class ColorPixel(Pixel):
	__slots__ = ('color',)


>>> cp = ColorPixel()
>>> cp.__dict__
Traceback (most recent call last):
	...
AttributeError: 'ColorPixel' object has no attribute '__dict__'

>>> cp.x = 2
>>> cp.color = 'blue'
>>> cp.flavor = 'banana'
Traceback (most recent call last):
	...
AttributeError: 'ColorPixel' object has no attribute 'flavor'
```