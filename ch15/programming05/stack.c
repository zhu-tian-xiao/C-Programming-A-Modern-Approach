#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include "stack.h"
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