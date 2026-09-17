#include <stdio.h>

#include "stack.h"
int main(void) {
  push(1);
  push(2);
  push(3);
  push(4);
  printf("pop number: %d\n", pop());
  push(5);
  push(6);
  push(7);
}