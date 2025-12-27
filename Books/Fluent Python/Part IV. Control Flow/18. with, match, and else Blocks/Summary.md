- This chapter started with context managers and the meaning of the with statement, quickly moving beyond its common use to automatically close opened files. We implemented a custom context manager: the **LookingGlass** class with the `__enter__`/`__exit__` methods, and saw how to handle exceptions in the `__exit__` method. A key point that Raymond Hettinger made in his PyCon US 2013 keynote is that with is not just for resource management; it’s a tool for factoring out common setup and teardown code, or any pair of operations that need to be done before and after another procedure.

#### Examples
- [[LookingGlass context manager class]]

--------------------

- We reviewed functions in the `contextlib` standard library module. One of them, the `@contextmanager` decorator, makes it possible to implement a context manager using a simple generator with one `yield`—a leaner solution than coding a class with at least two methods. We reimplemented the **LookingGlass** as a **looking_glass** generator function, and discussed how to do exception handling when using `@contextmanager`.

#### Examples
- [[LookingGlass context manager as generator]]
- [[Generators decorated with @contextmanager became decorators]]

--------------------

- Then we studied Peter Norvig’s elegant `lis.py`, a Scheme interpreter written in idiomatic Python, refactored to use `match`/`case` in evaluate—the function at the core of any interpreter. Understanding how evaluate works required reviewing a little bit of Scheme, a parser for S-expressions, a simple REPL, and the construction of nested scopes through an Environment subclass of `collection.ChainMap`. In the end, `lis.py` became a vehicle to explore much more than pattern matching. It shows how the different parts of an interpreter work together, illuminating core features of Python itself: why reserved keywords are necessary, how scoping rules work, and how closures are built and used.

#### Examples
- [[Scheme using pattern matching]]
- [[Why Languages Have Reserved Keywords]]
- [[Procedure. A Class Implementing a Closure]]

--------------------

- Else block after `for`, `try/catch` or `while` executes after finishing their execution without breaking with `break`, `continue` or `return`.

#### Examples
- [[Else after for]]
- [[Else after try catch]]

--------------------
