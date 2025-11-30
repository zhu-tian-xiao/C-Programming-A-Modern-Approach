#include <stdio.h>
int main()
{
    printf("Enter a message: ");
    int count = 0;
    while (getchar() != '\n')
    {
        count++;
    }
    printf("Your message was %d character(s) long.\n", count);
}