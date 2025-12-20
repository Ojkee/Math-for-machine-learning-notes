- If a formal type parameter defines a type for data that comes out of the object, it can be covariant.

- If a formal type parameter defines a type for data that goes into the object after its initial construction, it can be contravariant.

- If a formal type parameter defines a type for data that comes out of the object and the same parameter defines a type for data that goes into the object, it must be invariant.

- To err on the safe side, make formal type parameters invariant.