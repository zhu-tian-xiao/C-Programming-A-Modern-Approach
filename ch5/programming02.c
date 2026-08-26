// Write a program that asks the user for a 24-hour time, then displays the time in 12-hour
// form:
// Enter a 24-hour time: 21:11
// Equivalent 12-hour time: 9:11 PM
// Be careful not to display 12:00 as 0:00.
#include <stdio.h>
#include <stdlib.h>
int main() {
  printf("Enter a 24-hour time: ");
  int hour;
  int minute;
  scanf("%d:%d", &hour, &minute);
  // 处理特殊情况
  if (hour < 0 || hour > 24 || minute < 0 || minute >= 60) {
    printf("wrong time!\n");
    exit(EXIT_FAILURE);
  }
  // 处理特殊情况
  if (hour == 24 && minute != 0) {
    printf("wrong time!\n");
    exit(EXIT_FAILURE);
  }

  if (hour < 12) {
    printf("Equivalent 12-hour time: %2d:%.2d AM\n", hour == 0 ? 12 : hour,
           minute);
  } else {
    printf("Equivalent 12-hour time: %2d:%.2d PM\n", hour == 12 ? 12 : hour - 12,
           minute);
  }
}