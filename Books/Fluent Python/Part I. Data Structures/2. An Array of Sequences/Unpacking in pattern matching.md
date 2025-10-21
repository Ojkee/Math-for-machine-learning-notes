```python
match tuple(phone):
	case ['1', *rest]: # North America and Caribbean
		...
	case ['2', *rest]: # Africa and some territories
		...
	case ['3' | '4', *rest]: # Europe
		...
```

```python
case [str(name), _, _, (float(lat), float(lon))]:

case [str(name), *_, (float(lat), float(lon))]
```

```python
match record:
	case [name, _, _, (lat, lon)] if lon <= 0:
		print(f'{name:15} | {lat:9.4f} | {lon:9.4f}'
```

```python
def evaluate(exp: Expression, env: Environment) -> Any:
	"Evaluate an expression in an environment."
	match exp:
	# ... lines omitted
		case ['quote', x]:
			return x
		case ['if', test, consequence, alternative]:
			if evaluate(test, env):
				return evaluate(consequence, env)
			else:
				return evaluate(alternative, env)
		case ['lambda', [*parms], *body] if body:
			return Procedure(parms, body, env)
		case ['define', Symbol() as name, value_exp]:
			env[name] = evaluate(value_exp, env)
	# ... more lines omitted
		case _:
			raise SyntaxError(lispstr(exp)
```

```python
case ['lambda', [*parms], *body] if body:
	return Procedure(parms, body, env)
```

```python
case ['define', [Symbol() as name, *parms], *body] if body:
	env[name] = Procedure(parms, body, env)
```