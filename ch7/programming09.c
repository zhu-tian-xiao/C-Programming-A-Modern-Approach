#include <stdio.h>

int main()
{
    printf("Enter a 12-hour time: ");
    char P_A;
    int hour;
    int minute;
    scanf("%d:%d %c", &hour, &minute, &P_A);
    printf("Equivalent 24-hour time: ");

    if (hour < 0 || hour > 11 || minute < 0 || minute > 60)
    {
        printf("wrong format\n");
        return 0;
    }
    else if (P_A == 'p' || P_A == 'P')
    {
        printf("%d:%d\n", hour + 12, minute);
    }
    else if (P_A == 'a' || P_A == 'A')
    {
        printf("%d:%d\n", hour, minute);
    }
    else
    {
        printf("wrong format\n");
    }
}