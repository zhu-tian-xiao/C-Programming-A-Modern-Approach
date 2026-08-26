// Write a single expression whose value is either –1, 0, or +1, depending on whether i is less
// than, equal to, or greater than j, respectively.

// (i > j) - (i < j)
#include <stdbool.h>
#include <stdio.h>
int main(void) {
  int i, j;
  printf("Enter two integers for comparison: ");
  scanf("%d%d", &i, &j);
  while (true) {
    switch ((i > j) - (i < j)) {
      case 1:
        printf("i is greater than j\n");
        break;
      case 0:
        printf("i is equal to j\n");
        break;
      case -1:
        printf("i is less that j\n");
        break;
      default:
        break;
    }
    printf("Enter two integers for comparison: ");
    scanf("%d%d", &i, &j);
  }
}