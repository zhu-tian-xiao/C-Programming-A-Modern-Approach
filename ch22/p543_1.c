#include <stdio.h>
int main()
{
    FILE* fp = fopen("/mnt/d/Project/Tutorial/c/ch22/p541_1/demo.c", "r");
    if (!fp)
    {
        printf("wrong file\n");
    }
    
}