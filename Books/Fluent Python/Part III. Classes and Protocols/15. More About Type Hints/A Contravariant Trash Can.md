```python
from typing import TypeVar, Generic

class Refuse: ...
class Biodegradable(Refuse): ...
class Composable(Biodegradable): ...

T_contra = TypeVar('T_contra', contravariant=True)

class TrashCan(Beneric[T_contra]):
	def put(self, refuse: T_contra) -> None:
		"""Store trash until fumpled."""
		
def deploy(trash_can: TrashCan[Biodegradable]):
	"""Deploy a trash can for biodegradable refuse."""


# This is fine 
bio_can: TrashCan[Biodegradable] = TrashCan()
deploy(bio_can)

# This also is fine
trash_can: TrashCan[Refuse] = TrashCan()
deploy(trash_can)

# This isn't fine
compost_can: TrashCan[Compostable] = TrashCan()
deploy(compost_can)
```