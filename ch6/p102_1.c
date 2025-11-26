#include <stdio.h>
int main()
{
    printf("The program prints a table of squares\n");
    printf("Enter number of entries in table: ");
    int n;
    scanf("%d", &n);
    int iter = 1;
    while (iter <= n)
    {
        printf("\t%4d\t%6d\n", iter, iter * iter);
        ++iter;
    }
}