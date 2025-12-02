#include <stdio.h>

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
    printf("In lowest terms: %d/%d\n", n / gcd(n, d), d / gcd(n, d));

}