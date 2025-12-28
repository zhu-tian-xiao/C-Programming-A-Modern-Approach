#include <stdio.h>
int main()
{
    // 这里既可以使用if else，也可以使用do while
    printf("Enter a number: ");
    int number;
    int count = 0;
    scanf("%d", &number);
    // 复制number以保存值
    int num = number;
    do
    {
        num /= 10;
        count++;
    } while (num > 0);
    printf("The number %d has %d digits\n", number, count);
}