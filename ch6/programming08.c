// Write a program that prints a one-month calendar. The user specifies the
// number of days in the month and the day of the week on which the month
// begins: Enter number of days in month: 31 Enter starting day of the week
// (1=Sun, 7=Sat): 3 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23
// 24 25 26 27 28 29 30 31

// 这是不包含处理空格的简单版本
int main(void) {
  int n, starting_day;

  printf("Enter number of days in month: ");
  scanf("%d", &n);
  printf("Enter starting day of the week (1=Mon, 7=Sun): ");
  scanf("%d", &starting_day);

  printf("\nMo Tu We Th Fr Sa Su\n");

  for (int i = 1; i < starting_day; i++) {
    printf("   ");
  }

  for (int i = 1; i <= n; i++) {
    printf("%2d ", i);
    if ((starting_day + i - 1) % 7 == 0) {
      printf("\n");
    }
  }
  

  return 0;
}