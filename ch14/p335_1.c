#define DEBUG
#include <stdio.h>
int main()
{
    int i = 3;
    int j = 4;
#if defined(DEBUG)
    printf("Value of i: %d\n", i);
    printf("Value of j: %d\n", j);
#endif

#ifdef DEBUG
    printf("Value of i: %d\n", i);
    printf("Value of j: %d\n", j);
#endif
}