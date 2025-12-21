#include <stdio.h>
#include <string.h>
void readString(char* str) {
  char ch;
  while ((ch = getchar()) != '\n') {
    *str++ = ch;
  }
  *str = 0;
}
void printReminders(char (*reminderMap)[100], char (*reminderMapEnd)[100]) {
  printf("Day Reminder\n");
  while (reminderMap < reminderMapEnd) {
    printf("%s\n", *reminderMap);
    reminderMap++;
  }
}
int main() {
  int day;
  char reminder[100] = {0};
  char reminderMap[20][100] = {0};
  char (*reminderMapEnd)[100] = reminderMap;

  for (;;) {
    printf("Enter day and reminder: ");
    scanf("%d", &day);
    if (day == 0) {
      break;
    }
    // 接收一个提醒
    readString(reminder);
    char formatDay[4] = {0};
    sprintf(formatDay, "%3d", day);
    char (*reminderMapFirst)[100] = reminderMap;
    while (strcmp(formatDay, *reminderMapFirst) > 0 &&
           reminderMapFirst < reminderMapEnd) {
      reminderMapFirst++;
    }
    // reminderMapfirst指向待插入的位置
    for (char (*end)[100] = reminderMapEnd; end > reminderMapFirst; end--) {
      strcpy(*end, *(end - 1));
    }
    // 插入
    strcpy(*reminderMapFirst, formatDay);
    strcat(*reminderMapFirst, reminder);
    reminderMapEnd++;
  }
  printReminders(reminderMap, reminderMapEnd);
}