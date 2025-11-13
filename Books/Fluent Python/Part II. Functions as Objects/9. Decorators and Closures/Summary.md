- We started with a simple `@register` decorator without an inner function, and finished with a parameterized `@clock()` involving two levels of nested functions.

#### Examples
- [[Decorator 101]]

--------------------

- Registration decorators, though simple in essence, have real applications in Python frameworks. 

--------------------

- Understanding how decorators actually work required covering the difference between import time and runtime, then diving into variable scoping, closures, and the new `nonlocal` declaration. Mastering closures and `nonlocal` is valuable not only to build decorators, but also to code event-oriented programs for GUIs or asynchronous I/O with callbacks, and to adopt a functional style when it makes sense.

#### Examples
- [[Decorators execution time]]
- [[Variable Scope Rules]]
- [[Variable Lookup Logic]]
- [[Closures]]
- [[Free variables]]
- [[nonlocal]]

--------------------

- Parameterized decorators almost always involve at least two nested functions, maybe more if you want to use `@functools.wraps` to produce a decorator that provides better support for more advanced techniques. For more sophisticated decorators, a class-based implementation may be easier to read and maintain.

#### Examples
- [[clock Decorator]]
- [[clock Decorator with keyword arguments (functools.wraps)]]
- [[clock Decorator with parameters]]
- [[clock Decorator Class-Based]]
- [[A Parameterized Registration Decorators]]

--------------------

- As examples of parameterized decorators in the standard library, we visited the powerful `@cache` and `@singledispatch` from the `functools` module.

#### Examples
- [[cache]]
- [[lru_cache]]
- [[Stacked Decorators]]
- [[Single Dispatch Generic Functions]]

