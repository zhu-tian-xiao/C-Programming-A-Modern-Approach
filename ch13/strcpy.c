#include <stdio.h>
#include <string.h>

int main() {
  char str1[4];
  char str2[9] = "hello";
  // strncpy的正确使用方式，必须在末尾添加上0
  strncpy(str1, str2, sizeof (str1) - 1);
  str1[sizeof(str1) - 1] = '\0';
  printf("%s\n", str1);
  
}