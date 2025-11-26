# C Fundamentals
## The General Form of a Simple Program
### Directives
Commands intended for the preprocessor are called directives.
### Functions
Def: library functions: belong to a “library” of functions that are supplied with the **compiler**
### Statement
A statement is a **command** to be executed when the program runs.
## Variables and Assignment
storage locations are called variables.
### Types
Every variable must have a type, which specifies what kind of data it will hold.
### Printing Expressions
Wherever a value is needed, any expression of the same type will do.
## Reading Input
```c
/* Computes the dimensional weight of a
box from input provided by the user */
#include <stdio.h>
#define INCHES_PER_POUND 166
int main(void)
{
    int height, length, width, volume, weight;
    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter length of box: ");
    scanf("%d", &length);
    printf("Enter width of box: ");
    scanf("%d", &width);
    volume = height * length * width;
    // 向上取整
    weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);
    return 0;
}
```
## Identifiers
As we’re writing a program, we’ll have to choose names for variables, functions, macros, and other entities. These names are called identifiers. In C, an identifier may contain letters, digits, and underscores, but must begin with a letter or under- score. 
## Layout of a C Program
We can think of a C program as a series of tokens: groups of characters that can’t be split up without changing their meaning. Identifiers and keywords are tokens. So are operators like + and -, punctuation marks such as the comma and semicolon, and string literals.
# Q & A
- What does GCC stand for?
- GNU Compiler Collection

- What does GNU stand for?
- GNU stands for “GNU’s Not UNIX!”, GNU is a project of the Free Software Foundation

- What’s the big deal about GCC, anyway?
- GCC is significant for many reasons, not least the fact that it’s free and capable of compiling a number of languages. It runs under many operating systems and generates code for many different CPUs, including all the widely used ones.

- How good is GCC at finding errors in programs?
- `gcc -O -Wall -W -pedantic -ansi -std=c99 -o pun pun.c`

- Why is C so terse?
- history problem

- In some C books, the main function ends with exit(0) instead of return 0. Are these the same?
- the same

- What happens if a program reaches the end of the main function without executing a return statement?
- In C99, if main is declared to return an int (as in our examples), the program returns 0 to the operating system;

- Where does the float type get its name?
- float is short for “floating-point,” a technique for storing numbers in which the decimal point “floats.” A float value is usually stored in two parts: the fraction (or mantissa) and the exponent.

- Why do floating-point constants need to end with the letter f?
- a constant that contains a decimal point but doesn’t end with f has type double

- How many spaces should I use for indentation?
- Tab

