#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &number);

    int remainder = number;
    int octalNumber = 0;
    int tenExponent = 1;

    while (remainder)
    {
        octalNumber += (remainder % 8) * tenExponent;
        remainder /= 8;
        tenExponent *= 10;
    }

    // printf("In octal, your number is: %5.5o\n", number);
    // printf("In octal, your number is: %d%d%d%d%d\n",
    //    (number/4096)%8,
    //    (number/512)%8,
    //    (number/64)%8,
    //    (number/8)%8,
    //    number%8);
    printf("In octal, your number is: %5.5d\n", octalNumber);
}