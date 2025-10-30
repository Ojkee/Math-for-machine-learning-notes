The rules for *consistent-with* are:
1. Given `T1` and a subtype `T2`, then `T2` is *consistent with* `T1` (Liskov substitution).
2. Every type is *consistent-with* `Any`: you can pass objects of every type to an argument declared of type `Any`.
3. `Any` is *consistent-with* every type: you can always pass an object of type `Any` there an argument of another type is expected.

```python
def f3(p: Any) -> None:
	...
	
o0 = object()
o1 = T1()
o2 = T2()

f3(o0) #
f3(o1) # all OK: rule #2
f3(o2) #
```
```python
def f4():
	... # implicit return type: `Any`
	
o4 = f4() # inferred type: `Any`

f1(o4) #
f2(o4) # all OK: rule #3
f3(o4) #
```

