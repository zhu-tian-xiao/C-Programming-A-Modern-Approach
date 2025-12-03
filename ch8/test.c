#include <stdio.h>

void twoDArray(int (*a)[10])
{
    printf("%d\n", sizeof(*a));
}

int main()
{
    int a[3][10] = {1};
    twoDArray(a);
}