#include <stdio.h>
#include <string.h>
#define REMINDER_LEN 50
#define DAY_LEN 2
#define LIST_LEN 10

void getReminder(char* reminder);
void printList(char (*list)[DAY_LEN + REMINDER_LEN + 1], int listEnd);

int main() {
  char reminderList[LIST_LEN][DAY_LEN + REMINDER_LEN + 1] = {0};
  int listEnd = 0;
  for (;;) {
    if (listEnd == LIST_LEN) {
      printf("No space left\n");
      break;
    }
    printf("Enter day and reminder: ");
    char day[DAY_LEN + 1] = {0}, reminder[REMINDER_LEN + 1] = {0};

    // 获取day
    int day_i;
    scanf("%d", &day_i);
    if (day_i == 0) {
      break;
    }
    sprintf(day, "%2d", day_i);

    // 获取reminder
    getReminder(reminder);

    // 获取应当插入的节点
    int i;
    for (i = 0; i < listEnd; i++) {
      if (strncmp(day, reminderList[i], 2) < 0) {
        break;
      }
    }
    int insertLocation = i;

    // 将插入点下方的结点向下移动一位
    for (int i = listEnd; i > insertLocation; i--) {
      strcpy(reminderList[i], reminderList[i - 1]);
    }

    // 插入拼接的day-reminder字符串
    // strcpy(reminderList[insertLocation], day);
    // strcat(reminderList[insertLocation], reminder);
    // snprintf最多写maxlen个字符
    snprintf(reminderList[insertLocation], DAY_LEN + REMINDER_LEN + 1, "%s%s",
             day, reminder);
    listEnd++;
  }
  // 打印reminderList
  printList(reminderList, listEnd);
}

void getReminder(char* reminder) {
  char buffer[REMINDER_LEN + 2];
  if (fgets(buffer, sizeof(buffer), stdin)) {
    buffer[strcspn(buffer, "\n")] = '\0';
  }
  strncpy(reminder, buffer, REMINDER_LEN);
  reminder[REMINDER_LEN] = '\0';
}

void printList(char (*list)[DAY_LEN + REMINDER_LEN + 1], int listEnd) {
  printf("Day Reminder\n");
  for (int i = 0; i < listEnd; i++) {
    printf(" %s\n", list[i]);
  }
}