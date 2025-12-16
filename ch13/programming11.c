#include <stdio.h>
#include <string.h>
#define SENTENCE_LEN 50
#define WORD_LEN 10

double compute_average_word_length(const char* sentence);
int main() {
  char sentence[SENTENCE_LEN + 2];
  fgets(sentence, sizeof(sentence), stdin);
  sentence[strcspn(sentence, "\n")] = '\0';
  printf("%f\n", compute_average_word_length(sentence));
}

double compute_average_word_length(const char* sentence) {
  char word[WORD_LEN + 1];

  int count = 0;
  int consumed = 0;

  double length = 0;

  const char *p = sentence;
  while (sscanf(p, "%10s%n", word, &consumed) == 1) {
    count++;
    length += strlen(word);
    p += consumed;
  }

  return length / count;
}