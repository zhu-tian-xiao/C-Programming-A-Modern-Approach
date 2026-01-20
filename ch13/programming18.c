#include <stdio.h>
int main(void) {
  printf("Enter a date (mm/dd/yyyy): ");
  int month, day, year;
  scanf("%d /%d /%d", &month, &day, &year);
  const char *months[] = {"January",   "February", "March",    "April",
                          "May",       "June",     "July",     "August",
                          "September", "October",  "November", "December"};
  printf("You entered the date %s %d, %d\n", months[month - 1], day, year);
}