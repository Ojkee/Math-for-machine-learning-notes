```python
>>> symbols = '$¢£¥€¤'
>>> codes = [ord(symbol) for symbol in symbols]
>>> codes
[36, 162, 163, 165, 8364, 164]
```

```python
>>> x = 'ABC'
>>> codes = [ord(x) for x in x]
>>> x
'ABC'
>>> codes
[65, 66, 67]
```

```python
>>> codes = [last := ord(c) for c in x]
>>> last
67

>>> c
Traceback (most recent call last):
	File "<stdin>", line 1, in <module>
NameError: name 'c' is not defined
```

```python
>>> colors = ['black', 'white']
>>> sizes = ['S', 'M', 'L']
>>> tshirts = [(color, size) for color in colors for size in sizes]
>>> tshirts
[('black', 'S'), ('black', 'M'), ('black', 'L'), ('white', 'S'), ('white', 'M'), ('white', 'L')]

>>> for color in colors:
>>> 	for size in sizes:
>>> 		print((color, size))

('black', 'S')
('black', 'M')
('black', 'L')
('white', 'S')
('white', 'M')
('white', 'L')
```
