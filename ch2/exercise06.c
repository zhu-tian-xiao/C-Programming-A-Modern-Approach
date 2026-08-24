// Why is it not a good idea for an identifier to contain more than one adjacent underscore (as
// in current___balance, for example)?

// 避免连续下划线主要是为了降低与 C 实现保留名称发生冲突的可能性。
#include <stdio.h>
int main(void) {
  double current__balance = 2.23;
  printf("current balance: %f\n", current__balance);
}