#include <stdio.h>
// n是最多存储的str的长度，不包括\0
int read_line(char str[], int n)
{
    int ch = 0;
    int i = 0;
    while ((ch = getchar()) != '\n')
    {
        if (i < n)
        {
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}

int main()
{
    char str[10];
    int length = read_line(str, sizeof(str) / sizeof(char) - 1);
    printf("the str: %s\n", str);
    printf("the length: %d\n", length);
}