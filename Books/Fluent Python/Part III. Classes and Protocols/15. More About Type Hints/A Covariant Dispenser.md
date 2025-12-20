Fix for [[An Invariant Dispenser (Erroring with subtypes)]]

```python
T_co = TypeVar('T_co', covariant=True)

class BeverageDispenser(Generic[T_co]):
	def __init__(self, beverage: T_co) -> None:
		self.beverage = beverage

# ... And so on

# This is fine
juice_dispenser = BeverageDispenser(Juice())
install(juice_dispenser)

# This is also fine
orange_juice_dispenser = BeverageDispenser(OrangeJuice())
install(orange_juice_dispenser)

# This isn't fine (desired)
beverage_dispenser = BeverageDispenser(Beverage())
install(beverage_dispenser)
```