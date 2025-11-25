#include <stdio.h>
int main()
{
    // 错误的写法
    char *p;
    // This assignment doesn’t copy the characters in "abc"; it merely makes p point to
    // the first character of the string.
    p = "abc";
    *p = 'd';
    char *f = p;
    while (p < f + 4)
    {
        printf("%c\n", *p++);
    }

    char a[] = "abc";
    char *p = a;
    while (p < a + 4)
    {
        printf("%c\n", *p++);
    }
}