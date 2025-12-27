### Imports and type aliasing
```python
import math
import operator as op
from collections import ChainMap
from itertools import chain
from typing import Any, TypeAlias, NoReturn

Symbol: TypeAlias = str
Atom: TypeAlias = float | int | Symbol
Expression: TypeAlias = Atom | list
```

### Parser
```python
def parse(program: str) -> Expression:
	"Read a Scheme expression from a string."
	return read_from_tokens(tokenize(program))
	
def tokenize(s: str) -> list[str]:
	"Convert a string into a list of tokens."
	return s.replace('(', ' ( ').replace(')', ' ) ').split()

def read_from_tokens(tokens: list[str]) -> Expression:
	"Read an expression from a sequence of tokens."
	# more parsing code omitted in book listing
	
>>> from lis import parse
>>> parse('1.5')
1.5

>>> parse('ni!')
'ni!'

>>> parse('(gcd 18 45)')
['gcd', 18, 45]

>>> parse('''
>>> (define double
>>> 	(lambda (n)
>>> 		(* n 2)))
>>> ''')
['define', 'double', ['lambda', ['n'], ['*', 'n', 2]]]
```

### The Environment
```python
class Environment(ChainMap[Symbol, Any]):
	"A ChainMap that allows changing an item in-place."
	
	def change(self, key: Symbol, value: Any) -> None:
		"Find where key is defined and change the value there."
		for map in self.maps:
			if key in map:
				map[key] = value
				return
		raise KeyError(key)

		
def standard_env() -> Environment:
	"An environment with some Scheme standard procedures."
	env = Environment()
	env.update(vars(math)) # sin, cos, sqrt, pi, ...
	env.update({
		'+': op.add,
		'-': op.sub,
		'*': op.mul,
		'/': op.truediv,
		# omitted here: more operator definitions
		'abs': abs,
		'append': lambda *args: list(chain(*args)),
		'apply': lambda proc, args: proc(*args),
		'begin': lambda *x: x[-1],
		'car': lambda x: x[0],
		'cdr': lambda x: x[1:],
		# omitted here: more function definitions
		'number?': lambda x: isinstance(x, (int, float)),
		'procedure?': callable,
		'round': round,
		'symbol?': lambda x: isinstance(x, Symbol),
	})
	return env


>>> from lis import Environment
>>> inner_env = {'a': 2}
>>> outer_env = {'a': 0, 'b': 1}
>>> env = Environment(inner_env, outer_env)
>>> env['a']
2

>>> env['a'] = 111
>>> env['c'] = 222
>>> env
Environment({'a': 111, 'c': 222}, {'a': 0, 'b': 1})

>>> env.change('b', 333)
>>> env
Environment({'a': 111, 'c': 222}, {'a': 0, 'b': 333})
```

### REPL
```python
def repl(prompt: str = 'lis.py> ') -> NoReturn:
	"A prompt-read-eval-print loop."
	global_env = Environment({}, standard_env())
	while True:
		ast = parse(input(prompt))
		val = evaluate(ast, global_env)
		if val is not None:
			print(lispstr(val))
			
def lispstr(exp: object) -> str:
	"Convert a Python object back into a Lisp-readable string."
	if isinstance(exp, list):
		return '(' + ' '.join(map(lispstr, exp)) + ')'
	else:
		return str(exp)
```

### Evaluator
```python
KEYWORDS = ['quote', 'if', 'lambda', 'define', 'set!']

def evaluate(exp: Expression, env: Environment) -> Any:
	"Evaluate an expression in an environment."
	match exp:
		case int(x) | float(x):
			return x
		case Symbol(var):
			return env[var]
		case ['quote', x]:
			return x
		case ['if', test, consequence, alternative]:
			if evaluate(test, env):
				return evaluate(consequence, env)
			else:
				return evaluate(alternative, env)
		case ['lambda', [*parms], *body] if body:
			return Procedure(parms, body, env)
		case ['define', Symbol(name), value_exp]:
			env[name] = evaluate(value_exp, env)
			case ['define', [Symbol(name), *parms], *body] if body:
			env[name] = Procedure(parms, body, env)
		case ['set!', Symbol(name), value_exp]:
			env.change(name, evaluate(value_exp, env))
			case [func_exp, *args] if func_exp not in KEYWORDS:
			proc = evaluate(func_exp, env)
			values = [evaluate(arg, env) for arg in args]
			return proc(*values)
		case _:
			raise SyntaxError(lispstr(exp))
```