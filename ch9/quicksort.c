#include <stdio.h>
void quick_sort(int a[], int low, int high);
int split(int a[], int low, int high);
void print_array(int a[], int low, int high);
int main() {
  int a[] = {9, 16, 47, 82, 4, 66, 12, 3, 25, 51};
  quick_sort(a, 0, sizeof(a) / sizeof(a[0]) - 1);
  print_array(a, 0, sizeof(a) / sizeof(a[0]) - 1);
}

void quick_sort(int a[], int low, int high) {
  if (low >= high) {
    return;
  }

  int middle = split(a, low, high);
  quick_sort(a, low, middle - 1);
  quick_sort(a, middle + 1, high);
}

int split(int a[], int low, int high) {
  int pivot = a[low];

  for (;;) {
    while (a[high] > pivot && low < high) {
      high--;
    }
    if (low == high) {
      a[low] = pivot;
      return low;
    }
    a[low++] = a[high];
    while (a[low] < pivot && low < high) {
      low++;
    }
    if (low == high) {
      a[low] = pivot;
      return low;
    }
    a[high--] = a[low];
  }
}

void print_array(int a[], int low, int high) {
  while (low <= high) {
    printf("%d ", a[low++]);
  }
  putchar('\n');
}