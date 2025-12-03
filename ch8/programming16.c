#include <stdio.h>
#include <stdbool.h>
bool isAnagrams(int* words)
{
    for (int i = 0; i < 26; i++)
    {
        if (words[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int words[26] = {0};

    printf("Enter first word: ");
    char ch;
    while ((ch = getchar()) != '\n')
    {
        words[ch - 97]++;
    }
    printf("Enter second word: ");
    while ((ch = getchar()) != '\n')
    {
        words[ch - 97]--;
    }
    
    isAnagrams(words) ? printf("The words are anagrams.\n") : printf("The words are not anagrams.\n");
}