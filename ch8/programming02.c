// Modify the repdigit.c program of Section 8.1 so that it prints a table showing how
// many times each digit appears in the number:

#include <stdbool.h>
#include <stdio.h>
int main() {
  unsigned long num;
  int repeat[10] = {0};

  printf("Enter a number: ");
  scanf("%lu", &num);

  do {
    int digit = num % 10;
    repeat[digit]++;
    num /= 10;
  } while (num > 0);

  printf("%-12s", "Digit:");
  for (size_t i = 0; i < 10; i++) {
    printf("%2lu", i);
  }
  printf("\n");

  printf("%-12s", "Occurrences:");
  for (size_t i = 0; i < 10; i++) {
    printf("%2d", repeat[i]);
  }
  printf("\n");
}