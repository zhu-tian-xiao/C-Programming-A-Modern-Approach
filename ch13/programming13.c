// FINISH
#include <stdio.h>
#include <ctype.h>
#define MSG_LEN 80

char* encrypt_message(char* message, int step);
int main() {
  printf("Enter message to be encrypted: ");
  char message[MSG_LEN + 2];
  fgets(message, sizeof message, stdin);
  printf("Enter shift amount (1-25): ");
  int shift_amount;
  scanf("%d", &shift_amount);
  printf("Encrypted message: ");
  encrypt_message(message, shift_amount);
  printf("%s", message);
}

char* encrypt_message(char* message, int step) {
  char* p = message;
  while (*p) {
    if (isalpha((unsigned char)(*p))) {
      if (*p >= 97) {
        *p = (*p - 'a' + step) % 26 + 'a';
      } else {
        *p = (*p - 'A' + step) % 26 + 'A';
      }
    }
    p++;
  }
  return message;
}