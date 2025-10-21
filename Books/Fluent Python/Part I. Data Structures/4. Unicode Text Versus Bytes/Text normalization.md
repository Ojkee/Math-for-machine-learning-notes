```python
>>> s1 = 'café'
>>> s2 = 'cafe\N{COMBINING ACUTE ACCENT}'
>>> s1, s2
('café', 'café')

>>> len(s1), len(s2)
(4, 5)

>>> s1 == s2
False
```

```python
>>> from unicodedata import normalize

>>> s1 = 'café'
>>> s2 = 'cafe\N{COMBINING ACUTE ACCENT}'
>>> len(s1), len(s2)
(4, 5)

>>> len(normalize('NFC', s1)), len(normalize('NFC', s2))
(4, 4)

>>> len(normalize('NFD', s1)), len(normalize('NFD', s2))
(5, 5)

>>> normalize('NFC', s1) == normalize('NFC', s2)
True

>>> normalize('NFD', s1) == normalize('NFD', s2)
True
```

```python
>>> from unicodedata import normalize, name

>>> ohm = '\u2126'
>>> name(ohm)
'OHM SIGN'

>>> ohm_c = normalize('NFC', ohm)
>>> name(ohm_c)
'GREEK CAPITAL LETTER OMEGA'

>>> ohm == ohm_c
False

>>> normalize('NFC', ohm) == normalize('NFC', ohm_c)
True
```

```python
>>> from unicodedata import normalize, name
>>> half = '\N{VULGAR FRACTION ONE HALF}'
>>> print(half)
½

>>> normalize('NFKC', half)
'1⁄2'

>>> for char in normalize('NFKC', half):
>>> 	print(char, name(char), sep='\t')
1 DIGIT ONE
⁄ FRACTION SLASH
2 DIGIT TWO

>>> four_squared = '4²'
>>> normalize('NFKC', four_squared)
'42'

>>> micro = 'µ'
>>> micro_kc = normalize('NFKC', micro)
>>> micro, micro_kc
('µ', 'μ')

>>> ord(micro), ord(micro_kc)
(181, 956)

>>> name(micro), name(micro_kc)
('MICRO SIGN', 'GREEK SMALL LETTER MU')
```

```python
>>> micro = 'µ'
>>> name(micro)
'MICRO SIGN'

>>> micro_cf = micro.casefold()
>>> name(micro_cf)
'GREEK SMALL LETTER MU'

>>> micro, micro_cf
('µ', 'μ')

>>> eszett = 'ß'
>>> name(eszett)
'LATIN SMALL LETTER SHARP S'

>>> eszett_cf = eszett.casefold()
>>> eszett, eszett_cf
('ß', 'ss')
```

```python
from unicodedata import normalize

def nfc_equal(str1, str2):
	return normalize('NFC', str1) == normalize('NFC', str2)
	
def fold_equal(str1, str2):
	return (normalize('NFC', str1).casefold() ==
			normalize('NFC', str2).casefold())
```

```python
import unicodedata
import string

def shave_marks(txt):
	"""Remove all diacritic marks"""
	norm_txt = unicodedata.normalize('NFD', txt)
	shaved = ''.join(c for c in norm_txt
					 if not unicodedata.combining(c))
	return unicodedata.normalize('NFC', shaved)

>>> order = '“Herr Voß: • ½ cup of Œtker™ caffè latte • bowl of açaí.”'
>>> shave_marks(order)
'“Herr Voß: • ½ cup of Œtker™ caffe latte • bowl of acai.”'

>>> Greek = 'Ζέφυρος, Zéfiro'
>>> shave_marks(Greek)
'Ζεφυρος, Zefiro'
```

```python
single_map = str.maketrans("""‚ƒ„ˆ‹‘’“”•–—˜›""",
						   """'f"^<''""---~>""")

multi_map = str.maketrans({
	'€': 'EUR',
	'…': '...',
	'Æ': 'AE',
	'æ': 'ae',
	'Œ': 'OE',
	'œ': 'oe',
	'‰': '<per mille>',
	'†': '**',
	'‡': '***',
})

multi_map.update(single_map)
def dewinize(txt):
	"""Replace Win1252 symbols with ASCII chars or sequences"""
	return txt.translate(multi_map)

def asciize(txt):
	no_marks = shave_marks_latin(dewinize(txt))
	no_marks = no_marks.replace('ß', 'ss')
	return unicodedata.normalize('NFKC', no_marks)

>>> order = '“Herr Voß: • ½ cup of Œtker™ caffè latte • bowl of açaí.”'
>>> dewinize(order)
'"Herr Voß: - ½ cup of OEtker(TM) caffè latte - bowl of açaí."'

>>> asciize(order)
'"Herr Voss: - 1⁄2 cup of OEtker(TM) caffe latte - bowl of acai."'
```