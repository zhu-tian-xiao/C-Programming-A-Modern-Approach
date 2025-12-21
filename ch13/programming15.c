#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define EXPRESSION_LEN 30
// Modify Programming Project 6 from Chapter 10 so that it includes the
// following function:
double evaluate_RPN_expression(const char* expression);
// The function returns the value of the RPN expression pointed to by
// expression.

void readExpression(char* expression);

#define MAX 100
double stack[MAX];
int top = 0;

void push(double c) {
  if (top == MAX) {
    printf("stack overflow");
    exit(EXIT_FAILURE);
  }
  stack[top++] = c;
}

double pop(void) {
  if (top == 0) {
    printf("stack underflow");
    exit(EXIT_FAILURE);
  }
  return stack[--top];
}

int main() {
  printf("Enter an RPN expression: ");
  char expression[EXPRESSION_LEN + 1];
  readExpression(expression);
  printf("Value of expression: %.2f\n", evaluate_RPN_expression(expression));
}

void readExpression(char* expression) {
  char buffer[EXPRESSION_LEN + 2];
  fgets(buffer, sizeof buffer, stdin);
  buffer[strcspn(buffer, "\n")] = '\0';
  strcpy(expression, buffer);
}

double evaluate_RPN_expression(const char* expression) {
  char ch;
  int consume = 0;
  int step = 0;

  while (sscanf(expression + step, "%c%n", &ch, &consume) == 1) {
    step += consume;

    if (isspace((unsigned char)ch)) {
      continue;
    }

    if (ch == 'q') exit(EXIT_SUCCESS);

    if (ch == '=') return pop();

    if (ch >= '0' && ch <= '9') {
      push(ch - '0');
      continue;
    }

    double operand2 = pop();
    double operand1 = pop();
    switch (ch) {
      case '+':
        push(operand1 + operand2);
        break;
      case '-':
        push(operand1 - operand2);
        break;
      case '*':
        push(operand1 * operand2);
        break;
      case '/':
        push(operand1 / operand2);
        break;
      default:
        exit(EXIT_FAILURE);
        break;
    }
  }
}