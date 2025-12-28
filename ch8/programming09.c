// FINISH
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void printMap(char map[][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%-2c", map[i][j]);
        }
        printf("\n");
    }
}

bool noWay(char map[][10], int x, int y)
{

    if (y + 1 < 10 && map[x][y + 1] == '.')
    {
        return false;
    }

    if (x + 1 < 10 && map[x + 1][y] == '.')
    {
        return false;
    }

    if (y - 1 >= 0 && map[x][y - 1] == '.')
    {
        return false;
    }

    if (x - 1 >= 0 && map[x - 1][y] == '.')
    {
        return false;
    }
    return true;
}
int main()
{
    char map[10][10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            map[i][j] = '.';
        }
    }
    map[0][0] = 'A';
    int x = 0;
    int y = 0;
    char initialCharacter = 'B';
    const char finalCharacter = 'Z';
    srand(time(NULL));
    while (initialCharacter <= finalCharacter)
    {
        int direction = rand() % 4;
        if (noWay(map, x, y))
        {
            printf("There is no way!\n");
            break;
        }

        switch (direction)
        {
        case 0:
            // →
            if (map[x][y + 1] == '.' && y + 1 < 10)
            {
                map[x][y + 1] = initialCharacter++;
                ++y;
            }
            break;
        case 1:
            // ↓
            if (map[x + 1][y] == '.' && x + 1 < 10)
            {
                map[x + 1][y] = initialCharacter++;
                ++x;
            }
            break;
        case 2:
            // ←
            if (map[x - 1][y] == '.' && x - 1 >= 0)
            {
                map[x - 1][y] = initialCharacter++;
                --x;
            }
            break;
        case 3:
            // ↑
            if (map[x][y - 1] == '.' && y - 1 >= 0)
            {
                map[x][y - 1] = initialCharacter++;
                --y;
            }
            break;
        default:
            break;
        }
        // printf("%d, %d\n", x, y);
    }
    printMap(map);
}