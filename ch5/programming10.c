#include <stdio.h>
int main()
{
    printf("Enter numerical grade: ");
    int grade;
    scanf("%d", &grade);
    printf("Letter grade: ");
    if (grade / 10 < 6)
    {
        printf("F\n");
    } else {
        printf("%c\n", (int)('A') + 9 - grade / 10);
    }
    
}