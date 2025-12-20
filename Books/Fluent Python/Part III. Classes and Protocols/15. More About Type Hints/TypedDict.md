```json
{
	"isbn": "0134757599",
	"title": "Refactoring, 2e",
	"authors": ["Martin Fowler", "Kent Beck"],
	"pagecount": 478
}
```

```python
from typing import TypedDict

class BookDict(TypedDict):
	isbn: str
	title: str 
	authors: list[str]
	pagecount: int


>>> from books imoprt BookDict
>>> pp = BookDict(
>>> 	title='Programming Pearls',
>>> 	authors='Jon Bently',
>>> 	isbn='0201657880',
>>> 	pagecount=256,
>>> )
>>> pp
{'title': 'Programming Pearls', 'authors': 'Jon Bentley', 'isbn': '0201657880',
'pagecount': 256}

>>> type(pp)
<class 'dict'>

>>> pp.title
Traceback (most recent call last):
	File "<stdin>", line 1, in <module>
AttributeError: 'dict' object has no attribute 'title'

>>> pp['title']
'Programming Pearls'

>>> BookDict.__annotations__
{'isbn': <class 'str'>, 'title': <class 'str'>, 'authors': typing.List[str],
'pagecount': <class 'int'>}
```

**authors** type shows `typing.List[str]`, but `str` was passed in constructor without any warning.
`TypedDict` behaves exactly like classic `dict`.

