Consider two types `A` and `B`, where `B` is consistent-with `A`, and neither of them is `Any`.
Some authors use the `<:` and `:>` symbols to denote type relationships like this:
```
A :> B
```
`A` is supertype-of or the same as `B`.

```
B <: A
```
`B` is subtype-of or the same as `A`.

Given `A :> B`, a generic type `C` is covariant when `C[A] :> C[B]`.

```python
class FrozenSet(frozenset, AbstractSet[T_co]): ...
```

```python
		   float :> int
frozenset[float] :> frozenset[int]
```
