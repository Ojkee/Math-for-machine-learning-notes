```python
def download_many(cc_list: list[str]) -> int:
	with futures.ThreadPoolExecutor(max_workers=3) as executor:
		to_do: list[futures.Future] = []
		for cc in sorted(cc_list):
			future = executor.submit(download_one, cc)
			to_do.append(future)
			print(f'Schefuled for {coo}: {future}')
			
		for count, future in enumerate(futures.as_completed(to_do), 1):
			res: str = future.result()
			print(f'{future} result: {res!r}')
		
		return count
```