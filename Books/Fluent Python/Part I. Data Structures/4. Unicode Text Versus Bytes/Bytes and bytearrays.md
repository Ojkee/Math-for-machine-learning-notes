```python
>>> cafe = bytes('café', encoding='utf_8')
>>> cafe 
b'caf\xc3\xa9'

>> cafe[0]
99

>> cafe[:1]
b'c'

>>> cafe_arr = bytearray(cafe)
>>> cafe_arr
bytearray(b'caf\xc3\xa9')

>>> cafe_arr[-1:]
bytearray(b'\xa9')
```

```python
>>> bytes.fromhex('32 4B CE A9')
b'1K\xce\xa9'
```

```python
>>> import array

>>> numbers = array.array('h', [-2, -1, 0, 1, 2])
>>> octets = bytes(numbers)
>>> octets
b'\xfe\xff\xff\xff\x00\x00\x01\x00\x02\x00'
```