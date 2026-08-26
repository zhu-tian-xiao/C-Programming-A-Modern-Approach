// Using the switch statement, write a program that converts a numerical grade into a letter
// grade:
// Enter numerical grade: 84
// Letter grade: B
// Use the following grading scale: A = 90–100, B = 80–89, C = 70–79, D = 60–69, F = 0–59.
// Print an error message if the grade is larger than 100 or less than 0. Hint: Break the grade
// into two digits, then use a switch statement to test the ten’s digit.
// 这道题也可以不使用switch
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