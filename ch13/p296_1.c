#include <stdio.h>

size_t my_strlen(const char *s)
{
    int count = 0;
    while (*s++)
    {
        ++count;
    }
    return count;
}

size_t my_strlen2(const char *s)
{
    const char *p = s;
    while (*s)
        ++s;
    return s - p;
}
int main()
{
    char str[] = "hello";
    printf("str length: %ld\n", my_strlen(str));
    printf("str length: %ld\n", my_strlen2(str));
}