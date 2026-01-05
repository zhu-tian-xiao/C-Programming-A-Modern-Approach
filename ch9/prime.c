/* Tests whether a number is prime */
// p190

#include <stdbool.h>
#include <stdio.h>

bool is_prime(int n);

int main() {
  printf("Enter a number: ");
  int number;
  scanf("%d", &number);
  if (is_prime(number)) {
    printf("Prime\n");
  } else {
    printf("Not prime\n");
  }
}

bool is_prime(int n) {
  if (n <= 1) {
    return false;
  }
  for (int divisor = 2; divisor * divisor <= n; divisor++) {
    if (n % divisor == 0) {
      return false;
    }
  }
  return true;
}