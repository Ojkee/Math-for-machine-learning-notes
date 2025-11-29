It’s easy to misinterpret the results of the `isinstance` and `issubclass` tests against the `Hashable` and `Iterable ABCs`.

If `isinstance(obj, Hashable)` returns `True`, that only means that the class of *obj* implements or inherits `__hash__`. But if *obj* is a tuple containing unhashable items, then *obj* is not hashable, despite the positive result of the `isinstance` check. Tech reviewer Jürgen Gmach pointed out that duck typing provides the most accurate way to determine if an instance is hashable: call `hash(obj)`. That call will raise `TypeError` if *obj* is not hashable.
