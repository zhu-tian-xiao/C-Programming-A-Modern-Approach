#include <stdio.h>
#define N 10
int main() {
  double ident[N][N];
  int row, col;
  for (row = 0; row < N; row++) {
    for (col = 0; col < N; col++) {
      if (row == col) {
        ident[row][col] = 1.0;
      } else {
        ident[row][col] = 0.0;
      }
    }
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("%3.1f ", ident[i][j]);
    }
    printf("\n");
  }
}