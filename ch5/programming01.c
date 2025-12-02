#include <stdio.h>
int main()
{
    // 这里既可以使用if else，也可以使用do while
    printf("Enter a number: ");
    int num;
    int count = 0;
    scanf("%d", &num);
    do
    {
        num /= 10;
        count++;
    } while (num > 0);
    printf("The number 374 has %d digits\n", count);
}