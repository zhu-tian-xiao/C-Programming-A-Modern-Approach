// FINISH
#include <stdio.h>
#include <ctype.h>
int main()
{
    printf("Enter a sentence: ");
    char ch;
    int count = 0;
    while ((ch = toupper(getchar())) != '\n')
    {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            count++;
        }
        
    }
    printf("Your sentence contains %d vowels.\n", count);
    
}   