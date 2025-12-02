#include <stdio.h>
int main()
{
    printf("Enter number of days in month: ");
    int dayCount;
    scanf("%d", &dayCount);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    int startingDay;
    scanf("%d", &startingDay);

    int spaceCount = startingDay * 3 - 3;
    while (spaceCount--)
    {
        printf(" ");
    }
    printf("%2d", 1);
    for (int i = 2; i <= dayCount; i++)
    {
        if ((i % 7 == (9 - startingDay) % 7))
        {
            printf("\n%2d", i);
        } else {
            printf("%3d", i);
        }
    }
    printf("\n");
    
    
    
}