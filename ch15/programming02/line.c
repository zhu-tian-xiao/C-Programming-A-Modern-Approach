
#include "line.h"

#include <stdbool.h>
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
// write_line需要将更多的空格放在前面，将更少的空格放在后边
void write_line() {
  static bool toggle = 0;
  int space_remaining = LINE_LEN - line_length + nums_word - 1;
  for (int i = 0; i < line_length; i++) {
    if (line[i] != ' ') {
      printf("%c", line[i]);
    } else {
      // 需要向上取整
      int nums_space = toggle == 0
                       ? (space_remaining + (nums_word - 2)) / (nums_word - 1)
                       : space_remaining / (nums_word - 1);
      
      for (int i = 0; i < nums_space; i++) {
        putchar(' ');
      }
      nums_word--;
      space_remaining -= nums_space;
    }
  }
  putchar('\n');
  toggle = !toggle;
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