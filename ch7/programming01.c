// The square2.c program of Section 6.3 will fail (usually by printing strange answers) if
// i * i exceeds the maximum int value. Run the program and determine the smallest value
// of n that causes failure. Try changing the type of i to short and running the program
// again. (Don’t forget to update the conversion specifications in the call of printf!) Then
// try long. From these experiments, what can you conclude about the number of bits used to
// store integer types on your machine?

// short int values are usually stored in 16 bits, causing failure at 182. int and long int values are usually stored in 32 bits, with failure occurring at 46341. 
#include <stdio.h>
int main()
{
    short i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%hd", &n);

    for (i = 1; i <= n; i++)
        printf("%20hd%20hd\n", i, i * i);
}