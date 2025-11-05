- Python shares some of the dynamic features of the Lisp and Dylan languages, in particular, first-class functions.

--------------------

- In this chapter, we used the Strategy pattern as a starting point: a working solution that we could simplify using first-class functions.

#### Examples
- [[Strategy Pattern classes]]
- [[Strategy Pattern functions]]
- [[Choosing Best Strategy globals]]
- [[Choosing Best Strategy Decorator]]

--------------------

- In many cases, functions or callable objects provide a more natural way of implementing callbacks in Python than mimicking the Strategy or the Command patterns as described by Gamma, Helm, Johnson, and Vlissides in Design Patterns. The refactoring of Strategy and the discussion of Command in this chapter are examples of a more general insight: sometimes you may encounter a design pattern or an API that requires that components implement an interface with a single method, and that method has a generic-sounding name such as “execute,” “run,” or “do_it.” Such patterns or APIs often can be implemented with less boilerplate code in Python using functions as first-class objects.

#### Examples
- [[Command Pattern]]

--------------------