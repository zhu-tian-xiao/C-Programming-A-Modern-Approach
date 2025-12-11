#include <stdio.h>

// 这里也可以用%s解决
// scanf("%s %s", firstName, secondName);
// printf("%s, %c\n", secondName, firstName[0]);

int main()
{
    char special;
    printf("Enter a first and last name: ");
    char ch;
    // 跳转到第一个字母
    while ((ch = getchar()) == ' ')
        ;
    special = ch;
    // 跳转到下一个空格处
    while (getchar() != ' ')
        ;
    // 跳转到下一个字母
    while ((ch = getchar()) == ' ')
        ;
    // 打印所有字母
    do
    {
        putchar(ch);
        ch = getchar();
    } while (ch != '\n' && ch != ' ');
    printf(", %c.\n", special);
    
}