// FINISH
#include <stdio.h>
#include <stdbool.h>
int main()
{
    unsigned long num;
    bool repeat[10] = {false};
    printf("Enter a number: ");
    scanf("%lu", &num);
    printf("Repeated digit(s):");
    while (num > 0)
    {
        int digit = num % 10;
        if (!repeat[digit])
        {
            repeat[digit] = true;
        } else {
            printf("%2d", digit);
        }
        num /= 10;
    }
    printf("\n");
    

}