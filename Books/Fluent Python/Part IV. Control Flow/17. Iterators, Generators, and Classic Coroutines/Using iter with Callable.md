```python
def d6():
	return randint(1, 6)
	
	
>>> d6_iter = iter(d6, 1)
>>> d6_iter
<callable_iterator object at 0x10a245270>

>>> for roll in d6_iter:
>>> 	print(roll)
4
3
6
3
```

`1` in the `iter(d6, 1)` is *Sentinel*, meaning, function stops iteration on value `1`.


```python
from functools import partial

with open('mydata.db', 'rb') as f:
	read64 = partial(f.read, 64)
	for block in iter(read64, b''):
		process_block(block)
```

The `partial()` function is necessary because the callable given to `iter()` must not require arguments. In the example, an empty bytes object is the sentinel, because that’s what `f.read` returns when there are no more bytes to read.

