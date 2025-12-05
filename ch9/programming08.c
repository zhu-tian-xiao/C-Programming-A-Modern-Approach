#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
int roll_dice();
bool play_game();
int main()
{
    char sign;
    int wins = 0;
    int losses = 0;
    do
    {
        play_game() ? wins++ : losses++;
        printf("\nPlay again? ");

        
        scanf(" %c", &sign);
    } while (sign == 'y');
    printf("\nWins: %d Losses: %d\n", wins, losses);
}
int roll_dice()
{
    
    int x1 = rand() % 6 + 1;
    int x2 = rand() % 6 + 1;
    printf("You rolled: %d\n", x1 + x2);
    return x1 + x2;
}

bool play_game()
{
    srand(time(NULL));
    bool counts[13] = {false};
    int point = roll_dice();

    if (point == 2 || point == 3 || point == 12)
    {
        printf("You lose!\n");
        return false;
    }

    if (point == 7 || point == 11)
    {
        printf("You win!\n");
        return true;
    }

    counts[point] = true;
    printf("Your point is %d\n", point);

    while (true)
    {
        int rollValue = roll_dice();
        if (rollValue == 7)
        {
            printf("You lose!\n");
            return false;
        }

        if (counts[rollValue])
        {
            printf("You win!\n");
            return true;
        }

        counts[rollValue] = true;
    }
}