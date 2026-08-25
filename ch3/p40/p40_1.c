/* Prints int and float values in various formats */
#include <stdio.h>
int main(void)
{
    int i;
    float x;
    i = 40;
    x = 839.21f;
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    // 对于%g来说，p指的是the maximum number of significant digits
    printf("|%10.3f|%10.3e|%-10.4g|\n", x, x, x);
    return 0;   
}