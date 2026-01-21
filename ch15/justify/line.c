#include "line.h"

#include <stdio.h>
#include <string.h>
#define LINE_LEN 60
char line[LINE_LEN + 1];
int line_length = 0;
int nums_word = 0;
void clear_line() {
  line[0] = '\0';
  nums_word = 0;
  line_length = 0;
}

void flush_line() { printf("%s\n", line); }

void write_line() {
  int space_remaining = LINE_LEN - line_length + nums_word - 1;
  for (int i = 0; i < line_length; i++) {
    if (line[i] != ' ') {
      printf("%c", line[i]);
    } else {
      int nums_space = space_remaining / (nums_word - 1);
      for (int i = 0; i < nums_space; i++) {
        putchar(' ');
      }
      nums_word--;
      space_remaining -= nums_space;
    }
  }
  putchar('\n');
}

void append_word(char word[]) {
  if (nums_word != 0) {
    line[line_length++] = ' ';
  }

  strcpy(line + line_length, word);
  line_length += strlen(word);
  nums_word++;
}

int space_remaining() { return LINE_LEN - line_length; }