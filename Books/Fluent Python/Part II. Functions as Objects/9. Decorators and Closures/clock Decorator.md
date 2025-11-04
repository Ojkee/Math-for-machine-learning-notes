```python
import time

def clock(func):
	def clocked(*args):
		t0 = time.perf_counter()
		result = func(*args)
		elapsed = time.perf_counter() - t0
		name = func.__name__
		arg_str = ', '.join(repr(arg) for arg in args)
		print(f'[{elapsed:0.8f}s {name}({arg_str}) -> {result!r}')
		return result 
	return clocked


@clock
def snooze(seconds):
	time.sleep(seconds)
	
@clock
def factorial(n):
	return 1 if n < 2 else n * factorial(n - 1)

if __name__ == "__main__":
	print('*' * 40, 'Calling snooze(.123)')
	snooze(.123)
	print('*' * 40, 'Calling factorial(6)')
	print('6! =', factorial(6)
```
```bash
$ python3 clockdeco_demo.py
**************************************** Calling snooze(.123)
[0.12363791s] snooze(0.123) -> None
**************************************** Calling factorial(6)
[0.00000095s] factorial(1) -> 1
[0.00002408s] factorial(2) -> 2
[0.00003934s] factorial(3) -> 6
[0.00005221s] factorial(4) -> 24
[0.00006390s] factorial(5) -> 120
[0.00008297s] factorial(6) -> 720
6! = 72
```

```python
>>> factorial.__name__
'clocked'
```

