- We started the chapter by comparing two concurrent HTTP clients with a sequential one, demonstrating that the concurrent solutions show significant performance gains over the sequential script.

#### Examples
- [[Flags download Sequential]]
- [[Flags download ThreadPool]]

--------------------

- After studying the first example based on `concurrent.futures`, we took a closer look at future objects, either instances of `concurrent.futures.Future` or `asyncio.Future`, emphasizing what these classes have in common. We saw how to create futures by calling `Executor.submit`, and iterate over completed futures with `concurrent.futures.as_completed`.

#### Examples
- [[Flags download ThreadPool Futures]]
- [[Flags download ProcessPool Futures]]

--------------------

- We then discussed the use of multiple processes with the `concurrent.futures.ProcessPoolExecutor` class, to go around the GIL and use multiple CPU cores to simplify the multicore prime checker.

#### Examples
- [[Primality checker Multicore ProcessPool]]

--------------------

- In the following section, we saw how the `concurrent.futures.ThreadPoolExecutor` works with a didactic example, launching tasks that did nothing for a few seconds, except for displaying their status with a timestamp.

#### Examples
- [[Executor map Loiter]]

--------------------

- Next we went back to the flag downloading examples. Enhancing them with a progress bar and proper error handling prompted further exploration of the `future.as_completed` generator function, showing a common pattern: storing futures in a `dict` to link further information to them when submitting, so that we can use that information when the future comes out of the `as_completed iterator`.

#### Examples
- [[Flags download Sequential with Error handling]]
- [[Flags download ThreadPool with Error handling]]

--------------------

