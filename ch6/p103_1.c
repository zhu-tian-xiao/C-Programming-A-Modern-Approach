#include <stdio.h>
int main()
{
    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");
    int integer, sum = 0;
    scanf("%d", &integer);
    while (integer)
    {
        sum += integer;
        scanf("%d", &integer);
    }
    printf("The sum is: %d\n", sum);
    
}