```python
from collections.abc import Generator

def averager() -> Generator[float, float, None]:
	total = 0.0
	count = 0
	average = 0.0
	while True:
		term = yield average
		total += term
		count += 1
		average = total/coun


>>> coro_avg = averager()
>>> next(coro_avg)
0.0

>>> coro_avg.send(10)
10.0

>>> coro_avg.send(30)
20.0

>>> coro_avg.send(5)
15.

>>> coro_avg.send(20)
16.25

>>> coro_avg.close()
>>> coro_avg.close()
>>> coro_avg.send(5)
Traceback (most recent call last):
	...
StopIteration
```
