```python
>>> fruits = ['caju', 'atemoia', 'cajá', 'açaí', 'acerola']
>>> sorted(fruits)
['acerola', 'atemoia', 'açaí', 'caju', 'cajá']
```

```python
>>> import locale

>>> my_locale = locale.setlocale(locale.LC_COLLATE, 'pt_BR.UTF-8')
>>> print(my_locale)
'pt_BR.UTF-8'

>>> fruits = ['caju', 'atemoia', 'cajá', 'açaí', 'acerola']
>>> sorted_fruits = sorted(fruits, key=locale.strxfrm)
>>> print(sorted_fruits)
['açaí', 'acerola', 'atemoia', 'cajá', 'caju']
```

```python
>>> import pyuca

>>> coll = pyuca.Collator()
>>> fruits = ['caju', 'atemoia', 'cajá', 'açaí', 'acerola']
>>> sorted_fruits = sorted(fruits, key=coll.sort_key)
>>> sorted_fruits
['açaí', 'acerola', 'atemoia', 'cajá', 'caju']
```