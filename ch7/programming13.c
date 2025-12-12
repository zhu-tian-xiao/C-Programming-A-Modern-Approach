#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int main()
{
    printf("Enter a sentence: ");
    char ch;

    int count = 0;
    double averageLength = 0;
    double sumLength = 0;
    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
            sumLength++;
        if (ch == ' ' || ch == '.')
            count++;
    }
    averageLength = sumLength / count;
    printf("Average word length: %.2lf\n", averageLength);
}