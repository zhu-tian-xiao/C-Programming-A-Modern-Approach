#include <stdio.h>
#include <math.h>
int main()
{
    size_t num;
    printf("Enter a positive number: ");
    scanf("%lu", &num);
    double y = 1;
    for (size_t i = 0; i < 10; i++)
    {
        double newY = (y + num / y) / 2;
        
        if (fabs(newY - y) < 0.0001)
        {
            y = newY;
            break;
        }
        y = newY;
        printf("new result: %lf\n", y);
    }
    printf("Square root: %lf\n", y);
    
}