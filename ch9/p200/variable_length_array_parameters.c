#include <stdio.h>

int sum_two_dimensional_array(int n, int m, int a[n][m]) {
  int i, j, sum = 0;

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      sum += a[i][j];
    }
  }

  return sum;
}

int main(void) {
  int a[3][5] = {[0][1] = 2, [1][1] = 17, [2][4] = 23};
  int b[2][3] = {[0][2] = 3, [1][1] = 5};

  printf("%d\n", sum_two_dimensional_array(3, 5, a));
  printf("%d\n", sum_two_dimensional_array(2, 3, b));
}