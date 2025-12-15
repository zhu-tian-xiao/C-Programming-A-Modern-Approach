#include <ctype.h>
#include <stdio.h>
#define LEN 100
int compute_vowel_count(const char* sentence);
int main() {
  printf("Enter a sentence: ");

  char sentence[LEN + 1];
  int count = 0;

  if (fgets(sentence, sizeof sentence, stdin)) {
    printf("Your sentence contains %d vowels.\n",
           compute_vowel_count(sentence));
  }

}

int compute_vowel_count(const char* sentence) {
  int count = 0;
  char ch;
  while (*sentence) {
    ch = toupper(*sentence);
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
      count++;
    }
    sentence++;
  }
  return count;
}