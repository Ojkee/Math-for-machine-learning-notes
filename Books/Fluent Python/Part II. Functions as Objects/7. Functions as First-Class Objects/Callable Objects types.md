#### User-defined functions
Created with def statements or `lambda` expressions.

#### Built-in functions
A function implemented in C (for CPython), like `len` or `time.strftime`.

#### Built-in methods
Methods implemented in C, like `dict.get`.

#### Methods
Functions defined in the body of a class.

#### Classes
When invoked, a class runs its `__new__` method to create an instance, then `__init__` to initialize it, and finally the instance is returned to the caller. Because there is no new operator in Python, calling a class is like calling a function.

#### Class instances
If a class defines a `__call__` method, then its instances may be invoked as functions—that’s the subject of the next section.

#### Generator functions
Functions or methods that use the `yield` keyword in their body. When called, they return a generator object.

#### Native coroutine functions
Functions or methods defined with `async def`. When called, they return a coroutine object. Added in Python 3.5.

#### Asynchronous generator functions
Functions or methods defined with `async def` that have `yield` in their body. When called, they return an asynchronous generator for use with async for. Added in Python 3.6.
