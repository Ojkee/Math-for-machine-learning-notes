```python
import coleections

Card = collections.namedtuple('Card', ['rank', 'suit'])

class FrenchDeck:
	ranks = [str(n) for n in range(2, 11)] + list('JQKA')
	suits = 'spades diamonds clubs hearts'.split()
	
	def __init__(self):
		self._cards = [Card(rank, suit) for suit in self.suits
										for rank in self.ranks]
										
	def __len__(self):
		return len(self.cards)
		
	def __getitem__(self, position):
		return self._cards[position]
```

```python
>>> beer_card = Card('7', 'diamonds')
>>> beer_card
Card(rank='7', suit='diamonds')

>>> deck = FrenchDeck()
>>> len(deck)
52

>>> deck[0]
Card(rank='2', suit='spades')

>>> deck[-1]
Card(rank='A', suit='hearts')

>>> from random import choice

>>> choice(deck)
>>> Card(rank='3', suit='hearts')

>>> deck[:3]
[Card(rank='2', suit='spades'), Card(rank='3', suit='spades'),
Card(rank='4', suit='spades')

>>> deck[12::13]
[Card(rank='A', suit='spades'), Card(rank='A', suit='diamonds'),
Card(rank='A', suit='clubs'), Card(rank='A', suit='hearts')

>>> for card in reversed(deck): # doctest: +ELLIPSIS
>>> 	print(card)
...
Card(rank='A', suit='hearts')
Card(rank='K', suit='hearts')
Card(rank='Q', suit='hearts'
...

>>> Card('Q', 'hearts') in deck
True

>>> Card('7', 'beasts') in deck
False 
```