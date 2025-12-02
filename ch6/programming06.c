#include <stdio.h>
int main()
{
    int top;
    printf("Enter a number: ");
    int i = 1;
    scanf("%d", &top);
    while (i * i <= top)
    {
        if (!(i % 2))
        {
            printf("%d\n", i * i);
        }
        ++i;
    }
    
}