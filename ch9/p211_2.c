
// 不推荐的声明函数的 方式
void print_pun(void), print_count(int n);
#include <stdio.h>
double pun = 1;
void print_pun()
{
    printf("%f", pun);
}


void print_count(int n)
{
    printf("%d", n);
}

int main()
{}