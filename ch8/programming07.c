// FINISH
#include <stdio.h>
#include <string.h>

#define LEN 5
int main()
{
    int rowTotal[5] = {0};
    int colTotal[5] = {0};
    for (int i = 0; i < LEN; i++)
    {
        printf("Enter row %d: ", i + 1);
        int row[5];
        for (int y = 0; y < LEN; y++)
        {
            scanf("%d", &row[y]);
            rowTotal[i] += row[y];
        }
        for (int z = 0; z < LEN; z++)
        {
            colTotal[z] += row[z];
        }
    }
    printf("Row totals: ");
    for (int i = 0; i < LEN; i++)
    {
        printf("%-3d", rowTotal[i]);
    }
    printf("\n");
    printf("Column totals: ");
    for (int i = 0; i < LEN; i++)
    {
        printf("%-3d", colTotal[i]);
    }
    printf("\n");
    
    
    
}