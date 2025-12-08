// #define DEBUG 1
#include <stdio.h>
int main()
{
    int i = 3;
    int j = 4;
#if DEBUG
    printf("Value of i: %d\n", i);
    printf("Value of j: %d\n", j);
#endif
}