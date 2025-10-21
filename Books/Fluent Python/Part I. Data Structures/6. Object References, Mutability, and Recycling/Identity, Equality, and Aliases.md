![[Pasted image 20251021232213.png]]

```python
>>> charles = {"name": "Charles L. Dogson", "born": 1832}
>>> lewis = charles
>>> lewis is charles
True

>>> id(charles), id(lewis)
(4300473992, 4300473992)

>>> lewis["balance"] = 950
>>> charles
{'name': 'Charles L. Dodgson', 'born': 1832, 'balance': 950}

>>> alex = {'name': 'Charles L. Dodgson', 'born': 1832, 'balance': 950}
>>> alex == charles
True

>>> alex is not charles
True
```