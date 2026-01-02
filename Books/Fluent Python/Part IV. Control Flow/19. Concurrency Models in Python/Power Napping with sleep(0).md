If we give very computation heavy code into `asyncio`, other tasks might freeze. To manually wake up other tasks we can use `sleep(0)`

```python
async def is_prime(n):
	if n < 2:
		return False
	if n == 2:
		return True
	if n % 2 == 0:
		return False
		
	root = math.isqrt(n)
	for i in range(3, root + 1, 2):
		if n % i == 0:
			return False
		if i % 100_000 == 1:
			await asyncio.sleep(0)
	return True
```

