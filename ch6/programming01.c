#include <stdio.h>
int main()
{
    double input;
    double max = 0;
    printf("Enter a number: ");
    scanf("%lf", &input);
    while (input)
    {
        if (input > max)
        {
            max = input;
        }
        printf("Enter a number: ");
        scanf("%lf", &input);
    }
    printf("The largest number entered was %.4f", max);
    
}