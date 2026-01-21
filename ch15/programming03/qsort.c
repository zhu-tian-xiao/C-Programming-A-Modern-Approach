#include <stdio.h>
#include "quicksort.h"
void print_array(int a[], int low, int high);
int main() {
  int a[] = {9, 16, 47, 82, 4, 66, 12, 3, 25, 51};
  quick_sort(a, 0, sizeof(a) / sizeof(a[0]) - 1);
  print_array(a, 0, sizeof(a) / sizeof(a[0]) - 1);
}

void print_array(int a[], int low, int high) {
  while (low <= high) {
    printf("%d ", a[low++]);
  }
  putchar('\n');
}