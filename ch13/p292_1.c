#include <stdio.h>
#include <string.h>
int main()
{
    char str1[8] = "hello";
    char str2[] = "world";
    
    // 错误的方式
    // strcat(str1, str2);
    // printf("str1: %s\n", str1);

    strncat(str1, str2, sizeof(str1) - sizeof(str2));
    printf("str1: %s\n", str1);
}