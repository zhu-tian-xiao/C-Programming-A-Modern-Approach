#include <stdio.h>
int main(void)
{
    float commission, value;
    
    int shares;
    float price;
    printf("Enter the number of shares: ");
    scanf("%d", &shares);
    printf("Enter price per share: ");
    scanf("%f", &price);
    value = shares * price;

    float commission2;
    if (shares < 2000)
    {
        commission2 = 33 + 0.01 * value;
    } else {
        commission2 = 33 + 0.02 * value;
    }
    
    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .0009f * value;
    if (commission < 39.00f)
        commission = 39.00f;
    printf("Commission: $%.2f\n", commission);
    printf("rival’s commission: $%.2f\n", commission2);
    return 0;
}