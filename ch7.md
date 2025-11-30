# Basic Types
## Integer Types
### Integer Types in C99
long long和unsigned long long 都至少需要64位，这是标准要求
### Integer Constants

## Floating Types

| type        | precision                         |
| ----------- | --------------------------------- |
| float       | Single-precision floating-point   |
| double      | Double-precision floating-point   |
| long double | Extended-precision floating-point |
## Character Types
在C，character被视为一种小的int
### Signed and Unsigned Characters
当character被用作一种小的int，unsigned char和signed char才有意义

并且，必须显式的制定unsigned和signed，因为C标准并未制定char是什么类型
### Arithmetic Types
C99的情况：
- integer types
	- char
	- signed integer types
	- unsigned integer types
	- enumerated types
- floating types
	- real floating types
	- complex types
### Character-Handling Functions
比如说toupper
### Reading and Writing Characters using scanf and printf
跳过一个white space的方法
```c
scanf(" %c", &ch); /* skips white space, then reads ch */
```
### Determining the Length of a Message

## Type conversions
implicit conversions

explicit conversions
Implicit conversions are performed in the following situations:
- When the operands in an arithmetic or logical expression don’t have the same type. (C performs what are known as the **usual arithmetic conversions**.)
- When the type of the expression on the right side of an assignment doesn’t match the type of the variable on the left side.
- When the type of an argument in a function call doesn’t match the type of the corresponding parameter.
- When the type of the expression in a return statement doesn’t match the function’s return type.