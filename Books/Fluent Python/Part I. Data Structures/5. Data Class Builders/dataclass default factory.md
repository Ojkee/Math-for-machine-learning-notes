```python
from dataclasses import dataclass, field

@dataclass
class ClubMember:
	name: str
	guests: list = field(default_factory=list)
	athlete: bool = field(default=False, repr=False)
```

```python
from dataclasses import dataclass
from club import ClubMember

class HackerClubMember(ClubMember):
	all_handles = set()
	handle: str = ''
	
	def __post_init__(self):
		cls = self.__class__
		if self.handle == '':
			self.handle = self.name.split()[0]
		if self.handle in cls.all_handles:
			msg = f'handle {self.handle!r} already exists.'
			raise ValueError(msg)
		cls.all_handles.add(self.handle)
```