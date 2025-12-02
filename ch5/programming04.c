#include <stdio.h>
int main()
{
    printf("Enter wind speed: ");
    int floatSpeed;
    scanf("%d", &floatSpeed);
    if (floatSpeed == 0)
    {
        printf("calm\n");
    }else if (floatSpeed < 4)
    {
        printf("light air\n");
    } else if (floatSpeed < 28)
    {
        printf("breeze\n");
    } else if (floatSpeed < 48)
    {
        printf("gale\n");
    } else if (floatSpeed < 64)
    {
        printf("storm\n");
    } else {
        printf("hurricane\n");
    }
    
    
    
    
    
}