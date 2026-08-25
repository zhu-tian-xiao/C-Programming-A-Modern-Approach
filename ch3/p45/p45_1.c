#include <stdio.h>

int main() {
    int i, j;
    // scanf返回成功读取并存入变量的个数
    int num = scanf("%d/%d", &i, &j);
    printf("%d\n", num);
    // 错误的方式
    // scanf("%d%d\n", &i, &j);
    // printf("%d|%d\n", i, j);
}