#include <stdio.h>
int main()
{
    int itemNumber = 0;
    float unitPrice = 0.0f;
    int month = 0, day = 0, year = 0;
    printf("Enter item number: ");
    scanf("%d", &itemNumber);
    printf("Enter unit price: ");
    scanf("%f", &unitPrice);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\tUnit\t\tPurchase\n\tPrice\t\tDate\n"
           "%d\t$%7.2f\t%2.2d/%2.2d/%4.4d\n",
           itemNumber, unitPrice, month, day, year);
}