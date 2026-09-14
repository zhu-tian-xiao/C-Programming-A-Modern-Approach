#include <stdio.h>
#define LEN 2

int sum_two_dimensional_array(int a[][LEN], int n) {
  int sum = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < LEN; j++) {
      sum += a[i][j];
    }
  }
  return sum;
}

int main() {
  int a[3][LEN] = {1, 2, 3, 4, 5, 6};
  printf("%d\n", sum_two_dimensional_array(a, sizeof(a) / sizeof(a[0])));
}