#include <stdio.h>
#include <stdbool.h>
int main()
{
    printf("Enter first date (mm/dd/yy): ");
    int month1, day1, year1;
    int month2, day2, year2;
    scanf("%d / %d / %d", &month1, &day1, &year1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d / %d / %d", &month2, &day2, &year2);

    bool flag;
    if (year1 < year2)
    {
        flag = true;
    }
    else if (year1 > year2)
    {
        flag = false;
    }
    else
    {
        if (month1 < month2)
        {
            flag = true;
        }
        else if (month1 > month2)
        {
            flag = false;
        }
        else
        {
            if (day1 < day2)
            {
                flag = true;
            }
            else if (day1 > day2)
            {
                flag = false;
            }
            else
            {
                printf("The two date are the same\n");
                return 0;
            }
        }
    }

    if (flag)
    {
        printf("%2.2d/%2.2d/%2.2d is earlier than %2.2d/%2.2d/%2.2d\n", month1, day1, year1, month2, day2, year2);
    }
    else
    {
        printf("%2.2d/%2.2d/%2.2d is earlier than %2.2d/%2.2d/%2.2d\n", month2, day2, year2, month1, day1, year1);
    }
}