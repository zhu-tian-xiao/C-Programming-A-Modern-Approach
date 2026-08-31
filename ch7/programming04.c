// FINISH
// 掌握通过while(ch = getchar() != '\n')获取字符串
#include <ctype.h>
#include <stdio.h>
int main() {
  printf("2=ABC, 3=DEF, 4=GHI, 5=JKL, 6=MNO, 7=PRS, 8=TUV, 9=WXY.\n");
  printf("Enter phone number: ");
  char ch;
  while ((ch = toupper(getchar())) != '\n') {
    switch (ch) {
      case 'A':
      case 'B':
      case 'C':
        putchar('2');
        break;
      case 'D':
      case 'E':
      case 'F':
        putchar('3');
        break;
      case 'G':
      case 'H':
      case 'I':
        putchar('4');
        break;
      case 'J':
      case 'K':
      case 'L':
        putchar('5');
        break;
      case 'M':
      case 'N':
      case 'O':
        putchar('6');
        break;
      case 'P':
      case 'R':
      case 'S':
        putchar('7');
        break;
      case 'T':
      case 'U':
      case 'V':
        putchar('8');
        break;
      case 'W':
      case 'X':
      case 'Y':
        putchar('9');
        break;
      default:
        putchar(ch);
        break;
    }
  }
  putchar('\n');
}