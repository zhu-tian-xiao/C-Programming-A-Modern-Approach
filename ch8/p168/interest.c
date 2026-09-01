#include <stdio.h>

#define INITIAL_BALANCE 100.0
#define NUMBER_RATES 8
int main(void) {
  int low_rate;
  int number_years;
  double value[NUMBER_RATES];

  printf("Enter interest rate: ");
  scanf("%d", &low_rate);
  printf("Enter number of years: ");
  scanf("%d", &number_years);

  // initialize value array
  for (int i = 0; i < NUMBER_RATES; i++) {
    value[i] = INITIAL_BALANCE;
  }

  // print table header
  printf("\nYears    ");
  for (int i = low_rate; i < low_rate + NUMBER_RATES; i++) {
    printf("  %d%%    ", i);
  }

  for (int i = 1; i <= number_years; i++) {
    printf("\n  %d      ", i);
    for (int j = 0; j < NUMBER_RATES; j++) {
      value[j] = value[j] * (1 + (double)(j + low_rate) / 100);
      printf("%-8.2lf", value[j]);
    }
  }
  putchar('\n');
}