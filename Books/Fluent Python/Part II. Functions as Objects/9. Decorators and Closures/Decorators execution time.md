```python
registry = []

def register(func):
	print(f"running register({func})")
	registry.append(func)
	return func
	
@register
def f1():
	print("running f1()")

@register
def f2():
	print("running f2()")
	
def f3():
	print("running f3()")
	
def main():
	print("running main()")
	print("registry ->", registry)
	f1()
	f2()
	f3()

if __name__ == "__main__":
	main()
```

```bash
$ python3 registration.py
running register(<function f1 at 0x100631bf8>)
running register(<function f2 at 0x100631c80>)
running main()
registry -> [<function f1 at 0x100631bf8>, <function f2 at 0x100631c80>]
running f1()
running f2()
running f3()
```

```python
>>> import registration
running register(<function f1 at 0x10063b1e0>)
running register(<function f2 at 0x10063b268>)

>>> registration.registry
[<function f1 at 0x10063b1e0>, <function f2 at 0x10063b268>]
```
