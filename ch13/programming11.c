#include <stdio.h>
#include <string.h>
#define SENTENCE_LEN 50
#define WORD_LEN 10
void read_sentence(char sentence[], int n);
double compute_average_word_length(const char* sentence);
int main() {
  printf("Enter a sentence: ");
  char sentence[SENTENCE_LEN + 2];
  read_sentence(sentence, sizeof sentence);

  printf("Average word length: %.1f\n", compute_average_word_length(sentence));
}
void read_sentence(char sentence[], int n) {
  fgets(sentence, n, stdin);
  sentence[strcspn(sentence, "\n")] = '\0';
}
double compute_average_word_length(const char* sentence) {
  char word[WORD_MAX_LEN + 1];

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