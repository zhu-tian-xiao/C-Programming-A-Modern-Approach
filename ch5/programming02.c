#include <stdio.h>
#include <stdlib.h>

// 计算公式如下
// if (hour < 11)
//     printf("Equivalent 12-hour time: %d:%d AM\n",
//             (hour == 0 || hour == 24) ? 12 : hour, minute);
// else
//     printf("Equivalent 12-hour time: %d:%d PM\n",
//            hour == 12 ? 12 : hour - 12, minute);
int main()
{
    printf("Enter a 24-hour time: ");
    int hour;
    int minute;
    scanf("%d:%d", &hour, &minute);
    int formatHour;
    int formatMinute;
    char sign = 'A';
    // 处理特殊情况
    if (hour < 0 || hour > 24 || minute < 0 || minute >= 60)
    {
        printf("wrong time!\n");
        exit(EXIT_FAILURE);
    }
    // 处理特殊情况
    if (hour == 24 && minute != 0)
    {
        printf("wrong time!\n");
        exit(EXIT_FAILURE);
    }

    if ((hour == 0) || (hour == 24))
    {
        formatHour = 12;
        formatMinute = minute;
        sign = 'A';
    }
    else if (hour == 12)
    {
        formatHour = 12;
        formatMinute = minute;
        sign = 'P';
    }
    else if (hour < 12)
    {
        formatHour = hour;
        formatMinute = minute;
        sign = 'A';
    }
    else
    {
        formatHour = hour - 12;
        formatMinute = minute;
        sign = 'P';
    }

    printf("Equivalent 12-hour time: %2.2d:%2.2d %cM\n", formatHour, formatMinute, sign);
}