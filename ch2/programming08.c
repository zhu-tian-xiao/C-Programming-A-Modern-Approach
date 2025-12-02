#include <stdio.h>
int main()
{
    double loan;
    double rate;
    double payment;
    printf("Enter amount of loan: ");
    scanf("%lf", &loan);
    printf("Enter interest rate: ");
    scanf("%lf", &rate);
    printf("Enter monthly payment: ");
    scanf("%lf", &payment);

    for (int i = 0; i < 4; i++)
    {
        printf("Balance remaining after %d payment: ", i + 1);
        loan = loan + loan * 6 / 12 / 100 - payment;
        printf("$%.2f\n", loan);
    }
    
    

}