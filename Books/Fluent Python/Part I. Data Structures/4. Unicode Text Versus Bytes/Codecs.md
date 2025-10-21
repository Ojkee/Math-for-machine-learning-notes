```python
>>> for codec in ['latin_1', 'utf_8', 'utf_16']:
>>> 	pri8nt(codec, 'El Niño'.encode(codec), sep='\t')
latin_1 b'El Ni\xf1o'
utf_8   b'El Ni\xc3\xb1o'
utf_16  b'\xff\xfeE\x00l\x00 \x00N\x00i\x00\xf1\x00o\x00'
```

```python
>>> city = 'São Paulo'
>>> city.encode('utf_8')
b'S\xc3\xa3o Paulo'

>>> city.encode('utf_16')
b'\xff\xfeS\x00\xe3\x00o\x00 \x00P\x00a\x00u\x00l\x00o\x00'

>>> city.encode('iso8859_1')
b'S\xe3o Paulo'

>>> city.encode('cp437')
Traceback (most recent call last):
	File "<stdin>", line 1, in <module>
	File "/.../lib/python3.4/encodings/cp437.py", line 12, in encode
		return codecs.charmap_encode(input,errors,encoding_map)
UnicodeEncodeError: 'charmap' codec can't encode character '\xe3' in
position 1: character maps to <undefined>

>>> city.encode('cp437', errors='ignore')
b'So Paulo'

>>> city.encode('cp437', errors='replace')
b'S?o Paulo'

>>> city.encode('cp437', errors='xmlcharrefreplace')
b'S&#227;o Paulo'
```

```python
>>> octets = b'Montr\xe9al'
>>> octets.decode('cp1252')
'Montréal'

>>> octets.decode('iso8859_7')
'Montrιal'

>>> octets.decode('koi8_r')
'MontrИal'

>>> octets.decode('utf_8')
Traceback (most recent call last):
	File "<stdin>", line 1, in <module>
UnicodeDecodeError: 'utf-8' codec can't decode byte 0xe9 in position 5:
invalid continuation byte

>>> octets.decode('utf_8', errors='replace')
'Montr�al'
```

```python
# coding: cp1252

print('Olá, Mundo!')
```