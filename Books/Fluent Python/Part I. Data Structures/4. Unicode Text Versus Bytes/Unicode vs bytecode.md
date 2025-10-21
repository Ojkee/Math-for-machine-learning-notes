```python
>>> s = 'café'
>>> len(s)
4

>>> b = s.encode('utf8')
>>> b 
b'caf\xc3\xa9'

>>> len(b)
5

>>> b.decode('utf8')
'café'
```