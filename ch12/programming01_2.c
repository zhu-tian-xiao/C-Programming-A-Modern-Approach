#include <stdio.h>
void printReverseSentence(char sentence[], int end)
{
    for (int i = end - 1; i >= 0; i--)
    {
        printf("%c", sentence[i]);
    }
    
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
    printReverseSentence(sentence, i);
    putchar('\n');

    
    
}