#include <stdio.h>

int add();

int main(void) {
  int c = add(1, 2);
  printf("%d\n", c);
}
int add(int a, int b) {
  return a + b;
}