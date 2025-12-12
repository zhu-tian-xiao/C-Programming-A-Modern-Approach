#include <stdio.h>
void printReverseSentence(char* first, char* end)
{
    while (end-- > first)
        printf("%c", *end);
    
    
}
int main()
{
    printf("Enter a message: ");
    char sentence[100];
    char ch;
    int i;
    while ((ch = getchar()) != '\n')
    {
        sentence[i++] = ch;
    }
    sentence[i] = '\0';

    printf("Reversal is: ");
    printReverseSentence(sentence, &sentence[i]);
    putchar('\n');

    
    
}