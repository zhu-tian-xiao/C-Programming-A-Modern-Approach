#include <stdbool.h> /* C99 only */
#define STACK_SIZE 100
#include <stdio.h>
/* external variables */
int contents[STACK_SIZE];
int top = 0;

void stackOverFlow()
{
    puts("over flow");
}
void stackUnderFlow()
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
        stackOverFlow();
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
        stackUnderFlow();
    }
    else
    {
        return contents[--top];
    }
}