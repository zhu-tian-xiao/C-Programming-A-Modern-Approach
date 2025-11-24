# Defining and Calling Functions
## Function Definitions
- Functions may not return arrays, but there are no other restrictions on the return type.
- Specifying that the return type is void indicates that the function doesn’t return a value.
## Arguments
In C, arguments are **passed by value**
### Argument Conversions
The compiler has encountered a prototype prior to the call. The value of each argument is implicitly converted to the type of the corresponding param- eter as if by assignment. For example, if an int argument is passed to a func- tion that was expecting a double, the argument is converted to double automatically.
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