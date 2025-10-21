```python
import unicodedata
import re

re_digit = re.compile(r'\d')
sample = '1\xbc\xb2\u0969\u136b\u216b\u2466\u2480\u3285'

for char in sample:
	print(f'U+{ord(char):04x}',
		  char.center(6),
		  're_dig' if re_digit.match(char) else '-',
		  'isdig' if char.isdigit() else '-',
		  'isnum' if char.isnumeric() else '-',
		  f'{unicodedata.numeric(char):5.2f}',
		  unicodedata.name(char),
		  sep='\t')
```

![[Pasted image 20251003185618.png]]

```python
import re

re_numbers_str = re.compile(r'\d+')
re_words_str = re.compile(r'\w+')
re_numbers_bytes = re.compile(rb'\d+')
re_words_bytes = re.compile(rb'\w+')

text_str = ("Ramanujan saw \u0be7\u0bed\u0be8\u0bef"
			" as 1729 = 1³ + 12³ = 9³ + 10³.")
text_bytes = text_str.encode('utf_8')

print(f'Text\n {text_str!r}')
print('Numbers')
print(' str :', re_numbers_str.findall(text_str))
print(' bytes:', re_numbers_bytes.findall(text_bytes))
print('Words')
print(' str :', re_words_str.findall(text_str))
print(' bytes:', re_words_bytes.findall(text_bytes))
```

![[Pasted image 20251003185704.png]]

```python
>>> os.listdir('.')
['abc.txt', 'digits-of-π.txt']

>>> os.listdir(b'.')
[b'abc.txt', b'digits-of-\xcf\x80.txt']
```