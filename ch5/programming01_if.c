// FINISH
#include <stdio.h>
int main() {
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);
  printf("The number %d has ", number);
  if (number < 10) {
    printf("1");
  } else if (number < 100) {
    printf("2");
  } else {
    printf("3");
  }
  printf(" digits.\n");
}