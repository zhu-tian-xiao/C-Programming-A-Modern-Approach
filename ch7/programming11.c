#include <stdio.h>
int main()
{
    printf("Enter a first and last name: ");
    char firstName[20];
    char secondName[20];
    scanf("%s %s", firstName, secondName);
    printf("%s, %c\n", secondName, firstName[0]);
}