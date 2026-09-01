#include <stdio.h>
void print_hex_number(int i);
int main(void) {
  print_hex_number(-10);
  putchar('\n');
  print_hex_number(10);
  putchar('\n');


}

void print_hex_number(int i) {
  if (i < 0) {
    printf("-%x", -i);
  } else {
    printf("%x", i);
  }
}