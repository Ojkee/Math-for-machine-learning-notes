- Python sequences are often categorized as mutable or immutable, but it is also useful to consider a different axis: flat sequences and container sequences. The former are more compact, faster, and easier to use, but are limited to storing atomic data such as numbers, characters, and bytes. Container sequences are more flexible, but may surprise you when they hold mutable objects, so you need to be careful to use them correctly with nested data structures.

![[Pasted image 20250910184755.png]]

--------------------

- Unfortunately, Python has no foolproof immutable container sequence type: even “immutable” tuples can have their values changed when they contain mutable items like lists or user-defined objects.

![[Pasted image 20250910190938.png]]

#### Examples
- [[Tuples contents mutability]]

--------------------

- List comprehensions and generator expressions are powerful notations to build and initialize sequences. 

#### Examples
- [[List comprehensions]]
- [[Generator expressions]]

--------------------

- Tuples in Python play two roles: as records with unnamed fields and as immutable lists. When using a tuple as an immutable list, remember that a tuple value is only guaranteed to be fixed if all the items in it are also immutable. Calling `hash(t)` on a tuple is a quick way to assert that its value is fixed. A `TypeError` will be raised if `t` contains mutable items.

#### Examples
- [[Tuples as unnamed records]]
- [[Hashing tuples]]

--------------------

- When a tuple is used as a record, tuple unpacking is the safest, most readable way of extracting the fields of the tuple. Beyond tuples, `*` works with lists and iterables in many contexts, and some of its use cases appeared in Python 3.5 with PEP 448— Additional Unpacking Generalizations. Python 3.10 introduced pattern matching with `match/case`, supporting more powerful unpacking, known as destructuring.

#### Examples
- [[Tuple and list unpacking]]
- [[Unpacking in pattern matching]]

--------------------

- Multidimensional slicing and ellipsis (`...`) notation, as used in `NumPy`, may also be supported by user-defined sequences. Assigning to slices is a very expressive way of editing mutable sequences.

#### Examples
- [[Slicing]]

--------------------

- Repeated concatenation as in seq `* n` is convenient and, with care, can be used to initialize lists of lists containing immutable items. Augmented assignment with `+=` and `*=` behaves differently for mutable and immutable sequences. In the latter case, these operators necessarily build new sequences. But if the target sequence is mutable, it is usually changed in place—but not always, depending on how the sequence is implemented.

#### Examples
- [[Repeated concatenation]]

--------------------

- The `sort` method and the sorted built-in function are easy to use and flexible, thanks to the optional `key` argument: a function to calculate the ordering criterion. By the way, `key` can also be used with the `min` and `max` built-in functions.

#### Examples
- [[Sorting]]

--------------------

- Beyond lists and tuples, the Python standard library provides `array.array`. Although `NumPy` and `SciPy` are not part of the standard library, if you do any kind of numerical processing on large sets of data, studying even a small part of these libraries can take you a long way.

#### Examples
- [[Array]]
- [[Numpy array]]
- [[Deque]]

--------------------