```python
class DemoPlainClass:
	a: int
	b: float = 1.1
	c = 'spam'
```

- **a** becomes an entry in __annotations__, but is otherwise discarded: no attribute named a is created in the class.
- **b** is saved as an annotation, and also becomes a class attribute with value 1.1.
- **c** is just a plain old class attribute, not an annotation.

```python
>>> from demo_plain import DemoPlainClass
>>> DemoPlainClass.__annotations__
{'a': <class 'int'>, 'b': <class 'float'>}

>>> DemoPlainClass.a
Traceback (most recent call last):
	File "<stdin>", line 1, in <module>
AttributeError: type object 'DemoPlainClass' has no attribute 'a'

>>> DemoPlainClass.b
1.1

>>> DemoPlainClass.c
'spam'
```
