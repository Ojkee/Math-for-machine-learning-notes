```python
class MySeq:
	def __getitem__(self, index):
		return index
		

>>> s = MySeq()
>>> s[1]
1

>>> s[1:4]
slice(1, 4, None)

>>> s[1:4:2]
slice(1, 4, 2)

>>> s[1:4:2, 9]
(slice(1, 4, 2), 9)

>>> s[1:4:2, 7:9]
(slice(1, 4, 2), slice(7, 9, None))
```

```python
>>> slice
<class 'slice'>

>>> dir(slice)
['__class__', '__delattr__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__le__', '__lt__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', 'indices', 'start', 'step', 'stop']
 ```

```python
>>> slice(None, 10, 2).indices(5)
(0, 5, 2)

>>> slice(-3, None, None).indices(5)
(2, 5, 1)
```