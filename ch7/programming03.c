#include <stdio.h>
int main()
{
    double sum = 0, num;
    printf("This program sums a series of floating-point numbers.\n");
    printf("Enter numbers (0 to terminate): ");
    scanf("%lf", &num);
    while (num)
    {
        sum += num;
        printf("Enter numbers (0 to terminate): ");
        scanf("%lf", &num);
    }
    printf("The sum: %.2f\n", sum);
}