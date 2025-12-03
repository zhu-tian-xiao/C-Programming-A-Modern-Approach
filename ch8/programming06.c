#include <stdio.h>
#include <ctype.h>

void readMessage(char* message)
{
    char ch;
    while ((ch = getchar()) != '\n')
    {
        *message++ = ch;
    }
    *message = '\0';
}
int main()
{
    printf("Enter message: ");
    char message[100];
    readMessage(message);

    char *p = message;
    while (*p)
    {
        *p = toupper(*p);
        switch (*p)
        {
        case 'A':
            *p = '4';
            break;
        case 'B':
            *p = '8';
            break;
        case 'E':
            *p = '3';
            break;
        case 'I':
            *p = '1';
            break;
        case 'O':
            *p = '0';
            break;
        case 'S':
            *p = '5';
            break;
        default:
            break;
        }
        p++;
    }

    for (int i = 0; i < 10; i++)
    {
        *p++ = '!';
    }
    *p = '\0';
    printf("In B1FF-speak: %s\n", message);
}