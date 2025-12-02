#include <stdio.h>
#define LEN 4

void printNums(int nums[][LEN])
{
    for (int i = 0; i < LEN; i++)
    {
        for (int j = 0; j < LEN; j++)
        {
            printf("%2d", nums[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    
}
int main()
{
    int nums[LEN][LEN];
    printf("Enter the numbers from 1 to 16 in any order:\n");
    for (int i = 0; i < LEN; i++)
    {
        for (int j = 0; j < LEN; j++)
        {
            scanf("%d", &nums[i][j]);
        }
    }

    printNums(nums);
    printf("\n");
    int rowSum[LEN] = {0};
    int colSum[LEN] = {0};
    int diagonal1= 0;
    int diagonal2 = 0;
    for (int i = 0; i < LEN; i++)
    {
        for (int j = 0; j < LEN; j++)
        {
            rowSum[i] += nums[i][j];
            colSum[j] += nums[i][j];
            if (i == j)
            {
                diagonal1 += nums[i][j];
            }

            if (i + j == 3)
            {
                diagonal2 += nums[i][j];
            }
            
            
        }  
    }
    
    printf("Row sums: %d %d %d %d\n", rowSum[0], rowSum[1], rowSum[2], rowSum[3]);
    printf("Column sums: %d %d %d %d\n", colSum[0], colSum[1], colSum[2], colSum[3]); 
    printf("Diagonal sums: %d %d\n", diagonal1, diagonal2);  
    
}