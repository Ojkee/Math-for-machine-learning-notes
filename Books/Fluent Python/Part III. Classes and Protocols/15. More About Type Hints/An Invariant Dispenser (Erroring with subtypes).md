```python
from typing import TypeVar, Generic

class Beverage:
	"""Any beverage"""

class Juice(Beverage):
	"""Any friut Juice"""
	
class OrangeJuice(Juice):
	"""Orange Juice"""
	
T = TypeVar('T')

class BeverageDispenser(Generic[T]):
	def __init__(self, beverage: T) -> None:
		self.beverage = beverage
		
	def dispense(self) -> T:
		return self.beverage
		
def install(dispenser: BeverageDiscpenser[Juice]) -> None:
	"""Instalation of fruit juice dispenser"""


# This is fine
juice_dispenser = BeverageDispenser(Juice())
install(juice_dispenser)

# This isn't fine
beverage_dispenser = BeverageDispenser(Beverage())
install(beverage_dispenser)

# This isn't fine (suprisingly)
orange_juice_dispenser = BeverageDispenser(OrageJuice())
install(orange_juice_dispenser)
```

