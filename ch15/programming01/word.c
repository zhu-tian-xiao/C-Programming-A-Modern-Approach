#include "word.h"

#include <stdio.h>
int read_char() {
  char ch = getchar();
  if (ch == '\t' || ch == ' ' || ch == '\n') {
    return ' ';
  }
  return ch;
}

int read_word(char word[], int n) {
  int position = 0;
  int ch;
  while ((ch = read_char()) == ' ')
    ;
  while (ch != ' ' && ch != EOF) {
    if (position < n) {
      word[position++] = ch;
    }

    ch = read_char();
  }
  word[position] = '\0';
  return position;
}