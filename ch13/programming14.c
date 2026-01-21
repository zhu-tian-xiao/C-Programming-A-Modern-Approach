// FINISH
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#define WORD_LEN 30
bool are_anagrams(const char* word1, const char* word2);

void readWord(char* word) {
  char buffer[WORD_MAX_LEN + 2];
  fgets(buffer, sizeof(buffer), stdin);
  buffer[strcspn(buffer, "\n")] = '\0';
  strcpy(word, buffer);
}
int main() {
  char word1[WORD_MAX_LEN + 1] = {0};
  char word2[WORD_MAX_LEN + 1] = {0};

  for (;;) {
    printf("Enter first word: ");
    readWord(word1);
    printf("Enter second word: ");
    readWord(word2);
    if (are_anagrams(word1, word2)) {
      printf("The words are anagrams.\n");
    } else {
      printf("The words are not anagrams.\n");
    }
    putchar('\n');
  }
}
// Enter first word: smartest
// Enter second word: mattress
// The words are anagrams.
// Enter first word: dumbest
// Enter second word: stumble
// The words are not anagrams.

bool are_anagrams(const char* word1, const char* word2) {
  if (strlen(word1) != strlen(word2)) {
    return false;
  }

  const char* p1 = word1;
  const char* p2 = word2 + strlen(word2) - 1;
  for (; *p1; p1++, p2--) {
    if (*p1 != *p2) {
      return false;
    }
  }

  return true;
}