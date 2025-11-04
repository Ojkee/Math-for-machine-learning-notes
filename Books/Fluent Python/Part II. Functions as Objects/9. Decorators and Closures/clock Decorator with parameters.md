```python
import time

DEFAULT_FMT = '[{elapsed:0.8f}s] {name}({args}) -> {result}'

def clock(fmt=DEFAULT_FMT):
	def decorate(func):
		def clocked(*_args):
			t0 = time.perf_counter()
			_result = func(*_args)
			elapsed = time.perf_counter() - t0
			name = func.__name__
			args = ', '.join(repr(arg) for arg in _args)
			result = repr(_result)
			print(fmt.format(**locals()))
			return _result
		return clocked
	return decorate
	
	
if __name__ == '__main__':
	@clock()
	def snooze(seconds):
		time.sleep(seconds
		
	for i in range(3):
		snooze(.123)
```
```bash
$ python3 clockdeco_param.py
[0.12412500s] snooze(0.123) -> None
[0.12411904s] snooze(0.123) -> None
[0.12410498s] snooze(0.123) -> None
```

```python
import time
from clockdeco_param import clock

@clock('{name}: {elapsed}s')
def snooze(seconds):
	time.sleep(seconds)

for i in range(3):
	snooze(.123)
```
```bash
$ python3 clockdeco_param_demo1.py
snooze: 0.12414693832397461s
snooze: 0.1241159439086914s
snooze: 0.12412118911743164
```

```python
import time
from clockdeco_param import clock

@clock('{name}({args}) dt={elapsed:0.3f}s')
def snooze(seconds):
	time.sleep(seconds)
	
for i in range(3):
	snooze(.123)
```
```bash
$ python3 clockdeco_param_demo2.py
snooze(0.123) dt=0.124s
snooze(0.123) dt=0.124s
snooze(0.123) dt=0.124
```
