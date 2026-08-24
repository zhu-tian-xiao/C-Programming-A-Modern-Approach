// Why is it not a good idea for an identifier to contain more than one adjacent underscore (as
// in current___balance, for example)?

#include <stdio.h>
int main(void) {
  double current__balance = 2.23;
  printf("current balance: %f\n", current__balance);
}