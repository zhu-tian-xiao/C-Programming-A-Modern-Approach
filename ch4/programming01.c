#include <stdio.h>

int main()
{
    int n = 0;

    printf("Enter a two-digit number: ");
    scanf("%d", &n);

    printf("The reversal is: %d%d\n", n % 10, n / 10);
    // n-digit的情况
    // int number = 0;
    // printf("Enter a n-digit number: ");
    // scanf("%d", &number);
    // int reverseNumber = 0;
    // int remainder = number;
    // while (remainder)
    // {
    //     reverseNumber = reverseNumber * 10 + remainder % 10;
    //     remainder /= 10;
    // };
    // printf("The reversal: %d\n", reverseNumber);
}