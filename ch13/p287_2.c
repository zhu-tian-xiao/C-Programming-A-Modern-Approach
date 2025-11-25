#include <stdio.h>
int count_space(const char s[])
{
    int count = 0;
    for (int i = 0; s[i] != '\0'; ++i)
    {
        if (s[i] == ' ')
        {
            ++count;
        }
        
    }
    return count;
    
}
int main()
{
    char str[] = "To be or not to be";
    printf("%d\n", count_space(str));
}