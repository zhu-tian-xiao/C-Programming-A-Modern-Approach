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

promotion： convert a character or short integer to type int

rules:
- The type of either operand is a floating type
- Neither operand type is a floating type

这里注意不要将unsigned int和signed int混合使用

### Conversion During Assignment
### Implicit Conversions in C99
### Casting
```c
( type-name ) expression
```
## Type Definitions
```c
typedef int Bool;
```
### Advantages of Type Definitions
### Type Definitions and Portability
## The sizeof Operator
```c
printf("Size of int: %lu\n", (unsigned long) sizeof(int));
```
# Q & A
- Section 7.1 says that %o and %x are used to write unsigned integers in octal and hex notation. How do I write ordinary (signed) integers in octal or hex?
- You can use %o and %x to print a signed integer as long as its value isn’t negative. These conversions cause printf to treat a signed integer as though it were unsigned; in other words, printf will assume that the sign bit is part of the number’s magnitude. As long as the sign bit is 0, there’s no problem. If the sign bit is 1, printf will print an unexpectedly large number.
```c
#include <stdio.h>
int main()
{
    int x = 1;
    printf("%x\n", x);
    int y = -1;
    printf("%x\n", y);
}

zhu@zhu:/mnt/d/Project/Tutorial/c/ch7$ gcc p152_1.c -o p152_1
zhu@zhu:/mnt/d/Project/Tutorial/c/ch7$ ./p152_1
1
ffffffff
```
解决方法：
```c
if (i < 0)
printf("-%x", -i);
else
printf("%x", i);
```
- Why do we use %lf to read a double value but %f to print it?


- Exactly what happens if I assign a value to a variable that’s not large enough to hold it?
- Roughly speaking, if the value is of an integral type and the variable is of an unsigned type, the extra bits are thrown away; if the variable has a signed type, the result is implementation-defined. Assigning a floating-point number to a variable—integer or floating—that’s too small to hold it produces undefined behavior: anything can happen, including program termination.

- Why does C bother to provide type definitions? Isn’t defining a BOOL macro just as good as defining a Bool type using typedef? 
- type definitions可以用来定义指针类型；同时type definitions遵守scope rules

