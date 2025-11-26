#include <stdio.h>


int main()
{
    // n-digit
    int n = 0;
    int number = 0;
    printf("Enter a n-digit number: ");
    scanf("%d", &number);
    int reverseNumber = 0;
    int remainder = number;
    do
    {
        reverseNumber = reverseNumber * 10 + remainder % 10;
    } while (remainder /= 10);
    printf("The reversal: %d\n", reverseNumber);
}