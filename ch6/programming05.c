#include <stdio.h>
int main()
{
    unsigned long num;
    printf("Enter a number: ");
    scanf("%lu", &num);
    printf("Reverse number: ");
    do
    {
        printf("%lu", num % 10);
        num /= 10;
    } while (num);
    printf("\n");
    
}