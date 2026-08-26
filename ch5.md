# Selection Statements
We've encounter 2 kinds of statements:
- return statement
- expression statement

- Selection statements: if switch
- Iteration statements: while for
- Jump statements: break, continue, goto, return

- compound statement
- null statement
## Logical Expressions
In C, a comparison such as `i < j` yields an integer: either 0 or 1.
### Relational Operators
`< > <= >=`
The relational operators can be used to compare integers and floating-point numbers, with operands of mixed types allowed.

The precedence of the relational operators is lower than that of the arithmetic operators.

The relational operators are **left associative**.
### Equality Operator
`== !=`

Like the relational operators, the equality operators are left associative and produce either 0 (false) or 1 (true) as their result. However, the equality operators have lower precedence than the relational operators.
### Logical Operators
`! && ||`
The ! operator has the same precedence as the unary plus and minus operators. The precedence of && and || is lower than that of the relational and equality operators
## The if Statement
```
if ( expression ) statement
```
### Compound Statements
A compound statement has the form `{statement}`.

### Program: Calculating a Broker’s Commission
```c
/* Calculates a broker's commission */
#include <stdio.h>
int main(void) {
  float commission, value;
  printf("Enter value of trade: ");
  scanf("%f", &value);
  if (value < 2500.00f)
    commission = 30.00f + .017f * value;
  else if (value < 6250.00f)
    commission = 56.00f + .0066f * value;
  else if (value < 20000.00f)
    commission = 76.00f + .0034f * value;
  else if (value < 50000.00f)
    commission = 100.00f + .0022f * value;
  else if (value < 500000.00f)
    commission = 155.00f + .0011f * value;
  else
    commission = 255.00f + .0009f * value;
  if (commission < 39.00f) commission = 39.00f;
  printf("Commission: $%.2f\n", commission);
  return 0;
}
```
### Conditional Expressions
Calls of printf can sometimes benefit from condition expressions.
```c
printf("%d\n", i > j ? i : j);
```
Conditional expressions are also common in certain kinds of macro definitions.
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