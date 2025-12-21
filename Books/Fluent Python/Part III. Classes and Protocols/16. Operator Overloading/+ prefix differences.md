```python
>>> import decimal

>>> ctx = decimal.getcontext()
>>> ctx.prec = 40
>>> one_third = decimal.Decimal('1') / decimal.Decimal('3')
>>> one_third
Decimal('0.3333333333333333333333333333333333333333')

>>> one_third == +one_third
True

>>> ctx.prec = 28
>>> one_third == +one_third
False

>>> +one_third
Decimal('0.3333333333333333333333333333')
```

```python
>>> ct = Counter('abracadabra')
>>> ct
Counter({'a': 5, 'r': 2, 'b': 2, 'd': 1, 'c': 1})

>>> ct['r'] = -3
>>> ct['d'] = 0
>>> ct
Counter({'a': 5, 'b': 2, 'c': 1, 'd': 0, 'r': -3})

>>> +ct
Counter({'a': 5, 'b': 2, 'c': 1})
```