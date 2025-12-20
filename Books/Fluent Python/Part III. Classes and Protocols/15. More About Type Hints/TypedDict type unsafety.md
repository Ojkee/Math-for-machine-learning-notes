```xml
<BOOK>
	<ISBN>0134757599</ISBN>
	<TITLE>Refactoring, 2e</TITLE>
	<AUTHOR>Martin Fowler</AUTHOR>
	<AUTHOR>Kent Beck</AUTHOR>
	<PAGECOUNT>478</PAGECOUNT>
</BOOK>
```

```python
def to_xml(book: BookDict) -> str:
	elements: list[str] = []
	for key, value in book.items():
		if isinstance(value, list):
			elements.extend(AUTHOR_ELEMENT.format(n) for n in value)
	else:
		tag = key.upper()
		elements.append(f'<{tag}>{value}</{tag}>')
	xml = '\n\t'.join(elements)
	return f'<BOOK>\n\t{xml}\n</BOOK>'
```

```python
def from_json(data: str) -> BookDict:
	whatever: BookDict = json.loads(data)
	return whatever
```

```python
from books import to_xml, from_json
from typing import TYPE_CHECKING

def demo() -> None:
	NOT_BOOK_JSON = """
		{"title": "Andromeda Strain",
		"flavor": "pistachio",
		"authors": true}
	"""
	not_book = from_json(NOT_BOOK_JSON)
	if TYPE_CHECKING:
		reveal_type(not_book)
		reveal_type(not_book['authors'])
		
	print(not_book)
	print(not_book['flavor'])
	
	xml = to_xml(not_book)
	print(xml)

if __name__ == '__main__':
	demo()
```

```bash
demo_not_book.py:12: note: Revealed type is
'TypedDict('books.BookDict', {'isbn': built-ins.str,
    						  'title': built-ins.str,
	  						  'authors': built-ins.list[built-ins.str],
	  						  'pagecount': built-ins.int})'
demo_not_book.py:13: note: Revealed type is 'built-ins.list[built-ins.str]'
demo_not_book.py:16: error: TypedDict "BookDict" has no key 'flavor'
Found 1 error in 1 file (checked 1 source file)

{'title': 'Andromeda Strain', 'flavor': 'pistachio', 'authors': True}
pistachio
<BOOK>
	<TITLE>Andromeda Strain</TITLE>
	<FLAVOR>pistachio</FLAVOR>
	<AUTHORS>True</AUTHORS>
</BOOK>
```
