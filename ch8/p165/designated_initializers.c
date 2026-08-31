#include <stdio.h>

/**
 * a: array a to print
 * n: size of a
 */
void print_integers(int a[], int n);

int main(void) {

  int a[15] = {[14] = 48, [9] = 7, [2] = 29};

  int b[] = {[5] = 10, [23] = 13, [11] = 36, [15] = 29};

  int c[10] = {5, 1, 9, [4] = 3, 7, 2, [8] = 6};

  print_integers(a, sizeof(a)/ sizeof(a[0]));
  print_integers(b, sizeof(b)/ sizeof(b[0]));
  print_integers(c, sizeof(c)/ sizeof(c[0]));
}

void print_integers(int a[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  putchar('\n');
}