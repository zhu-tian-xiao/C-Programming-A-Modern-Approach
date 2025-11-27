#include <stdio.h>
int main()
{
    printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n\n");
    int userCommand;
    double userInput;
    double balance = 0.0;
    while (1)
    {
        printf("Enter Command: ");
        scanf("%d", &userCommand);
        switch (userCommand)
        {
        case 0:
            printf("Balance has been cleared!\n");
            balance = 0.0;
            break;
        case 1:
            printf("Enter amount of credit: ");
            scanf("%lf", &userInput);
            balance += userInput;
            break;
        case 2:
            printf("Enter amount of debit: ");
            scanf("%lf", &userInput);
            if (balance < userInput)
            {
                printf("No enough money, current balance: %.2f\n", balance);
                break;
            }

            balance -= userInput;
            break;
        case 3:
            printf("Current balance: %.2f\n", balance);
            break;
        case 4:
            printf("Bye!\n");
            return 0;
        default:
            printf("Commands: 0=clear, 1=credit, 2=debit, ");
            printf("3=balance, 4=exit\n\n");
            break;
        }
    }
}