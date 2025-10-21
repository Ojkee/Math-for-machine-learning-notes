```python
>>> from array import array
>>> from random import random

>>> floats = array('d', (random() for i in range(10**7)))
>>> floats[-1]
0.07802343889111107

>>> fp = open('floats.bin', 'wb')
>>> floats.tofile(fp)
>>> fp.close()
>>> floats2 = array('d')
>>> fp = open('floats.bin', 'rb')
>>> floats2.fromfile(fp, 10**7)
>>> fp.close()
>>> floats2[-1]
0.07802343889111107

>>> floats2 == floats
True
```

```python
>>> from array import array

>>> octets = array('B', range(6))
>>> m1 = memoryview(octets)
>>> m1.tolist()
[0, 1, 2, 3, 4, 5]

>>> m2 = m1.cast('B', [2, 3])
>>> m2.tolist()
[[0, 1, 2], [3, 4, 5]]

>>> m3 = m1.cast('B', [3, 2])
>>> m3.tolist()
[[0, 1], [2, 3], [4, 5]]

>>> m2[1,1] = 22
>>> m3[1,1] = 33
>>> octets
array('B', [0, 1, 2, 33, 22, 5])
```

```python
>>> numbers = array.array('h', [-2, -1, 0, 1, 2])
>>> memv = memoryview(numbers)
>>> len(memv)
5

>>> memv[0]
-2

>>> memv_oct = memv.cast('B')
>>> memv_oct.tolist()
[254, 255, 255, 255, 0, 0, 1, 0, 2, 0]

>>> memv_oct[5] = 4
>>> numbers
array('h', [-2, -1, 1024, 1, 2])
```
