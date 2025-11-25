#include <stdio.h>
int main()
{
    char str[] = "Are we having fun yet?";
    printf("%s\n", str);
    // puts has only one argument (the string to be printed). After writing the string,
    // puts always writes an additional new-line character, thus advancing to the begin-
    // ning of the next output line.
    puts(str);
    // we can use the conversion specification %.ps,
    // where p is the number of characters to be displayed.
    printf("%2.6s\n", str);
    printf("%9.6s\n", str);
    printf("%3s\n", str);
}