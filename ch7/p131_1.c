#include <stdio.h>
int main()
{
    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");
    int input;
    int sum = 0;
    do
    {
        scanf("%d", &input);
        sum += input;
    } while (input != 0);

    printf("The sum is: %d\n", sum);
}