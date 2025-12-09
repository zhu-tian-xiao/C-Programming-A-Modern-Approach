#include <stdio.h>
#include <stdlib.h>
#define FILE_NAME "example.dat"
int main()
{
    FILE* fp = fopen(FILE_NAME, "r");
    if (!fp)
    {
        printf("can't open %s\n", FILE_NAME);
        // EXIT_FAILURE需要<stdlib.h>
        exit(EXIT_FAILURE);
    }
    fclose(fp);
}