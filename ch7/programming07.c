// FINISH
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
    printf("Enter two fractions separated by a sign: ");
    int n1, d1, n2, d2;
    scanf("%d / %d", &n1, &d1);

    char ch = getchar();
    scanf("%d / %d", &n2, &d2);

    int d;
    int n;
    int divider;
    switch (ch)
    {

    case '+':
        n = n1 * d2 + n2 * d1;
        d = d1 * d2;
        divider = gcd(d, n);
        d /= divider;
        n /= divider;
        break;
    case '-':
        n = n1 * d2 - n2 * d1;
        d = d1 * d2;
        divider = gcd(d, n);
        d /= divider;
        n /= divider;
        break;
    case '*':
        n = n1 * n2;
        d = d1 * d2;
        divider = gcd(d, n);
        d /= divider;
        n /= divider;
        break;
    case '/':
        n = n1 * d2;
        d = d1 * n2;
        divider = gcd(d, n);
        d /= divider;
        n /= divider;
        break;
    default:
        break;
    }
    printf("%d/%d\n", n, d);
}