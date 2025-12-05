#include <stdio.h>
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    int remainAmount;
    *twenties = dollars / 20;
    remainAmount = dollars % 20;
    *tens = remainAmount / 10;
    remainAmount = remainAmount % 10;
    *fives = remainAmount / 5;
    remainAmount = remainAmount % 5;
    *ones = remainAmount;
}
int main()
{
    int amount;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);
    int billsCount20, billsCount10, billsCount05, billsCount01;
    pay_amount(amount, &billsCount20, &billsCount10, &billsCount05, &billsCount01);

    
    printf("$%2d bills: %d\n", 20, billsCount20);
    printf("$%2d bills: %d\n", 10, billsCount10);
    printf("$%2d bills: %d\n", 5, billsCount05);
    printf("$%2d bills: %d\n", 1, billsCount01);

}