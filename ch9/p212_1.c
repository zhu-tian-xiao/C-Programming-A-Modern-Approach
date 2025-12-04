#include <stdio.h>
double inner(int a[2])
{
    a[1] = 2;
}
double outer()
{
    int c[3] = {0};
    inner(c);
}