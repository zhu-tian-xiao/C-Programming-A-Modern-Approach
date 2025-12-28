// FINISH
#include <stdio.h>
int main()
{
    double e = 1;
    double ε;
    printf("Enter ε to count e: ");
    scanf("%lf", &ε);

    int division = 1;
    for(int i = 1;; i++)
    {
        division *= i;
        e += 1.0 / division;
        if (1.0 / division < ε)
        {
            break;
        }
    }

    printf("e ≈ %.7f\n", e);
}