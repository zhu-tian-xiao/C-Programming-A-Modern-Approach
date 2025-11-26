#include <stdio.h>
int main()
{
    int i, j;
    float x, y;
    i = 10;
    j = 20;
    x = 43.2892f;
    y = 5527.0f;
    // %f 保留6位小数
    printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);

    int res = printf("123456\n");
    printf("%d", res);
}