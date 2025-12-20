- The chapter started with a simple example of using `@overload`, followed by a much more complex example that we studied in detail: the overloaded signatures required to correctly annotate the `max` built-in function.

#### Examples
- [[sum built-in in typeshed]]
- [[sum with overloaded signatures]]
- [[rewrite of max function with overloads]]

--------------------

- The `typing.TypedDict` special construct came next. `TypedDict` is not a class builder; it’s merely a way to add type hints to a variable or argument that requires a `dict` with a specific set of string keys, and specific types for each key—which happens when we use a `dict` as a record, often in the context of handling with JSON data. That section was a bit long because using `TypedDict` can give a false sense of security, and I wanted to show how runtime checks and error handling are really inevitable when trying to make statically structured records out of mappings that are dynamic in nature.

#### Example
- [[TypedDict]]
- [[TypedDict type unsafety]]

--------------------

- Next we talked about `typing.cast`, a function designed to let us guide the work of the type checker. It’s important to carefully consider when to use cast, because overusing it hinders the type checker.

#### Examples
- [[typing.cast]]

--------------------

- Runtime access to type hints came next. The key point was to use `typing.get_type_hints` instead of reading the `__annotations__` attribute directly. However, that function may be unreliable with some annotations, and we saw that Python core developers are still working on a way to make type hints usable at runtime, while reducing their impact on CPU and memory usage.

#### Examples
- [[__annotations__]]
- [[Problems with Annotations at Runtime]]
- [[Forward reference problem]]
- [[Introspection helpers]]

--------------------

- The final sections were about generics, starting with the **LottoBlower** generic class— which we later learned is an invariant generic class. That example was followed by definitions of four basic terms: generic type, formal type parameter, parameterized type, and actual type parameter.

#### Examples
- [[Basic Generic class]]
- [[Basic Jargon for Generic Types]]

--------------------

- The major topic of variance was presented next, using cafeteria beverage dispensers and trash cans as “real life” examples of *invariant*, *covariant*, and *contravariant* generic types. Next we reviewed, formalized, and further applied those concepts to examples in Python’s standard library.

#### Examples
- [[An Invariant Dispenser (Erroring with subtypes)]]
- [[A Covariant Dispenser]]
- [[A Contravariant Trash Can]]
- [[Invariant types]]
- [[Covariant types]]
- [[Contravariant types]]
- [[Variance rules of thumb]]

--------------------

- Lastly, we saw how a generic static protocol is defined, first considering the `typing.SupportsAbs` protocol, and then applying the same idea to the **RandomPicker** example, making it more strict.

#### Examples
- [[SupportsAbs Generic Static Protocol]]
- [[Own Generic Static Protocol]]

--------------------

