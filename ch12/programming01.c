#include <stdio.h>
void reverseSentence(char* first, char* end);
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

    reverseSentence(sentence, &sentence[i - 1]);
    printf("Reversal is: %s\n", sentence);

    
    
}

void reverseSentence(char* first, char  *end)
{
    while (first < end)
    {
        int temp = *first;
        *first = *end;
        *end = temp;
        first++;
        end--;
    }
    
}