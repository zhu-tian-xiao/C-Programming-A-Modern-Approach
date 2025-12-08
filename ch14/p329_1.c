#include <stdio.h>
int main()
{
    printf("Wacky Windows (c) 2010 Wacky Software, Inc.\n");
    printf("%s has %d lines\n", __FILE__, __LINE__);
    printf("Compiled on %s at %s\n", __DATE__, __TIME__);
    printf("Standard: %s\n", __STDC__ ? "C89/C99" : "not C89/C99");
}