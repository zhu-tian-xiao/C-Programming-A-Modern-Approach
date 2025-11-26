#include <stdio.h>
int main()
{
    int a = 0, b = 0;
    // 无意义的数字，每次运行都不同
    // printf("%d %d\n", a);
    // 多余的被忽略
    // printf("%d\n", a, b);

    float c = 1.0f;
    // 错误的写法 format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘double’
    printf("%d", c);
}