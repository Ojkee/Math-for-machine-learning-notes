```python
def f1(a):
	print(a)
	print(b)
	
>>> f1(3)
Traceback (most recent call last):
	File "<stdin>", line 1, in <module>
	File "<stdin>", line 3, in f1
NameError: global name 'b' is not defined

>>> b = 6
>>> f1(3)
3
6
```

```python
>>> b = 6
>>> def f2(a):
>>> 	print(a)
>>> 	print(b)
>>> 	b = 9

>>> f2()
3
Traceback (most recent call last):
	File "<stdin>", line 1, in <module>
	File "<stdin>", line 3, in f2
UnboundLocalError: local variable 'b' referenced before assignment
```

```python
>>> b = 6
>>> def f3(a):
>>> 	global b
>>> 	print(a)
>>> 	print(b)
>>> 	b = 9

>>> f3(3)
3
6
>>> b
9
```
