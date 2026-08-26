// If the user enters
// 10.3 5 6
// what will be the values of i, x, and j after the call? (Assume that i and j are int variables
// and x is a float variable.)
#include <stdio.h>

int main(void) {
  int i;
  float x;
  int j;
  scanf("%d%f%d", &i, &x, &j);
  printf("%d %f %d\n", i, x, j);
}