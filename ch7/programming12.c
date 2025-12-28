// FINISH
#include <stdio.h>
int main()
{
    printf("Enter an expression: ");
    double sum;
    double input;
    scanf("%lf", &sum);

    // getchar();
    char ch;
    while ((ch = getchar()) != '\n')
    {
        switch (ch)
        {
        case '+':
            scanf("%lf", &input);
            sum += input;
            break;
        case '-':
            scanf("%lf", &input);
            sum -= input;
            break;
        case '*':
            scanf("%lf", &input);
            sum *= input;
            break;
        case '/':
            scanf("%lf", &input);
            sum /= input;
            break;
        default:
            printf("wrong format!\n");
            break;
        }
    }
    printf("Value of expression: %f\n", sum);
}