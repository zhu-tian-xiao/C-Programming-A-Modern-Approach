// FINISH
#include <stdio.h>

int main()
{
    int item = 0;
    float unit_price = 0.0f;
    int month = 0, day = 0, year = 0;
    printf("Enter item number: ");
    scanf("%d", &item);
    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d /%d /%d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n"
           "%d\t\t$%7.2f\t%.2d/%.2d/%.4d\n",
           item, unit_price, month, day, year);
}