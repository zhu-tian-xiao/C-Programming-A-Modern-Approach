// FINISH
#include <stdio.h>
#include <ctype.h>
#define MAX_DIGITS 10
char *digitDisplay[10][3] =
    {
        {" _  ",
         "| | ",
         "|_| "},
        {"    ",
         "  | ",
         "  | "},
        {" _  ",
         " _| ",
         "|_  "},
        {
            " _  ",
            " _| ",
            " _| ",
        },
        {"    ",
         "|_| ",
         "  | "},
        {" _  ",
         "|_  ",
         " _| "},
        {" _  ",
         "|_  ",
         "|_| "},
        {" _  ",
         "  | ",
         "  | "},
        {" _  ",
         "|_| ",
         "|_| "},
        {" _  ",
         "|_| ",
         " _| "}};

void initNumber(char number[])
{
    printf("Enter a number: ");
    char ch;
    int i = 0;
    while ((ch = getchar()) != '\n')
    {
        if (ch >= '0' && ch <= '9')
            number[i++] = ch;
    }
}
int main()
{
    
    char number[20] = {0};
    initNumber(number);
    for (int i = 0; i < 3; i++)
    {
        char *p = number;
        while (*p)
            printf("%s", digitDisplay[*p++ - '0'][i]);
        putchar('\n');
    }
}