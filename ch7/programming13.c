#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int main()
{
    printf("Enter a sentence: ");
    char ch;

    int wordLength = 0;
    int wordCount = 0;
    double averageLength = 0;
    double sumLength = 0;
    bool flag = false;
    while ((ch = getchar()) != '\n')
    {
        if (isalpha((unsigned char)(ch)))
        {
            ++wordLength;
            flag = true;
        }
        else if (ch == ' ')
        {
            if (!flag)
            {
                continue;
            }
            ++wordCount;
            sumLength += wordLength;
            printf("The word is %d long\n", wordLength);
            wordLength = 0;
            
        } else {
            if (!flag)
            {
                continue;
            }
            flag = false;
            ++wordCount;
            sumLength += wordLength;
            printf("The word is %d long\n", wordLength);
            wordLength = 0;
        } 
    }
    averageLength = sumLength / wordCount;
    printf("Average word length: %lf\n", averageLength);
    
}