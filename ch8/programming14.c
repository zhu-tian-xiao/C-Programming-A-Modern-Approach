// FINISH
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
int readSentence(char* sentence) {
  char ch;
  int i = 0;
  while ((ch = getchar()) != '?') {
    sentence[i++] = ch;
  }
  sentence[i] = '\0';
  getchar();
  return i;
}

void printWord(char sentence[], int i) {
  while (sentence[i] != ' ' && sentence[i] != 0) {
    printf("%c", sentence[i++]);
  }
}
int main() {
  char sentence[100];
  printf("Enter a sentence: ");
  int sentenceFinish = readSentence(sentence);
  printf("Reversal of sentence: ");
  while (--sentenceFinish >= 0) {
    if (sentence[sentenceFinish] == ' ') {
      printWord(sentence, sentenceFinish + 1);
      putchar(' ');
    } else if (sentenceFinish == 0)
    {
      printWord(sentence, sentenceFinish);
      printf("?\n");
    }
    
  }
}