```python
class Bus:
	def __init__(self, passengers=None):
		if passengers is None:
			self.passengers = []
		else:
			self.passengers = list(passengers)
			
	def pick(self, name):
		self.passengers.append(name)
	
	drop(self, name):
		self.passengers.remove(name)
```
```python
>>> import copy

>>> bus1 = Bus(['Alice', 'Bill', 'Claire', 'David'])
>>> bus2 = copy.copy(bus1)
>>> bus3 = copy.deepcopy(bus1)
>>> id(bus1), id(bus2), id(bus3)
(4301498296, 4301499416, 4301499752)

>>> bus1.drop('Bill')
>>> bus2.passengers
['Alice', 'Claire', 'David']

>>> id(bus1.passengers), id(bus2.passengers), id(bus3.passengers)
(4302658568, 4302658568, 4302657800)

>>> bus3.passengers
['Alice', 'Bill', 'Claire', 'David']
```

```python
class HauntedBus:
	"""A bus model haunted by ghost passengers"""
	def __init__(self, passengers=[]):
		self.passengers = passengers
	
	def pick(self, name):
		self.passengers.append(name)
		
	def drop(self, name):
		self.passengers.remove(name)
```
```python
>>> bus1 = HauntedBus(['Alice', 'Bill'])
>>> bus1.passengers
['Alice', 'Bill']

>>> bus1.pick('Charlie')
>>> bus1.drop('Alice')
>>> bus1.passengers
['Bill', 'Charlie']

>>> bus2 = HauntedBus()
>>> bus2.pick('Carrie')
>>> bus2.passengers
['Carrie']

>>> bus3 = HauntedBus()
>>> bus3.passengers
['Carrie']

>>> bus3.pick('Dave')
>>> bus2.passengers
['Carrie', 'Dave']

>>> bus2.passengers is bus3.passengers
True

>>> bus1.passengers
['Bill', 'Charlie']

>>> dir(HauntedBus.__init__) # doctest: +ELLIPSIS
['__annotations__', '__call__', ..., '__defaults__', ...]

>>> HauntedBus.__init__.__defaults__
(['Carrie', 'Dave'],)
```

```python
class TwilightBus:
	"""A bus model that makes passengers vanish"""
	def __init__(self, passengers=None):
		if passengers is None:
			self.passengers = []
		else:
			self.passengers = passengers
			
	def pick(self, name):
		self.passengers.append(name)
		
	def drop(self, name):
		self.passengers.remove(name)
```
```python
>>> basketball_team = ['Sue', 'Tina', 'Maya', 'Diana', 'Pat']
>>> bus = TwilightBus(basketball_team)
>>> bus.drop('Tina')
>>> bus.drop('Pat')
>>> basketball_team
['Sue', 'Maya', 'Diana']
```

