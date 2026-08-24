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

The meaning of the **precision**, p, isn’t as easily described, since it depends on the choice of X, the **conversion specifier**.

这里展示了%d %f %e %g的用法，其中，%d是用来展示int的，%e  %f %g是用来展示floating-point number的

- d — Displays an integer in decimal (base 10) form.
- e — Displays a floating-point number in exponential format 
- f — Displays a floating-point number in “fixed decimal” format, without an exponent.
- g — Displays a floating-point number in either exponential format or fixed decimal format, depending on the number’s size.
## The scanf Function
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
- %i or %d
- 不要使用%i

- If printf treats % as the beginning of a conversion specification, how can I print the % character?
- `%%`