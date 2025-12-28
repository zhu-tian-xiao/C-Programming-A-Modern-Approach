// FINISH
#include <stdio.h>
int main()
{
    int month = 0, day = 0, year = 0;
    printf("Enter a date (mm/dd/yyyy): ");
    // 注意这里对%d之后加一个空格保证任意的空格都可以符合条件
    scanf("%d /%d /%d", &month, &day, &year);
    printf("You entered the date %4d%.2d%.2d\n", year, month, day);
}