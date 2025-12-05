#include <stdio.h>

void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator);

int gcd(int m, int n)
{
    while (n)
    {
        int r = m % n;
        m = n;
        n = r;
    }
    return m;
}
int main()
{
    int n, d;
    printf("Enter a fraction: ");
    scanf("%d / %d", &n, &d);

    int reducedNumerator;
    int reducedDenominator;
    reduce(n, d, &reducedNumerator, &reducedDenominator);

    printf("In lowest terms: %d/%d\n", reducedNumerator, reducedDenominator);
}

void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator)
{
    int common = gcd(numerator, denominator);
    *reduced_numerator = numerator / common;
    *reduced_denominator = denominator / common;
}