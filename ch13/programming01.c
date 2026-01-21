// FINISH
#include <stdio.h>
#include <string.h>
#define WORD_LEN 20
int main() {
  char smallestWord[WORD_MAX_LEN + 1];
  char largestWord[WORD_MAX_LEN + 1] = {0};
  // 初始化最小的和最大的word
  for (int i = 0; i < WORD_MAX_LEN; i++) {
    smallestWord[i] = 'z';
  }

  char word[WORD_MAX_LEN + 1];

  for (;;) {
    printf("Enter word: ");
    // fgets也可以使用但是需要修改逻辑
    // fgets(word, WORD_LEN + 1, stdin);
    scanf("%20s", word);
    if (strlen(word) == 4) {
      break;
    }

    if (strcmp(word, smallestWord) < 0) {
      strcpy(smallestWord, word);
    }

    if (strcmp(word, largestWord) > 0) {
      strcpy(largestWord, word);
    }
  };
  putchar('\n');
  printf("Smallest word: %s\n", smallestWord);
  printf("Largest word: %s\n", largestWord);
}