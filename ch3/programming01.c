// Write a program that accepts a date from the user in the form mm/dd/yyyy and then dis-
// plays it in the form yyyymmdd:
#include <stdio.h>
int main()
{
    int month = 0, day = 0, year = 0;
    printf("Enter a date (mm/dd/yyyy): ");
    // 注意这里对%d之后加一个空格保证任意的空格都可以符合条件
    scanf("%d /%d /%d", &month, &day, &year);
    printf("You entered the date %4d%.2d%.2d\n", year, month, day);
}