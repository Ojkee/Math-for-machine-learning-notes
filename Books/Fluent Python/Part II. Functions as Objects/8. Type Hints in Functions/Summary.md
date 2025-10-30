- We started with a brief introduction to the concept of gradual typing and then switched to a hands-on approach. It’s hard to see how gradual typing works without a tool that actually reads the type hints, so we developed an annotated function guided by Mypy error reports.

#### Examples
- [[Basic Type Hints]]
- [[A Default Parameter Value]]
- [[Subtype-of]]
- [[Consistent-with]]
- [[The fall of numeric tower]]
- [[Stub Files and the Typeshed Project]]
 
--------------------

- Back to the idea of gradual typing, we explored how it is a hybrid of Python’s traditional duck typing and the nominal typing more familiar to users of Java, C++, and other statically typed languages.

#### Examples
- [[Duck Typing]]

--------------------

- Most of the chapter was devoted to presenting the major groups of types used in annotations. Many of the types we covered are related to familiar Python object types, such as `collections`, `tuples`, and `callables`—extended to support generic notation like `Sequence[float]`. Many of those types are temporary surrogates implemented in the `typing` module before the standard types were changed to support generics in Python 3.9.

#### Examples
- [[Generic Collections]]
- [[Generic Mappings]]
- [[Tuple as records]]
- [[Tuples as records with named fields]]
- [[Tuples as immutable sequences]]
- [[Abstract Base Classes]]
- [[Iterable]]
- [[abc.Iterable vs abc.Sequence]]

--------------------

- Some of the types are special entities. `Any`, `Optional`, `Union`, and `NoReturn` have nothing to do with actual objects in memory, but exist only in the abstract domain of the type system.

#### Examples
- [[The Any Type]]
- [[Optional]]
- [[Union]]

--------------------

- We studied parameterized generics and type variables, which bring more flexibility to type hints without sacrificing type safety.

#### Examples
- [[Parameterized Generics and TypeVar]]

--------------------

- Parameterized generics become even more expressive with the use of `Protocol`. Because it appeared only in Python 3.8, `Protocol` is not widely used yet—but it is hugely important. Protocol enables static duck typing: the essential bridge between Python’s duck-typed core and the nominal typing that allows static type checkers to catch bugs.

#### Examples
- [[Static Protocols]]

--------------------

- While covering some of these types, we experimented with Mypy to see type checking errors and inferred types with the help of Mypy’s magic `reveal_type()` function.

#### Examples
- [[TYPECHECKING and reveal_type()]]

--------------------

- The final section covered how to annotate positional-only and variadic parameters.
#### Examples
- [[Callable]]
- [[Variance in Callable types]]
- [[NoReturn]]
- [[Annotating Positional Only and Variadic Parameters]]

--------------------

- Type hints are a complex and evolving topic. Fortunately, they are an optional feature. Let us keep Python accessible to the widest user base and stop preaching that all Python code should have type hints—as I’ve seen in public sermons by typing evangelists. 

--------------------