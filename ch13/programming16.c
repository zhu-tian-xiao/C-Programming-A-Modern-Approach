// Modify Programming Project 1 from Chapter 12 so that it includes the
// following function:
#include <stdio.h>
#include <string.h>
#define MESSAGE_LEN 30
void reverse(char* message);
// The function reverses the string pointed to by message.
void readMessage(char* message);
void printMessage(char* message);
int main() {
  char message[MESSAGE_LEN + 2];
  readMessage(message);
  reverse(message);
  printMessage(message);
}

void reverse(char* message) { 
  for(char* end = message + strlen(message) - 1; message < end; message++, end--) {
    char letter = *end;
    *end = *message;
    *message = letter;
  }
}

void readMessage(char* message) {
  printf("Enter a message: ");
  char buffer[MESSAGE_LEN + 2];
  fgets(buffer, sizeof buffer, stdin);
  buffer[strcspn(buffer, "\n")] = '\0';
  strcpy(message, buffer);
}

void printMessage(char* message) {
  printf("Reversal is: %s\n", message);
}