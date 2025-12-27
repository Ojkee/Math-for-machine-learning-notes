```python
# This 
try:
	dangerous_call()
	after_call()
except OSError:
	log('OSError...')

# Becomes this
try:
	dangerous_call()
except OSError:
	log('OSError...')
else:
	after_call()
```