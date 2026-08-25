## The printf Function
The printf function is designed to display the contents of a string, known as the **format string**, with values possibly inserted at specified points in the string. When it’s called, printf must be supplied with the format string, followed by any values that are to be inserted into the string during printing:

The format string may contain both ordinary characters and **conversion specifications**, which begin with the % character. The information that follows the % character specifies how the value is converted from its internal form (binary) to printed form (characters).

For example, the conversion specification `%d` specifies the printf is to convert an int value from binary to a string of decimal digits, while `%f` does the same for a float value.

```c
#include <stdio.h>
int main()
{
    int a = 0, b = 0;
    // 无意义的数字，每次运行都不同
    // printf("%d %d\n", a);
    // 多余的被忽略
    // printf("%d\n", a, b);

    float c = 1.0f;
    // 错误的写法 format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘double’
    printf("%d\n", c);
    // warning: format ‘%f’ expects argument of type ‘double’, but argument 2 has type ‘int’
    printf("%f\n", a);
}
```
### Conversion Specifications
A conversion specification can have the form %m.pX or %-m.pX, where m and p are integer constants and X is a letter.

The **minimum field width**, m, specifies the minimum number of characters to print.

The meaning of the **precision**, p, isn’t as easily described, since it depends on the choice of X, the **conversion specifier**. The most common conversion specifiers for numbers are: 

- d — Displays an integer in decimal (base 10) form.
- e — Displays a floating-point number in exponential format 
- f — Displays a floating-point number in “fixed decimal” format, without an exponent.
- g — Displays a floating-point number in either exponential format or fixed decimal format, depending on the number’s size.


The g specifier is especially useful for displaying numbers whose size can’t be predicted when the program is written or that tend to vary widely in size.
## The scanf Function
In many cases, a `scanf` format string will contain only conversion specification, as in the following example:
```c
int i, j;
float x, y;

scanf("%d%d%f%f", &i, &j, &x, &j);
```
scanf will read the line, converting its characters to the numbers they represent and then assign 1, -20, 0.3 and -4000.0 to i, j, x, and y, respectively.

Calling scanf is a powerful but unforgiving way to read data. Many professional C programmers avoid scanf, instead reading all data in character form and converting it to numeric form later.
### How scanf works
As it searches for the beginning of a number, scanf ignores white-space characters (the space, horizontal and vertical tab, form-feed, and new-line characters). 

see p44
## Ordinary Characters in Format Strings
see p45
### Confusing printf with scanf
see p46
Although printf format strings often end with \n, putting a new-line character at the end of a scanf format string is usually a bad idea.
```c
/* Adds two fractions */
#include <stdio.h>
int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;
    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);
    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    printf("The sum is %d/%d\n", result_num, result_denom);
    return 0;
}
```
# Q & A
- Q: %i or %d
- A: 不要使用%i

- Q: If printf treats % as the beginning of a conversion specification, how can I print the % character?
- A: `%%`

- Q: The \t escape is supposed to cause printf to advance to the next tab stop. How do I know how far apart tab stops are?
- A: You don’t. The effect of printing \t isn’t defined in C; it depends on what your operating system does when asked to print a tab character. Tab stops are typically eight characters apart, but C makes no guarantee.

- Q: What does scanf do if it's asked to read a number but the user enters nonnumeric input?
- A: see Chapter 22

- Q: I don’t understand how scanf can “put back” characters and read them again later.
- A: As it turns out, programs don’t read user input as it is typed. Instead, input is stored in a hidden buffer, to which scanf has access. It’s easy for scanf to put characters back into the buffer for subsequent reading. Chapter 22 discusses input buffering in more detail.

- Q: What does scanf do if the user puts punctuation marks (commas, for example) between numbers?
- `scanf("%d,%d", &i, &j);`

