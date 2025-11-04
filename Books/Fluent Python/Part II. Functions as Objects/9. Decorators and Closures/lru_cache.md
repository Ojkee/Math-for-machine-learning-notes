LRU - Least Recently Used.

[[cache]] is wrapper around **lru_cache**. 

**lru_cache** maintains a maximum number of cached entries.
When this number is exceeded, **lru_cache** discards the least recently used entries.

By default, this value is set to 128, but it can be customized:
```python
maxsize=128
```

**lru_cache** can distinguish between different types and cache them separately, even if their values are equal.
For example, `int(1)` and `float(1.0)` are stored as distinct entries:
```python
typed=False
```
