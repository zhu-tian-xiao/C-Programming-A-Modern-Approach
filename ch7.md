# Basic Types
## Integer Types
numeric types: integer types and floating types
integer type: signed and unsigned 

实际上只有6种integer types: short int, unsigned short int, int, unsigned int, long int, unsigned long int

| Type               | Smallest Value             | Largest Value              |
| ------------------ | -------------------------- | -------------------------- |
| short int          | –32,768                    | 32,767                     |
| unsigned short int | 0                          | 65,535                     |
| int                | –2,147,483,648             | 2,147,483,647              |
| unsigned int       | 0                          | 4,294,967,295              |
| long int           | –9,223,372,036,854,775,808 | 9,223,372,036,854,775,807  |
| unsigned long int  | 0                          | 18,446,744,073,709,551,615 |

### Integer Types in C99
long long和unsigned long long 都至少需要64位，这是标准要求

standard signed integer types: short int, int, long int, and long long int types (along with the signed char type)
standard unsigned integer types: unsigned short int, unsigned int, unsigned long int, and unsigned long long int types (along with the unsigned char type and the `_Bool` type)
### Integer Constants
The type of a decimal integer constant is normally int.
int -> long int -> **unsigned long int**

octal or hexadecimal constant:
int -> unsigned int -> long int -> unsigned long int
### Integer Constants in C99
The type of a decimal constant with no suffix (U, u, L, l, LL, or ll) is the “smallest” of the types int, long int, or long long int that can represent the value of that constant.
int -> long int -> **long long int**

octal or hexadecimal constant:
int -> unsigned int -> long int -> unsigned long int -> long long int -> unsigned long long int
### Reading and Writing Integers
When reading or writing an **unsigned integer**, use the letter u, o, or x instead of d in the conversion specification.
```c
#include <stdio.h>
int main()
{
    unsigned int u;
    scanf("%u", &u); /* reads u in base 10 */
    printf("%u\n", u); /* writes u in base 10 */
    // scanf("%o", &u);   /* reads u in base 8 */
    // printf("%o\n", u); /* writes u in base 8 */
    // printf("%d\n", u);
    // scanf("%x", &u);   /* reads u in base 16 */
    // printf("%x\n", u); /* writes u in base 16 */
    // printf("%d\n", u);
}
```
When reading or writing a short integer, put the letter h in front of d, o, u, or x:
```c
short s;
scanf("%hd", &s);
printf("%hd", s);
```
When reading or writing a long integer, put the letter l (“ell,” not “one”) in front of d, o, u, or x:
```c
long l;
scanf("%ld", &l);
printf("%ld", l);
```
When reading or writing a long long integer (C99 only), put the letters ll in front of d, o, u, or x:
```c
long long ll;
scanf("%lld", &ll);
printf("%lld", ll);
```
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
	- signed integer types: signed char, short int, int, long int, long int, long long int
	- unsigned integer types: unsigned char, unsigned short int, unsigned int, unsigned long int, unsigned long long int, `_Bool`
	- enumerated types
- floating types
	- real floating types: float, double, long double
	- complex types: float `_Complex`, double `_Complex`, long double `_Complex`
### Character-Handling Functions
比如说toupper
### Reading and Writing Characters using scanf and printf
在读取char之前跳过所有white space的方法
```c
scanf(" %c", &ch); /* skips white space, then reads ch */
```
### Determining the Length of a Message
```C
#include <stdio.h>
int main()
{
    printf("Enter a message: ");
    int count = 0;
    while (getchar() != '\n')
    {
        count++;
    }
    printf("Your message was %d character(s) long.\n", count);
}
```
## Type conversions
implicit conversions

explicit conversions

Implicit conversions are performed in the following situations:
- When the operands in an arithmetic or logical expression don’t have the same type. (C performs what are known as the **usual arithmetic conversions**.)
- When the type of the expression on the right side of an **assignment** doesn’t match the type of the variable on the left side.
- When the type of an argument in a function call doesn’t match the type of the corresponding parameter.
- When the type of the expression in a return statement doesn’t match the function’s return type.
在算数表达式/逻辑表达式、赋值表达式、函数调用、函数返回时可能发生隐式转换

promotion： convert a character or short integer to type int

rules:
- The type of either operand is a floating type: float -> double -> long double
- Neither operand type is a floating type: int -> unsigned int -> long int -> unsigned long int

这里注意不要将unsigned int和signed int混合使用，因为int会被转换为unsigned int，如果int是负数，会造成意外情况



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

