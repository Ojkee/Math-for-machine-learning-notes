To make sense of stacked decorators, recall that the `@` is syntax sugar for applying the decorator function to the function below it.
If there’s more than one decorator, they behave like nested function calls. This:
```python
@alpha
@beta
def my_fn():
	...
```
is the same as this:
```python
my_fn = alpha(beta(my_fn))
```
In other words, the beta decorator is applied first, and the function it returns is then passed to *alpha*.
