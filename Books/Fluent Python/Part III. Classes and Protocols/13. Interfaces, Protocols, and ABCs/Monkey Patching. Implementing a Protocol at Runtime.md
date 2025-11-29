Using French deck implemented [[Implementing Sequence|here]], with `shuffle` method results in error.
```python
>>> from random import shuffle
>>> from frenchdeck import FrenchDeck
>>> deck = FrenchDeck()
>>> shuffle(deck)
Traceback (most recent call last):
	File "<stdin>", line 1, in <module>
	File ".../random.py", line 265, in shuffle
		x[i], x[j] = x[j], x[i]
TypeError: 'FrenchDeck' object does not support item assignment
```

We need to implement special `__setitem__` method which is mentioned in error.

```python
>>> def set_card(deck, position, card):
>>> 	deck._cards[position] = card

>>> FrenchDeck.__setitem__ = set_card
>>> shuffle(deck)
>>> deck[:5]
[Card(rank='3', suit='hearts'), Card(rank='4', suit='diamonds'), Card(rank='4',
suit='clubs'), Card(rank='7', suit='hearts'), Card(rank='9', suit='spades')]
```