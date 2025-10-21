```python
>>> a = [1, 2, 3]
>>> b = a
>>> a.append(4)
>>> b
[1, 2, 3, 4]
```

```python
>>> class Gizmo:
>>> 	def __init__(self):
>>> 		print(f'Gizmo id: {id(self)}')

>>> x = Gizmo()
Gizmo id: 4301489152

>>> y = Gizmo() * 10
Gizmo id: 4301489432
Traceback (most recent call last):
	File "<stdin>", line 1, in <module>
TypeError: unsupported operand type(s) for *: 'Gizmo' and 'int'

>>> dir()
['Gizmo', '__builtins__', '__doc__', '__loader__', '__name__',
'__package__', '__spec__', 'x']
```