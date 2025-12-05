#include <stdio.h>

double computeValue(double x);
int main()
{
    printf("Enter a value for x.\n");
    double x;
    scanf("%lf", &x);
    printf("%f\n", computeValue(x));
}

double computeValue(double x)
{
    return 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;
}