```python
def chain(*iterables):
	for it in iterables:
		for i in it:
			yield i
```
```python
def chain(*iterables):
	for i in iterables:
		yield from i

>>> list(chain(s, t))
['A', 'B', 'C', 0, 1, 2]
```

```python
>>> s = 'ABC'
>>> r = range(3)
>>> list(chain(s, r))
['A', 'B', 'C', 0, 1, 2]
```
