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
void make_empty()
{
    top = 0;
}

bool is_empty()
{
    return top == 0;
}

bool is_full()
{
    return top == STACK_SIZE;
}

void push(int i)
{
    if (is_full())
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
    if (is_empty())
    {
        stack_underflow();
    }
    else
    {
        return contents[--top];
    }
}