#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define SENTENCE_LEN 30
#define WORD_LEN 20

int read_sentence(char (*sentence)[WORD_MAX_LEN + 1]);
void print_sentence(char (*sentence)[WORD_MAX_LEN + 1], int lastLocation);
void print_reverse_sentence(char (*sentence)[WORD_MAX_LEN + 1], int lastLocation);
int main() {
  printf("Enter a sentence: ");
  char sentence[SENTENCE_LEN][WORD_MAX_LEN + 1] = {0};
  int last_location = read_sentence(sentence);
  // print_sentence(sentence, last_location);
  printf("Reversal of sentence: ");
  print_reverse_sentence(sentence, last_location);
}
// 读取语句并且分离文字到数组
int read_sentence(char (*sentence)[WORD_MAX_LEN + 1]) {
  char(*s)[WORD_MAX_LEN + 1] = sentence;
  char buffer[WORD_MAX_LEN * SENTENCE_LEN + 2];
  fgets(buffer, sizeof(buffer), stdin);
  buffer[strcspn(buffer, "\n")] = '\0';

  char *p = buffer;

  int insert_location = 0;
  while (*p) {
    if (*p != ' ' && *p != '?') {
      (*sentence)[insert_location++] = *p;
    } else {
      (*sentence)[insert_location] = '\0';
      insert_location = 0;
      sentence++;
    }
    p++;
  }
  return sentence - s;
}

void print_sentence(char (*sentence)[WORD_MAX_LEN + 1], int lastLocation) {
  for (int i = 0; i < lastLocation; i++) {
    printf("%s\n", sentence[i]);
  }
}

void print_reverse_sentence(char (*sentence)[WORD_MAX_LEN + 1], int last_location) {
  for (int i = last_location; i > 1; i--) {
    printf("%s ", sentence[i - 1]);
  }
  printf("%s?\n", sentence[0]);
}