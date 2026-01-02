```python
from time import sleep, strftime
from concurrent import futures

def display(*args):
	print(strftime('[%H:%M:%S]'), end=' ')
	print(*args)

def loiter(n):
	msg = '{}loiter({}): doing nothing for {}s...'
	display(msg.format('\t'*n, n, n))
	sleep(n)
	msg = '{}loiter({}) done.'
	display(msg.format('\t'*n, n))
	return n * 10
	
def main():
	display('Script starting.')
	executor = futures.ThreadPoolExecutor(max_workers=3)
	results = executor.map(loiter, range(5))
	display('results: ', results)
	for i, result in enumerate(results):
		display(f'result {i}, {result}')
		
if __name__ == '__main__':
	main()
```

```bash
$ python3 demo_executor_map.py
[15:56:50] Script starting.
[15:56:50] loiter(0): doing nothing for 0s...
[15:56:50] loiter(0): done.
[15:56:50]     loiter(1): doing nothing for 1s...
[15:56:50]         loiter(2): doing nothing for 2s...
[15:56:50] results: <generator object result_iterator at 0x106517168>
[15:56:50]             loiter(3): doing nothing for 3s...
[15:56:50] Waiting for individual results:
[15:56:50] result 0: 0
[15:56:51]     loiter(1): done.
[15:56:51]                 loiter(4): doing nothing for 4s...
[15:56:51] result 1: 10
[15:56:52]         loiter(2): done.
[15:56:52] result 2: 20
[15:56:53]             loiter(3): done.
[15:56:53] result 3: 30
[15:56:55]                 loiter(4): done.
[15:56:55] result 4: 40
```