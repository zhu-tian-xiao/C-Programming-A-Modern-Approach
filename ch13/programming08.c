// Modify Programming Project 5 from Chapter 7 so that it includes the following
// function: int compute_scrabble_value(const char *word); The function returns
// the SCRABBLE value of the string pointed to by word.

#include <ctype.h>
#include <stdio.h>
#define WORD_LEN 10
int compute_scrabble_value(const char* word);
int read_word(char word[], int n);
int main() {
  printf("Enter a word to compute scrabble value: ");
  char word[WORD_MAX_LEN + 1];
  read_word(word, WORD_MAX_LEN);

  printf("%d\n", compute_scrabble_value(word));
}

int compute_scrabble_value(const char* word) {
  int sum = 0;
  while ((*word)) {
    switch (toupper(*word)) {
      case 'A':
      case 'E':
      case 'I':
      case 'L':
      case 'N':
      case 'O':
      case 'R':
      case 'S':
      case 'T':
      case 'U':
        sum += 1;
        break;
      case 'D':
      case 'G':
        sum += 2;
        break;
      case 'B':
      case 'C':
      case 'M':
      case 'P':
        sum += 3;
        break;
      case 'F':
      case 'H':
      case 'V':
      case 'W':
      case 'Y':
        sum += 4;
        break;
      case 'K':
        sum += 5;
        break;
      case 'J':
      case 'X':
        sum += 8;
        break;
      case 'Q':
      case 'Z':
        sum += 10;
        break;
      default:
        break;
    }
    word++;
  }
  return sum;
}

int read_word(char word[], int n) {
  char ch;
  int nums_read = 0;
  while ((ch = getchar()) != '\n' && nums_read < n) {
    word[nums_read++] = ch;
  }
  return nums_read;
}