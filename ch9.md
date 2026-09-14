# Functions
## Defining and Calling Functions
### Function Definitions
the general form of a function definition:
```c
return-type function-name ( parammeter ) {
	declarations
	statements
}
```
- Functions **may not return arrays**, but there are no other restrictions on the return type.
- Specifying that the return type is void indicates that the function doesn’t return a value.
### Function Calls
```c
average(x, y);
```
This call of average is an example of an expression statement: a statement that evaluates an expression but then discards the result.

### Testing Whether a Number Is Prime
```c
/* Tests whether a number is prime */
// p190

#include <stdbool.h>
#include <stdio.h>

bool is_prime(int n);

int main() {
  printf("Enter a number: ");
  int number;
  scanf("%d", &number);
  if (is_prime(number)) {
    printf("Prime\n");
  } else {
    printf("Not prime\n");
  }
}

bool is_prime(int n) {
  if (n <= 1) {
    return false;
  }
  for (int divisor = 2; divisor * divisor <= n; divisor++) {
    if (n % divisor == 0) {
      return false;
    }
  }
  return true;
}
```
## Function Declarations
```c
return-type function-name ( parameters ) ;
```
## Arguments
In C, arguments are **passed by value**...
### Argument Conversions
- The compiler has encountered a prototype prior to the call. The value of each argument is **implicitly converted** to the type of the corresponding parameter as if by assignment. For example, if an int argument is passed to a function that was expecting a double, the argument is converted to double automatically.
- The complier has not encountered a prototype prior to the call. 无需考虑这种情况
### Array Arguments
Although we can use the sizeof operator to help determine the length of an array variable, it doesn’t give the correct answer for an array parameter:
```c
int f(int a[])
{
	int len = sizeof(a) / sizeof(a[0]);
	/*** WRONG: not the number of elements in a ***/
	…
}
```

How to sun two dimensional array?
```c
int sum_two_dimensional_array(int a[][LEN], int n) {
  int sum = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < LEN; j++) {
      sum += a[i][j];
    }
  }
  return sum;
}
```
### Variable_Length Array Parameters
```c
int sum_two_dimensional_array(int n, int m, int a[n][m]) {
  int i, j, sum = 0;

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      sum += a[i][j];
    }
  }

  return sum;
}
```
### Using static in Array Parameter Declarations
see p200
### Compound Literals
```c
int total = sum_array((int []) {3, 0, 3, 4, 1}, 5);
```
## Program Termination
### The exit Function
```c
#include <stdlib.h>
exit(0);
exit(EXIT_SUCCESS);
exit(EXIT_FAILURE);
```
The statement
```c
return expression;
```
in main is equivalent to 
```c
exit(expression);
```
The difference between return and exit is that exit causes program **termination** regardless of which function calls it.
## Recursion
```c
int fact(int n) {
  if (n <= 1) {
    return 1;
  } else {
    return n * fact(n - 1);
  }
}
```

```c
double power(double x, int n) {
  if (n == 0) {
    return 1;
  } else {
    return x * power(x, n -1);
  }
}

```

```c
#include <stdio.h>
#define N 10
void quicksort(int a[], int low, int high);
int split(int a[], int low, int high);
int main(void) {
  int a[N], i;

  printf("Enter %d numbers to be sorted: ", N);
  for (i = 0; i < N; i++) {
    scanf("%d", &a[i]);
  }

  quicksort(a, 0, N - 1);

  printf("In sorted order: ");
  for (i = 0; i < N; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");

  return 0;
}

void quicksort(int a[], int low, int high) {
  int middle;

  if (low >= high) {
    return;
  }
  middle = split(a, low, high);
  quicksort(a, low, middle - 1);
  quicksort(a, middle + 1, high);
}
int split(int a[], int low, int high) {
  int part_element = a[low];

  for (;;) {
    while (low < high && part_element <= a[high]) {
      high--;
    }
    if (low >= high) {
      break;
    }
    a[low++] = a[high];
    while (low < high && a[low] <= part_element) {
      low++;
    }
    if (low >= high) {
      break;
    }
    a[high--] = a[low];
  }

  a[high] = part_element;
  return high;
}
```
# Q & A
- Is it legal to put a function declaration inside the body of another function?
- yes

- If several functions have the same return type, can their declarations be combined? For example, since both print_pun and print_count have void as their return type, is the following declaration legal?
- void print_pun(void), print_count(int n);

- Why can the first dimension in an array parameter be left unspecified, but not the other dimensions? 
- 一维数组不需要指定大小也可以访问`a[x]`的位置，二维数组需要指定列的大小，才能知道`a[x][y]`的位置，三维数组需要指定除了第一维以外的维数的元素数量
- How can I test main’s return value to see if a program has terminated normally?
- `echo $SHELL`

- With regard to the previous question: Why not just define main’s return type to be void?
- 操作系统需要main函数返回的状态码

- Is it legal for a function f1 to call a function f2, which then calls f1?
- Yes.
