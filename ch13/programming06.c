#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define NUM_PLANETS 9
#define MAX_LEN 20
char* toupperString(char* str, char* dest) {
    char* p = dest;
    char* q = str;
    while (*str && str - q <= MAX_LEN) {
        *dest++ = toupper(*str);
        str++;
    }
    *dest = '\0';
    return p;
}
int main(int argc, char *argv[]) {

    char *planets[] = {"Mercury", "Venus", "Earth",
                       "Mars", "Jupiter", "Saturn",
                       "Uranus", "Neptune", "Pluto"};
    int i, j;

    char str1[MAX_LEN + 1];
    char str2[MAX_LEN + 1];
    for (i = 1; i < argc; i++) {
        for (j = 0; j < NUM_PLANETS; j++)
            if (strcmp(toupperString(argv[i], str1), toupperString(planets[j], str2)) == 0) {
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }
        if (j == NUM_PLANETS)
            printf("%s is not a planet\n", argv[i]);
    }
    return 0;
}