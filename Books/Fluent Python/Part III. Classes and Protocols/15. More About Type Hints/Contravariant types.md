Given `A :> B`, a generic type `K` is contravariant if `K[A] <: K[B]`.

Contravariant generic types reverse the subtype relationship of the actual type
parameters.

The [[A Contravariant Trash Can|TrashCan]] class exemplifies this:
```python
		  Refuse :> Biodegradable
TrashCan[Refuse] <: TrashCan[Biodegradable]
```
