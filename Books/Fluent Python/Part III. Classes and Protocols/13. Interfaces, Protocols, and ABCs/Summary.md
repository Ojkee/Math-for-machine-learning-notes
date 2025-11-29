- The Typing Map is the key to making sense of this chapter. After a brief introduction to the four approaches to typing, we contrasted dynamic and static protocols, which respectively support duck typing and static duck typing. Both kinds of protocols share the essential characteristic that a class is never required to explicitly declare support for any specific protocol. A class supports a protocol simply by implementing the necessary methods.

#### Examples
- [[The Typing Map]]
- [[Dynamic protocol]]
- [[Static protocol]]

--------------------

- The next major section was “Programming Ducks”, where we explored the lengths to which the Python interpreter goes to make the sequence and iterable dynamic protocols work, including partial implementations of both. We then saw how a class can be made to implement a protocol at runtime through the addition of extra methods via monkey patching. The duck typing section ended with hints for defensive programming, including detection of structural types without explicit `isinstance` or `hasattr` checks using `try`/`except` and failing fast.

#### Examples
- [[Monkey Patching. Implementing a Protocol at Runtime]]
- [[Defensive Programming and 'Fail Fast']]
- [[EAFP]]
- [[Exception class hierarchy]]

--------------------

-  After Alex Martelli introduced goose typing in “Waterfowl and ABCs”, we saw how to subclass existing `ABCs`, surveyed important `ABCs` in the standard library, and created an `ABC` from scratch, which we then implemented by traditional subclassing and by registration. To close this section, we saw how the `__subclasshook__` special method enables `ABCs` to support structural typing by recognizing unrelated classes that provide methods fulfilling the interface defined in the `ABC`.

#### Examples
- [[Goose typing]]
- [[Subclassing an ABC]]
- [[ABCs in collections.abc]]
- [[isinstance with Hashable]]
- [[Defining and Using an ABC]]
- [[Structural Typing with ABCs]]
- [[__subclasshook__]]

--------------------

- The last major section was “Static Protocols”, where we resumed coverage of static duck typing. We saw how the `@runtime_checkable` decorator also leverages `__subclasshook__` to support structural typing at runtime-even though the best use of static protocols is with static type checkers, which can take into account type hints to make structural typing more reliable. Next we talked about the design and coding of a static protocol and how to extend it. The chapter ended with “The numbers `ABCs` and Numeric Protocols”, which tells the sad story of the derelict state of the numeric tower and a few existing shortcomings of the proposed alternative: the numeric static protocols such as `SupportsFloat` and others added to the typing module in Python 3.8. 

#### Examples
- [[The Typed double Function]]
- [[Runtime Checkable Static Protocols]]
- [[Limitations of Runtime Protocol Checks]]
- [[Supporting a Static Protocol]]
- [[Designing and Extending Protocol]]
- [[The numbers ABCs and Numeric Protocols]]

--------------------

- The main message of this chapter is that we have four complementary ways of programming with interfaces in modern Python, each with different advantages and drawbacks. You are likely to find suitable use cases for each typing scheme in any modern Python codebase of significant size. Rejecting any one of these approaches will make your work as a Python programmer harder than it needs to be.

--------------------

- Having said that, Python achieved widespread popularity while supporting only duck typing. Other popular languages such as JavaScript, PHP, and Ruby, as well as Lisp, Smalltalk, Erlang, and Clojure—not popular but very influential—are all languages that had and still have tremendous impact by leveraging the power and simplicity of duck typing.

--------------------

