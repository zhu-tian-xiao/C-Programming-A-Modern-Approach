// FINISH
#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);
    while (n)
    {
        int r = m % n;
        m = n;         
        n = r;         
    }
    printf("Greatest common divisor: %d\n", m);
}