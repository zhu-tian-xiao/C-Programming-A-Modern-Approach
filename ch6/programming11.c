// FINISH
#include <stdio.h>
int main()
{
    double e = 1;
    int n;
    printf("Enter n to count e: ");
    scanf("%d", &n);
    
    int division = 1;
    for (int i = 1; i <= n; i++)
    {
        division *= i;
        e += 1.0 / division;
    }
    
    printf("e ≈ %.6f\n", e);
    
}