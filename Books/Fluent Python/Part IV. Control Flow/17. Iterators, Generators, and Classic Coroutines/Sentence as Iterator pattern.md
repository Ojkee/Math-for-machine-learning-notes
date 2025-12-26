```python
import re
import reprlib

RE_WORD = re.compile(r'\w+')

class Sentence:
	def __init__(self, text):
		self.text = text
		self.words = RE_WORD.findall(text)
		
	def __repr__(self):
		return f"Sentence({reprlib.repr(self.text)})"
		
	def __iter__(self):
		return SentenceIterator(self.words)
		

class SentenceIterator:
	def __init__(self, words):
		self.words = words
		self.index = 0
		
	def __next__(self):
		try:
			word = self.words[self.index]
		except IndexError:
			raise StopIteration()
		self.index += 1
		return word
		
	def __iter__(self):
		return self
```

Iterators return self from the `__iter__` method. If we implemented `__iter__` this way in the original **Sentence** class, the object itself would become an iterator, making it impossible to create independent iterators over the same data.

