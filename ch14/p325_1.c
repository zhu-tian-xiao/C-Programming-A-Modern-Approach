#include <stdio.h>
#define GENERIC_MAX(type) \
type type##_max(type x, type y) \
{ \
return x > y ? x : y; \
}

GENERIC_MAX(int)
int main()
{
    int i = 1;
    int y = 1;
    printf("%d\n", int_max(++i, y));
}