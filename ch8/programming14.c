#include <stdio.h>
#include <string.h>
#include <stdbool.h>
void readSentence(char *sentence)
{
    char ch;
    int i = 0;
    while ((ch = getchar()) != '?')
    {
        sentence[i++] = ch;
    }
    sentence[i] = '\0';
}
int main()
{
    char sentence[100];
    printf("Enter a sentence: ");
    readSentence(sentence);

    char words[20][10] = {0};

    int i = 0;
    int offset = 0;
    while (sscanf(sentence + offset, "%s", words[i]) == 1)
    {
        offset += strlen(words[i++]);

        // 跳过空白
        while (sentence[offset] == ' ')
            offset++;
    }

    printf("Reversal of sentence: ");
    bool flag = false;
    for (int i = 19; i >= 0; i--)
    {
        if (*words[i] != '\0')
        {
            if (!flag)
            {
                flag = true;
                printf("%s", words[i]);
                continue;
            }
            printf(" %s", words[i]);
        }
    }
    printf("?\n");
}