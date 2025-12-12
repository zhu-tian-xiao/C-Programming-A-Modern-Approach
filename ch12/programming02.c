#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
bool isPalindrome(char *first, char *end)
{

    for (; first < end; first++, end--)
    {
        if (*first != *end)
            return false;
    }
    return true;
}
int main()
{
    printf("Enter a message: ");
    char ch;

    char message[100];

    char *p = message;
    while ((ch = toupper(getchar())) != '\n')
        if (isalpha(ch))
            *p++ = ch;
    *p = '\0';

    // printf("%s", message);
    if (isPalindrome(message, p - 1))
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");
}