#include <stdio.h>
int main(int argc, char *argv[])
{
    printf("%d\n", argc);
    for (int i = 0; i < argc; i++)
        printf("%s\n", argv[i]);

    for (char **p = &argv[1]; *p != NULL; p++)
        printf("%s\n", *p);
}