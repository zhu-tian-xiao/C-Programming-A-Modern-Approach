#include <stdio.h>

int sum_array(int a[], int n) {
  int sum = 0;

  for (int i = 0; i < n; i++) {
    sum += a[i];
  }

  return sum;
}

int main(void) {
  int total = sum_array((int []) {3, 0, 3, 4, 1}, 5);
  printf("%d\n", total);
}