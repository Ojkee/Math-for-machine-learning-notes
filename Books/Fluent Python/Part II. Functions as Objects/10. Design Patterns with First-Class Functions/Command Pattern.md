![[Pasted image 20251105225927.png]]

Instead of giving the invoker a Command instance, we can simply give it a function. Instead of calling `command.execute()`, the invoker can just call `command()`. The Macro Command can be implemented with a class implementing __call__. Instances of *MacroCommand* would be callables, each holding a list of functions for future invocation.

```python
class MacroCommand:
	"""A command that executes a list of commands"""
	def __init__(self, commands):
		self.commands = list(commands)
		
	def __call__(self):
		for command in self.commands:
			command()
```
