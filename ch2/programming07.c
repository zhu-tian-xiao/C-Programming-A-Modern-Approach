#include <stdio.h>
int main()
{
    int amount;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);
    int remainAmount;
    int billsCount20 = amount / 20;
    remainAmount = amount % 20;
    int billsCount10 = remainAmount / 10;
    remainAmount = remainAmount % 10;
    int billsCount05 = remainAmount / 5;
    remainAmount = remainAmount % 5;
    int billsCount01 = remainAmount;
    printf("$%2d bills: %d\n", 20, billsCount20);
    printf("$%2d bills: %d\n", 10, billsCount10);
    printf("$%2d bills: %d\n", 5, billsCount05);
    printf("$%2d bills: %d\n", 1, billsCount01);

}