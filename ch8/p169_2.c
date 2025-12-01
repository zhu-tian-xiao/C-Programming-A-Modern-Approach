#include <stdio.h>
#include <string.h>

#define LEN 5
int main()
{
    
    int rate;
    int year;
    printf("Enter interest rate: ");
    scanf("%d", &rate);
    printf("Enter number of years: ");
    scanf("%d", &year);

    double moneys[LEN];
    putchar('\n');
    printf("Years");

    for (size_t i = 0; i < LEN; i++)
    {
        moneys[i] = 100;
        printf("%6lu%%", rate + i);
    }
    putchar('\n');
    for (size_t i = 0; i < year; i++)
    {
        printf("%3lu    ", i + 1);
        for (size_t y = 0; y < LEN; y++)
        {
            moneys[y] *= 1 + (rate + y) / 100.0;
            printf("%7.2f", moneys[y]);
        }
        putchar('\n');
    }
    
    
    
    
}