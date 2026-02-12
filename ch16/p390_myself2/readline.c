#include "readline.h"

#include <ctype.h>
#include <stdio.h>

int read_line(char str[], int n) {
  int ch;
  while (isspace(ch = getchar()))
    ;
  
  int i = 0;
  while (ch != '\n' && ch != EOF)
  {
    if (i < n) {
      str[i++] = ch;
    }
    ch = getchar();
  }
  str[i] = '\0';
  return i;
}