```python
>>> l = [10, 20, 30, 40, 50, 60]
>>> l[:2] # split at 2
[10, 20]
>>> l[2:]
[30, 40, 50, 60]
```

```python
>>> s = 'bicycle'
>>> s[::3]
'bye'
>>> s[::-1]
'elcycib'
>>> s[::-2]
'eccb
```

```python
>>> invoice = """
... 0.....6.................................40........52...55........
... 1909  Pimoroni PiBrella                     $17.50    3    $52.50
... 1489 6mm Tactile Switch x20                  $4.95    2     $9.90
... 1510 Panavise Jr. - PV-201                  $28.00    1    $28.00
... 1601 PiTFT Mini Kit 320x240                 $34.95    1    $34.95
... """

>>> SKU = slice(0, 6)
>>> DESCRIPTION = slice(6, 40)
>>> UNIT_PRICE = slice(40, 52)
>>> QUANTITY = slice(52, 55)
>>> ITEM_TOTAL = slice(55, None)
>>> line_items = invoice.split('\n')[2:]
>>> for item in line_items:
		print(item[UNIT_PRICE], item[DESCRIPTION])
```
```bash
    $17.50     Pimoroni PiBrella
	 $4.95     6mm Tactile Switch x20
    $28.00     Panavise Jr. - PV-201
	$34.95     PiTFT Mini Kit 320x24
```

```python
>>> l = list(range(10))
>>> l
[0, 1, 2, 3, 4, 5, 6, 7, 8, 9]

>>> l[2:5] = [20, 30]
>>> l
[0, 1, 20, 30, 5, 6, 7, 8, 9]

>>> del l[5:7]
>>> l
[0, 1, 20, 30, 5, 8, 9]

>>> l[3::2] = [11, 22]
>>> l
[0, 1, 20, 11, 5, 22, 9]

>>> l[2:5] = 100
Traceback (most recent call last):
	File "<stdin>", line 1, in <module>
TypeError: can only assign an iterable

>>> l[2:5] = [100]
>>> l
[0, 1, 100, 22, 9]
```