```python
# This 
@decorate
def target():
	print('running target()')

# Is the same as this
target = decorate(target)
```
