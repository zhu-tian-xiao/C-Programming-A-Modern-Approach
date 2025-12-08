#include <stdio.h>
int main()
{
#ifdef DEBUG
    printf("%d\n", 1);
#endif
}