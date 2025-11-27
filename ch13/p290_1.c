#include <string.h>
#include <stdio.h>
int main()
{
    char str[20];
    strcpy(str, "hello world!");
    printf("str: %s\n", str);


    char str1[3];
    char str2[6] = "hello";
    strncpy(str1, str2, sizeof(str1) - 1);
    str1[sizeof(str1) - 1] = '\0';
    printf("str: %s\n", str1);

}