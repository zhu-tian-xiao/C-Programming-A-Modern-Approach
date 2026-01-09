#include <stdbool.h>
#include <stdio.h>
#define BUFFER_SIZE 1000
void swap(int* a, int* b);
void bubble_sort(int* start, int* end);
void selection_sort(int* start, int* end);
void print_array(int* start, int* end);

int main() {
  int arr[100] = {0};  // 预留最大容量

  printf("Enter all numbers to sort: ");

  char buffer[BUFFER_SIZE];
  fgets(buffer, sizeof buffer, stdin);
  int n;
  int p = 0;
  int end = 0;
  while (buffer[p] != '\n') {
    int ret = sscanf(buffer + p, "%d%n", &arr[end++], &n);
    if (ret != 1) {
      break;
    }

    p += n;
  }

  // bubble_sort(arr, &arr[end]);
  selection_sort(arr, &arr[end]);
  printf("The array after sorted: ");
  print_array(arr, &arr[end]);
  putchar('\n');
}

void swap(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
void bubble_sort(int* start, int* end) {
  if (end - start <= 1) {
    return;
  }
  int* p = start;

  bool flag = true;
  while (p < end - 1) {
    if (*p > *(p + 1)) {
      swap(p, p + 1);
      flag = false;
    }
    p++;
  }

  if (!flag) {
    bubble_sort(start, end - 1);
  }
}

void selection_sort(int* start, int* end) {
  if (end - start <= 1) {
    return;
  }

  int* max = start;
  for (int* p = start + 1; p < end; p++) {
    if (*p > *max) {
      max = p;
    }
  }

  swap(max, end - 1);
  selection_sort(start, end - 1);
}

void print_array(int* start, int* end) {
  while (start < end) {
    printf("%d ", *start++);
  }
}