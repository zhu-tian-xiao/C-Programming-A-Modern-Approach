#include <stdio.h>
int main() 
{
    // 错误的写法
    char *p;
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