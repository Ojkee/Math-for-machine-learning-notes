[[vector2d_v0]] vs [[vector2d_v3]] with [[__slots__]].

```bash
$ time python3 mem_test.py vector2d_v3
Selected Vector2d type: vector2d_v3.Vector2d
Creating 10,000,000 Vector2d instances
Initial RAM usage:  6,983,680
Final RAM usage:    1,666,535,424

real 0m11.990s
user 0m10.861s
sys  0m0.978s
```


```python
class Vector2d:
	__match_args__ = ('x', 'y')
	__slots__ = ('__x', '__y')
	
	typecode = 'd'
	# methods are the same as previous version
```

```bash
$ time python3 mem_test.py vector2d_v3_slots
Selected Vector2d type: vector2d_v3_slots.Vector2d
Creating 10,000,000 Vector2d instances
Initial RAM usage:  6,995,968
Final RAM usage:    577,839,104

real 0m8.381s
user 0m8.006s
sys  0m0.352s
```