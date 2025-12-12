#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define SIZE 20
void push(char *stack, char **addressStackTop, char size, char ch)
{
    if (*addressStackTop - stack >= size)
    {
        printf("stack overflow\n");
        exit(EXIT_FAILURE);
    }
    *(*addressStackTop)++ = ch;
}

char top(char *stackTop)
{
    return *(stackTop - 1);
}

char pop(char *stack, char **addressStackTop)
{
    if (stack == *addressStackTop)
    {
        printf("stack underflow\n");
        exit(EXIT_FAILURE);
    }
    return *--(*addressStackTop);
}

bool isNullStack(char *stack, char *stackTop)
{
    if (stack == stackTop)
        return true;
    else
        return false;
}

int main()
{
    printf("Enter parentheses and/or braces: ");
    char stack[SIZE];
    char *stackTop = stack;

    char ch;
    while ((ch = getchar()) != '\n')
    {
        switch (ch)
        {
        case '(':
        case '{':
            push(stack, &stackTop, SIZE, ch);
            break;
        case ')':
            // 1. stack为空
            // 2. stack的top是(
            // 3. stack的top不是(
            if (isNullStack(stack, stackTop) || top(stackTop) != '(')
            {
                printf("Parentheses/braces are nested improperly\n");
                return 0;
            }
            else
            {
                pop(stack, &stackTop);
            }
            break;
        case '}':
            if (isNullStack(stack, stackTop) || top(stackTop) != '{')
            {
                printf("Parentheses/braces are nested improperly\n");
                return 0;
            }
            else
            {
                pop(stack, &stackTop);
            }
            break;

        default:
            break;
        }
    }
    if (isNullStack(stack, stackTop))
        printf("Parentheses/braces are nested properly\n");
    else 
        printf("Parentheses/braces are nested improperly\n");
}