void quick_sort(int a[], int low, int high);
int split(int a[], int low, int high);
void print_array(int a[], int low, int high);
int main() {
  int a[7] = {12, 3, 6, 18, 7, 15, 10};
  quick_sort(a, 0, sizeof(a) - 1);
  print_array(a, 0, sizeof(a) - 1);
}

void quick_sort(int a[], int low, int high) {
  if (low >= high) {
    return;
  }

  int middle = split(a, low, high);
  printf("middle is %d\n", a[middle]);
  // quick_sort(a, 0, middle - 1);
  // quick_sort(a, middle + 1, high);
}

int split(int a[], int low, int high) {
  int flag_number = a[low];
  while (low < high) {
    for (;;) {
      while (a[high] > flag_number) {
        high--;
      }
      a[low++] = a[high];
      while (a[low] < flag_number) {
        low++;
      }
      a[high--] = a[low];
    }
  }
}

void print_array(int a[], int low, int high) {
  while (low < high) {
    printf("%d ", a[low++]);
  }
}