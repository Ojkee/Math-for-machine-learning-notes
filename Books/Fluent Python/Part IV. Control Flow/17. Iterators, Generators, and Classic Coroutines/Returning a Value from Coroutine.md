```python
from collections.abc import Generator
from typing import Union, NamedTuple

class Result(NamedTuple):
	count: int # type: ignore
	average: float
	
class Sentinel:
	def __repr__(self):
		return f'<Sentinel>'

STOP = Sentinel()

SendType = Union[float, Sentinel
# or
SendType: TypeAlias = float | Sentinel

def averager2(verbose: bool = False) -> Generator[None, SendType, Result]:
	total = 0.0
	count = 0
	average = 0.0
	while True:
		term = yield
		if verbose:
			print('received:', term)
		if isinstance(term, Sentinel):
			break
		total += term
		count += 1
		average = total / count
	return Result(count, average)
	

>>> coro_avg = averager2()
>>> next(coro_avg)
>>> coro_avg.send(10)
>>> coro_avg.send(30)
>>> coro_avg.send(6.5)
>>> try:
>>> 	coro_avg.send(STOP)
>>> except StopIteration as exc:
>>> 	result = exc.value
>>> result
Result(count=3, average=15.5)
```

```python
>>> def compute():
>>> 	res = yield from averager2(True)
>>> 	print('computed:', res)
>>> 	return res

>>> comp = compute()
>>> for v in [None, 10, 20, 30, STOP]:
>>> try:
>>> 	comp.send(v)
>>> except StopIteration as exc:
>>> 	result = exc.value
received: 10
received: 20
received: 30
received: <Sentinel>
computed: Result(count=3, average=20.0)

>>> result
Result(count=3, average=20.0)
```