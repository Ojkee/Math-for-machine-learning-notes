- The aim of this chapter was to demonstrate the use of special methods and conventions in the construction of a well-behaved Pythonic class.

#### Examples
- [[Supporting Positional Pattern Matching]]

--------------------

- Is **vector2d_v3.py** more Pythonic than **vector2d_v0.py**? The **Vector2d** class in **vector2d_v3.py** certainly exhibits more Python features. But whether the first or the last **Vector2d** implementation is suitable depends on the context where it would be used. Tim Peter’s “Zen of Python” says:
```
Simple is better than complex.
```

#### Examples
- [[vector2d_v0]]
- [[vector2d_v3]]

--------------------

-  An object should be as simple as the requirements dictate—and not a parade of language features. If the code is for an application, then it should focus on what is needed to support the end users, not more. If the code is for a library for other programmers to use, then it’s reasonable to implement special methods supporting behaviors that Pythonistas expect. For example, `__eq__` may not be necessary to support a business requirement, but it makes the class easier to test.

--------------------

- My goal in expanding the **Vector2d** code was to provide context for discussing Python special methods and coding conventions. 
	- `String`/`bytes` representation methods: `__repr__`, `__str__`, `__format__`, and `__bytes__`
	- Methods for reducing an object to a number: `__abs__`, `__bool__`, and `__hash__`
	- The `__eq__` operator, to support testing and hashing (along with `__hash__`)

--------------------

- While supporting conversion to `bytes`, we also implemented an alternative constructor, **Vector2d.frombytes()**, which provided the context for discussing the decorators `@classmethod` (very handy) and `@staticmethod` (not so useful, module-level functions are simpler). The **frombytes** method was inspired by its namesake in the `array.array` class.

#### Examples
- [[An Alternative Constructor]]
- [[classmethod Versus staticmethod]]

--------------------

- We saw that the Format Specification Mini-Language is extensible by implementing `__format__` method that parses a **format_spec** provided to the `format(obj, format_spec)` built-in or within replacement fields `'{:«format_spec»}'` in f-strings or strings used with the `str.format()` method.

#### Examples
- [[Books/Fluent Python/Part III. Classes and Protocols/11. A Pythonic Object/Formatting]]
- [[__format__]]

--------------------

- In preparation to make **Vector2d** instances hashable, we made an effort to make them immutable, at least preventing accidental changes by coding the **x** and **y** attributes as private, and exposing them as read-only properties. We then implemented `__hash__` using the recommended technique of xor-ing the hashes of the instance attributes.

#### Examples
- [[__hash__]]

--------------------

- We then discussed the memory savings and the caveats of declaring a `__slots__` attribute in **Vector2d**. Because using `__slots__` has side effects, it really makes sense only when handling a very large number of instances—think millions of instances, not just thousands. In many such cases, using `pandas` may be the best option.

#### Examples
- [[__slots__]]
- [[__slots__ Memory Savings]]

--------------------

- The last topic we covered was the overriding of a class attribute accessed via the instances (e.g., self.typecode). We did that first by creating an instance attribute, and then by subclassing and overwriting at the class level.

#### Examples
- [[Overriding Class Attributes]]

--------------------

- Throughout the chapter, I mentioned how design choices in the examples were informed by studying the API of standard Python objects. If this chapter can be summarized in one sentence, this is it:
```
To build Pythonic objects, observe how real Python objects behave.
```

--------------------