# Selection Statements
- Selection statements: if switch
- Iteration statements: while for
- Jump statements: break, continue, goto, return
## Logical Expressions
### Relational Operators
`< > <= >=`
- Precedence
	- ++ --(postfix)
	- + -(unary) ++ --(prefix)
	- * / %
	- + -(binary)
	- **relational operators**
	- `= *= /= %= += -=`
The relational operators are **left associative**.
### Equality Operator
`==`
- Precedence
	- ++ --(postfix)
	- + -(unary) ++ --(prefix)
	- * / %
	- + -(binary)
	- relational operators
	- **`==`**
	- `= *= /= %= += -=`
### Logical Operators
`! && ||`
- Precedence
	- ++ --(postfix)
	- + -(unary) ++ --(prefix) **!**
	- * / %
	- + -(binary)
	- relational operators
	- `==`
	- && ||
	- `= *= /= %= += -=`
## The if Statement
### Compound Statements
A compound statement has the form `{statement}`
### Boolean Values in C99
```c
#include <stdbool.h>
int main() {
    _Bool a;
    bool b;
}
```
## The switch Statement
```c
switch(expression)
{
	case constant-expression : statements
	...
	case constant-expression : statements
	: statements
}
```
- Controlling expression. The word switch must be followed by an integer expression in parentheses. Characters are treated as integers in C and thus can be tested in switch statements. Floating-point numbers and strings don’t qualify, however.
- A constant expression is much like an ordinary expression except that it can’t contain variables or function calls. 
- Statements. After each case label comes any number of statements. No braces are required around the statements.