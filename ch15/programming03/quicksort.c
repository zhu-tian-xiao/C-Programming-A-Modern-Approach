#include "quicksort.h"
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

