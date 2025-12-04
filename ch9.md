# Defining and Calling Functions
## Function Definitions
- Functions may not return arrays, but there are no other restrictions on the return type.
- Specifying that the return type is void indicates that the function doesn’t return a value.
## Arguments
In C, arguments are **passed by value**
### Argument Conversions
The compiler has encountered a prototype prior to the call. The value of each argument is **implicitly converted** to the type of the corresponding param- eter as if by assignment. For example, if an int argument is passed to a func- tion that was expecting a double, the argument is converted to double automatically.
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
## Program Termination
### The exit Function
The difference between return and exit is that exit causes program **termination** regardless of which function calls it.
## Recursion
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


