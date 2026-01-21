#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "stack.h"
double calRPN(void);
int main()
{
    printf("Enter an RPN expression: ");
    printf("Value of expression: %.2f\n", calRPN());
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
