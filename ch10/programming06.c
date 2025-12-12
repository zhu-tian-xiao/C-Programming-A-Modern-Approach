#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 100
double stack[MAX];
int top = 0;

void push(double c)
{
    if (top == MAX)
    {
        printf("stack overflow");
        exit(EXIT_FAILURE);
    }
    stack[top++] = c;
}

double pop(void)
{
    if (top == 0)
    {
        printf("stack underflow");
        exit(EXIT_FAILURE);
    }
    return stack[--top];
}

double calRPN()
{
    char ch;
    while (scanf(" %c", &ch) == 1)
    {
        if (ch == 'q')
            exit(EXIT_SUCCESS);

        if (ch == '=')
            return pop();

        if (ch >= '0' && ch <= '9')
        {
            push(ch - '0');
            continue;
        }

        double operand2 = pop();
        double operand1 = pop();
        switch (ch)
        {
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
int main()
{
    printf("Enter an RPN expression: ");
    printf("Value of expression: %.2f\n", calRPN());
}