## Generic type 
- A Type declared with one or more type variables.

```python
LottoBlower[T]
abc.Mapping[KT, VT]
```

## Formal type parameter
- The type variables that appear in a generic type declaration.

`KT` and `VT` in example above.

## Parameterized type
- A type declared with actual type parameters.

```python
LottoBlower[int]
abc.Mapping[str, float]
```

## Actual type parameter
- The actual types given as parameters when a parameterized type is declared.

`int` in `LottoBlower[int]`
