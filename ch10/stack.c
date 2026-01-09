#include <stdbool.h> /* C99 only */
#define STACK_SIZE 100
#include <stdio.h>
/* external variables */
int contents[STACK_SIZE];
int top = 0;

void stack_overflow()
{
    puts("over flow");
}
void stack_underflow()
{
    puts("Under flow");
}
void makeEmpty()
{
    top = 0;
}

bool isEmpty()
{
    return top == 0;
}

bool isFull()
{
    return top == STACK_SIZE;
}

void push(int i)
{
    if (isFull())
    {
        stack_overflow();
    }
    else
    {
        contents[top++] = i;
    }
}

int pop()
{
    if (isEmpty())
    {
        stack_underflow();
    }
    else
    {
        return contents[--top];
    }
}