# Expressions
One of C’s distinguishing characteristics is its emphasis on expressions—formulas that show how to compute a value—rather than statements. The simplest expressions are variables and constants.
## Arithmetic Operators
- Unary
	- unary plus
	- unary minus
- Binary
	- Additive
		- addition
		- subtraction
	- Multiplicative
		- multiplication
		- division
		- remainder
- % operator requires integer operands; if either operand is not an integer, the program won't compile.
- Using zero as the right operand of either / or % causes **undefined behavior**.
- Describing the result when / and % are used with negative operands is tricky.

Implementation-Defined Behavior: see p55

It's best to avoid writing programs that depend on implementation-defined behavior.

Implementation-Defined Behavior和undefined behavior是不同的
对于/ %，操作数尽量没有负数
### Operator Precedence and Associativity
- Precedence
	- + -(unary)
	- * / %
	- + -(binary)

## Assignment Operators

### Simple Assignment
In many programming languages, assignment is a statement; in C, however, assignment is an operator. The value of an assignement v=e is the value of v after the assignment.

side effects: Most C operators don’t modify their operands, but some do. We say that these operators have side effects, since they **do more than just compute a value**.

Since assignment is an operator, several assignments can be chained together: 
```c
i = j = k = 0;
```
The = operator is right associative, so this assignment is equivalent to `i = (j = (k = 0));`

### Lvalues
An lvalue (pronounced “L-value”) represents an **object** stored in computer memory, not a constant or the result of a computation.
### Compound Assignment
The compound assignment operators have the same properties as the = operator. In particular, they’re right associative, so the statement
```c
i += j += k;
```
means
```c
i += (j += k);
```
## Increment and Decrement Operators
++ and -- can be used as prefix operators (++i and --i, for example) or postfix operators (i++ and i--).

++ and --have side effects: they modify the values of their operands.

i++ means "increment i immediately," while i++ means "use the old value of i for now, but increment i later." How much later? The C standard doesn't specify a precise time, but it's safe to assume that i will be incremented before the next statement is executed.

For the record, the postfix versions of ++ and -- have higher precedence than unary plus and minus and are left associative. The prefix versions have the same precedence as unary plus and minus and are right associative.

## Expression Evaluation
- Precedence
	- ++ --(postfix)
	- + -(unary) ++ --(prefix)
	- * / %
	- + -(binary)
	- `= *= /= %= += -=`
### Order of Subexpression Evaluation
C doesn’t define the order in which subexpressions are evaluated.

Avoid writing expressions that access the value of a variable and also modify the variable elsewhere in the expression. 

According to the C standard, statements such as `c = (b = a + 2) - (a = 1);` and `j = i * i++`; cause undefined behavior.
## Expression Statements
C has the unusual rule that any expression can be used as a statement.

Since its value is discarded, there’s little point in using an expression as a statement unless the expression **has a side effect**.

# Q & A

- Q: I notice that C has no exponentiation operator. How can I raise a number to a power?
- i * i * i is i cubed. Or pow function

- Q: I want to apply the % operator to a floating-point operand, but my program won’t compile. What can I do?
- A: The % operator requires integer operands. Try the fmod function instead.

- Q: Why are the rules for using the / and % operators with negative operands so complicated?
- A: see p67.

- Q: If C has lvalues, does it also have rvalues?
- A: Yes. see p67.

- Q: You said that v += e isn’t equivalent to v = v + e if v has a side effect. Can you explain?
- A: see p67.

- Q: Do ++ and -- work with float variables?
- A: Yes; the increment and decrement operations can be applied to floating-point numbers as well as integers. In practice, however, it’s fairly rare to increment or decrement a float variable.

- Q: When I use the postfix version of ++ or --, just when is the increment or decrement performed?
- A: see p68.

