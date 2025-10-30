```python
>>> from operator import mul
>>> from functools import partial

>>> triple = partial(mul, 3)
>>> triple(7)
21

>>> list(map(triple, range(1, 10)))
[3, 6, 9, 12, 15, 18, 21, 24, 27
```

```python
>>> import unicodedata, functools

>>> nfc = functools.partial(unicodedata.normalize, 'NFC')
>>> s1 = 'café'
>>> s2 = 'cafe\u0301'
>>> s1, s2
('café', 'café')

>>> s1 == s2
False

>>> nfc(s1) == nfc(s2)
True
```

```python
>>> from tagger import tag
>>> from functools import partial

>>> tag
<function tag at 0x10206d1e0>


>>> picture = partial(tag, 'img', class_='pic-frame')
>>> picture(src='wumpus.jpeg')
'<img class="pic-frame" src="wumpus.jpeg" />'

>>> picture
functools.partial(<function tag at 0x10206d1e0>, 'img', class_='pic-frame')

>>> picture.func
<function tag at 0x10206d1e0>

>>> picture.args
('img',)

>>> picture.keywords
{'class_': 'pic-frame'}
```