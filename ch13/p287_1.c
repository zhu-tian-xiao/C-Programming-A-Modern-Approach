#include <stdio.h>
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
    int length = read_line(str, sizeof(str) / sizeof(char));
    printf("the str: %s", str);
    printf(" the length: %d", length);
}