#include <stdbool.h> /* C99 only */
#define STACK_SIZE 5
#include <stdio.h>
#include <stdlib.h>
/* external variables */
static int contents[STACK_SIZE];
static int top = 0;

static void stack_overflow() {
  puts("over flow");
  exit(EXIT_FAILURE);
}

static void stack_underflow() {
  puts("Under flow");
  exit(EXIT_FAILURE);
}

void make_empty() { top = 0; }

bool is_empty() { return top == 0; }

bool is_full() { return top == STACK_SIZE; }

void push(int i) {
  if (is_full()) {
    stack_overflow();
  } else {
    contents[top++] = i;
  }
}

int pop() {
  if (is_empty()) {
    stack_underflow();
  } else {
    return contents[--top];
  }
}