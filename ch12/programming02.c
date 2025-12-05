#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
bool isPalindrome(char* first, char* end)
{
    while (first < end)
    {
        if (*first != *end)
        {
            return false;
        }
        first++;
        end--;
    }
    return true;
    
}
int main()
{
    printf("Enter a message: ");
    char ch;

    char message[100];

    char *p = message;
    while ((ch = getchar()) != '\n')
    {
        if (ch == ' ' || !isalpha(ch))
        {
            continue;
        }
        *p++ = ch;
    }
    *p = '\0';

    

    
}