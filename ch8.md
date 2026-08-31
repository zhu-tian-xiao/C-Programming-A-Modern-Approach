# Arrays
So far, the only we've seen are **scalar**: capable of holding a single data item. C also supports **aggregate** variables, which can store collections of values. There are two kinds of aggregates in C: arrays and structures.
## One-Dimensional Arrays
An array is a data structure containing a number of data values, all of which have the same type. These values, known as elements, can be individually selected by their position within the array.

...; the length of the array can be specified by any (integer) constant expression.
### Array Subscripting
Expressions of the form `a[i] `are lvalues
```c
a[0] = 1;
printf("%d\n", a[5]);
++a[i];
```
###  Reversing a Series of Numbers #program
```c
#include <stdio.h>
#define N 10
int main()
{
    int a[N], i;
    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);
    printf("In reverse order:");
    for (i = N - 1; i >= 0; i--)
        printf(" %d", a[i]);
    printf("\n");
    return 0;
}
```
### Array Initialization
```c
int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
```

```c
int a[10] = {1, 2, 3};
```

```c
int a[10] = {0};
```

```c
int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
```
### Designated Initializers
see p165
### Checking a Number for Repeated Digits #program
```c
#include <stdio.h>
#include <stdbool.h> /* C99 only */

int main()
{
    bool digit_seen[10] = {false};
    int digit;
    long n;
    printf("Enter a number: ");
    scanf("%ld", &n);
    while (n > 0)
    {
        digit = n % 10;
        if (digit_seen[digit])
            break;
        digit_seen[digit] = true;
        n /= 10;
    }
    if (n > 0)
        printf("Repeated digit\n");
    else
        printf("No repeated digit\n");
    return 0;
}
```
### Using the sizeof Operator with Arrays
```c
sizeof(a) / sizeof(a[0])
```
### Computing Interest #program
```c
/* Prints a table of compound interest */
#include <stdio.h>
#define NUM_RATES ((int)(sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00
int main(void)
{
    int i, low_rate, num_years, year;
    double value[5];
    printf("Enter interest rate: ");
    scanf("%d", &low_rate);
    printf("Enter number of years: ");
    scanf("%d", &num_years);
    printf("\nYears");
    for (i = 0; i < NUM_RATES; i++)
    {
        printf("%6d%%", low_rate + i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");
    for (year = 1; year <= num_years; year++)
    {
        printf("%3d ", year);
        for (i = 0; i < NUM_RATES; i++)
        {
            value[i] += (low_rate + i) / 100.0 * value[i];
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }
    return 0;
}
```
## Multidimensional Arrays
### Initializing a Multidimensional Array
### Constant Arrays
```c
const char hex_chars[] =
{'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
'A', 'B', 'C', 'D', 'E', 'F'};
```
### Dealing a Hand of Cards

| function | library    |
| -------- | ---------- |
| time     | <time.h>   |
| srand    | <stdlib.h> |
| rand     | <stdlib.h> |

