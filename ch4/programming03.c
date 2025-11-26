#include <stdio.h>
int main()
{
    int d1, d2, d3;
    printf("Enter a 3-digit number: ");
    scanf("%1d%1d%1d", &d1, &d2, &d3);
    printf("The reversal: %1d%1d%1d\n", d3, d2, d1);
}