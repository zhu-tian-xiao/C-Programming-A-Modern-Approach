#include <stdio.h>


int a(int d, int c)
{
    // 在函数中可以声明函数，但不可以定义函数
    void b();
    b();
}
void b() {
    printf("hello");
}
int main()
{
    a(1, 2);
}