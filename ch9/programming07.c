#include <stdio.h>

double power(double x, int n);
int main() {
  printf("Enter x and n: ");
  double x;
  int n;
  scanf("%lf %d", &x, &n);
  printf("x^n = %g\n", power(x, n));
}
double power(double x, int n) {
  if (n == 0) {
    return 1;
  }
  if (n % 2) {
    return power(x, n - 1) * x;
  } else {
    double ret = power(x, n / 2);
    return ret * ret;
  }
}