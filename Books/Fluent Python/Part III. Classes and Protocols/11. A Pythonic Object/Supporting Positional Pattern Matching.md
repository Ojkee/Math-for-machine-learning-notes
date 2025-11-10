```python
class Vector2d:
	__match_args__ = ('x', 'y')
	
	# etc...
	
	
def positional_pattern_demo(v: Vector2d) -> None:
	match v:
		case Vector2d(0, 0):
			print(f'{v!r} is null')
		case Vector2d(0):
			print(f'{v!r} is vertical')
		case Vector2d(_, 0):
			print(f'{v!r} is horizontal')
		case Vector2d(x, y) if x==y:
			print(f'{v!r} is diagonal')
		case _:
			print(f'{v!r} is awesome')
```

