#include <string.h>
#include <stdio.h>

char *my_strcat(char *s1, const char *s2)
{
    char* p = s1;
    while (*s1)
    {
        s1++;
    }
    while (*s1++ = *s2++)
        ;
    return p;
}
int main()
{
    char a[100] = "hello ";
    char b[200] = "world";
    my_strcat(a, b);
    printf("%s\n", a);
}