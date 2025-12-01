- This chapter started with a review of the `super()` function in the context of single inheritance. We then discussed the problem with subclassing built-in types: their native methods implemented in C do not call overridden methods in subclass, except in very few special cases. That’s why, when we need a custom `list`, `dict`, or `str` type, it’s easier to subclass `UserList`, `UserDict`, or `UserString`—all defined in the `collections` module, which actually wrap the corresponding built-in types and delegate operations to them—three examples of favoring composition over inheritance in the standard library. If the desired behavior is very different from what the built-ins offer, it may be easier to subclass the appropriate `ABC` from `collections.abc` and write your own implementation. 

#### Examples
- [[Basic super() example]]
- [[Inheritance from UserDict]] 

--------------------

- The rest of the chapter was devoted to the double-edged sword of multiple inheritance. First we saw how the method resolution order, encoded in the `__mro__` class attribute, addresses the problem of potential naming conflicts in inherited methods. We also saw how the `super()` built-in behaves, sometimes unexpectedly, in hierarchies with multiple inheritance. The behavior of `super()` is designed to support mixin classes, which we then studied through the simple example of the *UpperCaseMixin* for case-insensitive mappings.

#### Examples
- [[Multiples Inheritance and Method Resolution Order]]
- [[Mixin Classes]]

--------------------

- We saw how multiple inheritance and mixin methods are used in Python’s `ABCs`, as well as in the `socketserver` threading and forking mixins. More complex uses of multiple inheritance were exemplified by Django’s class-based views and the Tkinter GUI toolkit. Although Tkinter is not an example of modern best practices, it is an example of overly complex class hierarchies we may find in legacy systems.

#### Examples
- [[ThreadingMixIn]]

--------------------

- To close the chapter, I presented seven recommendations to cope with inheritance, and applied some of that advice in a commentary of the Tkinter class hierarchy.

#### Examples
- [[Multiple Inheritance in Tkinter]]

--------------------

- So perhaps the best advice about inheritance is: avoid it if you can. But often, we don’t have a choice: the frameworks we use impose their own design choices.

#### Examples 
- [[Coping with Inheritance]]

--------------------
