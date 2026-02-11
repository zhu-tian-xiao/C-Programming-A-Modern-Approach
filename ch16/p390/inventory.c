#include <stdio.h>
// #include <readline.h>
#include "part.h"



int main() {
  struct info_parts info;
  init_info(&info);

  char code;
  for (;;) {
    printf("Enter operation code: ");
    scanf(" %c", &code);
    while (getchar() != '\n')
      ;
    switch (code) {
      case 'i':
        insert(&info);
        break;
      case 's':
        search(&info);
        break;
      case 'u':
        update(&info);
        break;
      case 'p':
        print(&info);
        break;
      case 'q':
        return 0;
      default:
        printf("Illegal code\n");
        break;
    }
    printf("\n");
  }
}

