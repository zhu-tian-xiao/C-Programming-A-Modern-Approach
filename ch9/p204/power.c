#include<stdio.h>

double power(double x, int n) {
  if (n == 0) {
    return 1;
  } else {
    return x * power(x, n -1);
  }
}

int main(void) {
  double x = 4.4;
  int n = 3;
  fprintf(stdout, "power(%.1f, %d): %.1f\n", x, n, power(x, n));
}