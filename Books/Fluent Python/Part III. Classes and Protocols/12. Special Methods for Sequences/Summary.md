- The **Vector** example in this chapter was designed to be compatible with **Vector2d**, except for the use of a different constructor signature accepting a single iterable argument, just like the built-in sequence types do. The fact that **Vector** behaves as a sequence just by implementing `__getitem__` and `__len__` prompted a discussion of protocols, the informal interfaces used in duck-typed languages.

#### Examples
- [[Vector]]

--------------------

- We then looked at how the `my_seq[a:b:c]` syntax works behind the scenes, by creating a `slice(a, b, c)` object and handing it to `__getitem__`. Armed with this knowledge, we made **Vector** respond correctly to slicing, by returning new **Vector** instances, just like a Pythonic sequence is expected to do. 

#### Examples
- [[How Slicing Works]]
- [[A Slice-Aware __getitem__]]

--------------------

- The next step was to provide read-only access to the first few **Vector** components using notation such as `my_vec.x`. We did it by implementing `__getattr__`. Doing that opened the possibility of tempting the user to assign to those special components by writing `my_vec.x = 7`, revealing a potential bug. We fixed it by implementing `__setattr__` as well, to forbid assigning values to single-letter attributes. Very often, when you code a `__getattr__` you need to add `__setattr__` too, in order to avoid inconsistent behavior.

#### Examples
- [[Dynamic Attribute Access]]

--------------------

- Implementing the __hash__ function provided the perfect context for using `functools.reduce`, because we needed to apply the xor operator `^` in succession to the hashes of all **Vector** components to produce an aggregate hash code for the whole **Vector**. After applying reduce in `__hash__`, we used the all reducing built-in to create a more efficient `__eq__` method.

#### Examples
- [[Hashing and faster `==`]]

--------------------

- The last enhancement to **Vector** was to reimplement the `__format__` method from **Vector2d** by supporting spherical coordinates as an alternative to the default Cartesian coordinates. We used quite a bit of math and several generators to code `__format__` and its auxiliary functions, but these are implementation details. The goal of that last section was to support a custom format, thus fulfilling the promise of a **Vector** that could do everything a **Vector2d** did, and more.

#### Examples
- [[Books/Fluent Python/Part III. Classes and Protocols/12. Special Methods for Sequences/Formatting|Formatting]]

--------------------

- Here we often looked at how standard Python objects behave, to emulate them and provide a “Pythonic” look-and-feel to **Vector**.

--------------------

- We will implement several infix operators on **Vector**. The math will be much simpler than in the `angle()` method here, but exploring how infix operators work in Python is a great lesson in OO design. But before we get to operator overloading, we’ll step back from working on one class and look at organizing multiple classes with interfaces and inheritance.

--------------------