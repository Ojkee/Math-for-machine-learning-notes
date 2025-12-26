- Iteration is so deeply embedded in the language that I like to say that Python groks iterators. The integration of the Iterator pattern in the semantics of Python is a prime example of how design patterns are not equally applicable in all programming languages. In Python, a classic Iterator implemented “by hand” has no practical use, except as a didactic example.

#### Examples
- [[How Python iterate]]
- [[Lazy Generator Expression]]
 
--------------------

- In this chapter, we built a few versions of a class to iterate over individual words in text files that may be very long. We saw how Python uses the `iter()` built-in to create iterators from sequence-like objects. We build a classic iterator as a class with `__next__()`, and then we used generators to make each successive refactoring of the Sentence class more concise and readable.

#### Examples
- [[Using iter with Callable]]
- [[Iterable Vs Iterator]]
- [[Sentence as Sequence of Words]]
- [[Sentence as Iterator pattern]]
- [[Sentence as Generator Function]]
- [[Sentence as Lazy Generator]]
- [[Sentence as Lazy Generator Expression]]

--------------------

- We then coded a generator of arithmetic progressions and showed how to leverage the `itertools` module to make it simpler. An overview of most general-purpose generator functions in the standard library followed.

#### Examples
- [[Arithmetic Progression Generator]]
- [[Arithmetic Progression with itertools]]
- [[Standard Library filtering functions]]
- [[Standard Library generator functions]]
- [[Standard Library generator functions that merge multiple input iterables]]
- [[Standard Library generator function that expand each input item into multiple output items]]
- [[Standard Library rearranging generator functions]]
- [[Standard Library iterable reducing functions]]

--------------------

- We then studied `yield from` expressions in the context of simple generators with the chain and tree examples.

#### Examples
- [[Generator with yield]]
- [[Subgenerators with yield from]]
- [[Subgenerators with yield from with return]]
- [[Reinventing chain]]
- [[Traversing a Tree]]

--------------------

- The last major section was about classic coroutines, a topic of waning importance after native coroutines were added in Python 3.5. Although difficult to use in practice, classic coroutines are the foundation of native coroutines, and the yield from expression is the direct precursor of `await`.

#### Examples
- [[Classic Coroutine to Compute a Running Average]]
- [[Returning a Value from Coroutine]]

--------------------

- Also covered were type hints for `Iterable`, `Iterator`, and `Generator` types—with the latter providing a concrete and rare example of a contravariant type parameter.

#### Examples
- [[Annotating iterators]]
- [[Generic Type Hints for Classic Coroutines]]

--------------------