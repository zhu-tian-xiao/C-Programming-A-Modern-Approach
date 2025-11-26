#include <stdio.h>
int main()
{
    int month = 0, day = 0, year = 0;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("You entered the date %4d%2.2d%2.2d\n", year, month, day);
}