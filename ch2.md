# C Fundamentals
## The General Form of a Simple Program
Even the simplest C programs rely on three key language features:
- Directives: editing commands that modify the program prior to compilation
- functions: named blocks of executable code, of which main is an example
- statements: commands to be performed when the program is run
### Directives
[[ch14]] 
[[ch15]]
### Functions
Functions fall into two categories:
- written by programmers
- **library functions**
### Statement
A statement is a **command** to be executed when the program runs.

C requires that each statement end with a semicolon. (As with any good rule, there’s one exception: the compound statement)
## Variables and Assignment
storage locations are called variables.
### Types
Every variable must have a type, which specifies what kind of data it will hold.

The type of a numeric variable determines whether or not digits are allowed after the decimal point.
### Declarations
In C99, declarations don't have to come before statements.
### Assignment
A variable can be given a value by means of assignment.
```c
height = 8;
length = 12;
width = 10;
```
The numbers 8, 12, and 10 are said to be **constants**.

It's best to append the letter `f` to a constant that contains a decimal point if the number is assigned to a float variable:
```
profit = 2150.48f
```
### Printing the Value of a Variable
```d
printf("Profit: $%.2f\n", profit);

printf("Height: %d Length: %d\n", height, length);
```
### Computing the Dimensional Weight of a Box
p20
### Initialization
Some variables are automatically set to 0 when a program begins to execute, but most are not. A variable that doesn't have a default value and hasn't yet been assigned a value by the program is said to be uninitialized.
```c
int height = 8;
```
the value 8 is said to be an initializer.

Any number of variables can be initialized in the same declaration:
```
int height = 8, length = 12, width = 10;
```

### Printing Expressions
`printf` isn't limited to displaying numbers stored in variables: it can display the value of any numeric expression. Taking advantage of this property can simplify a program and reduce the number of variables. 
```c
volume = height * lenght * width;
printf("%d\n", volume);
```
could be replaced by 
```c
printf("%d\n", height * length * width);
```
`printf`'s ability to print expressions illustrates one of C's general principles: **Wherever a value is needed, any expression of the same type will do.**
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
## Defining Names for Constants
Using a feature known as macro definition, we can name this constant:
```c
#define INCHES_PER_POUND 166 
```
`#define` is a preprocessing directive, just as `#include` is.

The value of a macro can be an expression:
```c
#define RECIPROCAL_OF_PI (1.0f / 3.14159f)
```
Notice that we’ve used only upper-case letters in macro names. This is a convention that most C programmers follow, not a requirement of the language.

### Converting from Fahrenheit to Celsius
```c
/* Converts a Fahrenheit temperature to Celsius */

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void) {
  float fahrenheit, celsius;

  printf("Enter Fahrenheit temperature: ");

  scanf("%f", &fahrenheit);

  celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

  printf("Celsius equivalent: %.1f\n", celsius);

  return 0;
}
```
## Identifiers
As we’re writing a program, we’ll have to choose names for variables, functions, macros, and other entities. These names are called identifiers. In C, an identifier may contain letters, digits, and underscores, but must begin with a letter or under-score. (In C99, identifiers may contain certain “universal character names” as well.) 
### Keywords
```
auto enum restrict* unsigned 
break extern return void
case float short volatile
char for signed while
const goto sizeof _Bool*
continue if static _Complex*
default inline struct _Imaginary*
do int switch 
double long typedef
else register union
```

## Layout of a C Program
We can think of a C program as a series of **tokens**: groups of characters that can’t be split up without changing their meaning. Identifiers and keywords are tokens. So are operators like + and -, punctuation marks such as the comma and semicolon, and string literals.
# Q & A
- Q: What does GCC stand for?
- A: GNU Compiler Collection. Because the current version of GCC compiles programs written in a variety of languages.

- Q: What does GNU stand for?
- A: GNU stands for “GNU’s Not UNIX!”, GNU is a project of the Free Software Foundation.

- Q: What’s the big deal about GCC, anyway?
- A: GCC is significant for many reasons, not least the fact that it’s free and capable of compiling a number of languages. It runs under many operating systems and generates code for many different CPUs, including all the widely used ones. GCC is the primary compiler for many UNIX-based operating systems.

- Q: How good is GCC at finding errors in programs?
- A: `gcc -O -Wall -W -pedantic -ansi -std=c99 -o pun pun.c`

- Q: Why is C so terse?
- A: history problem

- Q: In some C books, the main function ends with exit(0) instead of return 0. Are these the same?
- A: the same

- Q: What happens if a program reaches the end of the main function without executing a return statement?
- A: In C99, if main is declared to return an int (as in our examples), the program returns 0 to the operating system;

- Q: Where does the float type get its name?
- A: float is short for “floating-point,” a technique for storing numbers in which the decimal point “floats.” A float value is usually stored in two parts: the fraction (or mantissa) and the exponent.

- Q: Why do floating-point constants need to end with the letter f?
- A: a constant that contains a decimal point but doesn’t end with f has type double. Without the f, a warning may be generated about the possibility of a number being stored into a float variable that exceeds the capacity of the variable.

- Q: How many spaces should I use for indentation?
- A: Tab

