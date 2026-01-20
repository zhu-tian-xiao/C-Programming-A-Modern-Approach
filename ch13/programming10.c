#include <stdio.h>
#define NAME_SIZE 50
// 这里也可以用%s解决
// scanf("%s %s", firstName, secondName);
// printf("%s, %c\n", secondName, firstName[0]);

int main() {
  char name[NAME_SIZE + 2];
  char firstName[NAME_SIZE / 2];
  char secondName[NAME_SIZE / 2];
  printf("Enter a first and last name: ");
  if (fgets(name, sizeof(name), stdin) != NULL) {
    sscanf(name, "%s %s", firstName, secondName);
    sprintf(name, "%s, %c.", secondName, firstName[0]);
    puts(name);
  }
}