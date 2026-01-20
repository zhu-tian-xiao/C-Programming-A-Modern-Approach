#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define NUM_PLANETS 9
#define MAX_LEN 20
char* str_toupper(char* str) {
  char *p = str;
  while (*p) {
    *p = toupper((unsigned char)*p);
    p++;
  }
  return str;
}
int main(int argc, char* argv[]) {
  // 不应当修改字面量
  char* planets[] = {"MERCURY", "VENUS",  "EARTH",   "MARS", "JUPITER",
                     "SATURN",  "URANUS", "NEPTUNE", "PLUTO"};
  int i, j;

  for (i = 1; i < argc; i++) {
    for (j = 0; j < NUM_PLANETS; j++) {
      if (strcmp(str_toupper(argv[i]), planets[j]) == 0) {
        printf("%s is planet %d\n", argv[i], j + 1);
        break;
      }
    }
    if (j == NUM_PLANETS) {
      printf("%s is not a planet\n", argv[i]);
    }
  }
  return 0;
}