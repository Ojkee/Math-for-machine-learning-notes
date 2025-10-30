Given a class `T1` and subclass `T2`, then `T2` is subtype-of `T1`.

```python
class T1:
	...
	
class T2(T1):
	...
	
def f1(p: T1) -> None:
	...

o2 = T2()
f1(o2) # OK
```
```python
def f2(p: T2) -> None:
	...

o1 = T1()
f2(o1) # type error
```



