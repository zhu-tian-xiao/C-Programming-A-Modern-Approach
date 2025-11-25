#include <stdio.h>
#define SENT_LEN 10
int main()
{
    char sentence[SENT_LEN + 1];
    printf("Enter a sentence:\n");
    // scanf("%s", sentence);
    // gets is dangerous
    gets(sentence);
    printf("The sentence: ");
    printf("%s", sentence);
 
}