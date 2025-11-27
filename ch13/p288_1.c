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
int count_space(const char* s)
{
    int count = 0;
    while (*s)
    {
        if(*s == ' '){
            ++count;
        }
        ++s;
    }
    return count;
}

int main()
{
    char str[20];
    printf("Enter your string: ");
    read_line(str, sizeof(str) / sizeof(str[0]) - 1);
    
    printf("The string has %d spaces\n", count_space(str));
}