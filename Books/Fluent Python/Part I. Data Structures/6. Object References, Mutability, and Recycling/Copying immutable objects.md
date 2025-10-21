```python
>>> t1 = (1, 2, 3)
>>> t2 = tuple(t1)
>>> t2 is t1
True

>>> t3 = t1[:]
>>> t3 is t1
True
```

```python
>>> t1 = (1, 2, 3)
>>> t3 = (1, 2, 3)
>>> t3 is t1
False

>>> s1 = 'ABC'
>>> s2 = 'ABC'
>>> s2 is s1
True
```

