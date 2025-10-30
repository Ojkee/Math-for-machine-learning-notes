```python
class Bird:
	pass
	

class Duck(Bird):
	def quack(self):
		print('Quack!')


def alert(birdie):
	birdie.quack()
	
def alert_duck(birdie: Duck) -> None:
	birdie.quack()
	
def alert_bird(birdie: Bird) -> None:
	birdie.quack()


daffy = Duck()
alert(daffy)
alert_duck(daffy)
alert_bird(daffy)
```

```bash
Quack!
Quack!
Quack!
```

```python
woody = Bird()
alert(woody)
alert_duck(woody)
alert_bird(woody)
```

```bash
Traceback (most recent call last):
	...
AttributeError: 'Bird' object has no attribute 'quack'
```
