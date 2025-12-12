#include <stdio.h>
int main()
{
    // 4 2 8 4 8 16
    printf("%lu ", sizeof(int));
    printf("%lu ", sizeof(short));
    printf("%lu ", sizeof(long));
    printf("%lu ", sizeof(float));
    printf("%lu ", sizeof(double));
    printf("%lu\n", sizeof(long double));
}