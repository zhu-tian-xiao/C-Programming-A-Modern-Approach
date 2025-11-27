#include <stdio.h>

char* my_strcat(char* s1, const char* s2)
{
    char *s = s1;
    while (*s1)
    {
        s1++;
    }
    while (*s2)
    {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
    return s;
    
}
int main()
{
    char s1[20] = "hello ";
    char s2[] = "world";
    my_strcat(s1, s2);
    printf("strcat s1: %s\n", s1);
}