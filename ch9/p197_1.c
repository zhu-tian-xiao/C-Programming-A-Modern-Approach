#include <stdio.h>
#define LEN 2

int sum_two_dimensional_array(int a[][LEN], int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < LEN; j++)
        {
            sum += a[i][j];
        } 
    }
    return sum;
}

void printArray(int n, int a[n]){
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    
}
int main() {
    int a[3][2] = {1, 2, 3, 4};
    printf("%d\n", sum_two_dimensional_array(a, sizeof(a) / sizeof(a[0])));
    int b[5] = {1, 2, 4};
    printArray(4, b);
}