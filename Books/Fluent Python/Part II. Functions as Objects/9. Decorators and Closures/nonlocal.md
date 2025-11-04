Due to [[Variable Scope Rules]] and [[Variable Lookup Logic]], the Python interpreter decides how variables are scoped.
If a variable is declared before a local scope and then reassigned inside it, the interpreter treats it as a local variable and raises an error indicating that the variable is not bound.
To tell the interpreter that an operation is performed on a variable declared outside the current local scope, we mark this variable with the nonlocal keyword.

```python
def make_averager():
	count = 0
	total = 0
	
	def averager(new_value):
		nonlocal count, total
		count += 1
		total += new_value
		return total / count
		
	return averager
```