# Expressions
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

Implementation-Defined Behavior和undefined behavior是不同的
对于/ %，操作数尽量没有负数
### Operator Precedence and Associativity
- Precedence
	- + -(unary)
	- * / %
	- + -(binary)

## Assignment Operators
### Simple Assignment
side effects
Most C operators don’t modify their operands, but some do. We say that these operators have side effects, since they **do more than just compute a value**. 
## Lvalues
An lvalue (pronounced “L-value”) represents an object stored in computer memory, not a constant or the result of a computation.
### Increment and Decrement Operators
For the record, the postfix versions of ++ and -- have higher precedence than unary plus and minus and are left associative. The prefix versions have the same precedence as unary plus and minus and are right associative.

## Expression Evaluation
- Precedence
	- ++ --(postfix)
	- + -(unary) ++ --(prefix)
	- * / %
	- + -(binary)
	- `= *= /= %= += -=`

**Undefined Behavior**
Avoid writing expressions that access the value of a variable and also modify the variable elsewhere in the expression.
## Expression Statements
C has the unusual rule that any expression can be used as a statement.

Since its value is discarded, there’s little point in using an expression as a statement unless the expression **has a side effect**.

# Q & A
- I want to apply the % operator to a floating-point operand, but my program won’t compile. What can I do?
- The % operator requires integer operands. Try the fmod function instead.

- If C has lvalues, does it also have rvalues?
- Yes, indeed.

- Do ++ and -- work with float variables
- Yes; the increment and decrement operations can be applied to floating-point numbers as well as integers. In practice, however, it’s fairly rare to increment or decrement a float variable.

- When I use the postfix version of ++ or --, just when is the increment or decrement performed?
- The C standard introduces the concept of “sequence point” and says that “updating the stored value of the operand shall occur between the previous and the next sequence point.”