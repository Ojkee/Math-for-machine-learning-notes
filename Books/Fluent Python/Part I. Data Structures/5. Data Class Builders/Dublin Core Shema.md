```python
from dataclasses import dataclass, field
from typing import Optional
from enum import Enum, auto
from datetime import date

class ResourceType(Enum):
	BOOK = auto()
	EBOOK = auto()
	VIDEO = auto()
	
@dataclass
class Resource:
	"""Media resource description."""
	identifier: str
	title: str = '<untitled>'
	creators: list[str] = field(default_factory=list)
	date: Optional[date] = None
	type: ResourceType = ResourceType.BOOK
	description: str = ''
	language: str = ''
	subjects: list[str] = field(default_factory=list)
	
	def __repr__(self):
		cls = self.__class__
		cls_name = cls.__name__
		indent = ' ' * 4
		res = [f'{cls_name}(']
		for f in fields(cls):
			value = getattr(self, f.name)
			res.append(f'{indent}{f.name} = {value!r},')
		
		res.append(')')
		return '\n'.join(res)
```