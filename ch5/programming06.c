#include <stdio.h>
#include <limits.h>
int main()
{
    int largest = 0, smallest = INT_MAX;
    printf("Enter some integers:(any character to quit): ");
    int input;

    while (scanf("%d", &input) == 1)
    {
        if (input > largest)
        {
            largest = input;
        }

        if (input < smallest)
        {
            smallest = input;
        }
    }
    printf("Largest: %d\n", largest);
    printf("smallest: %d\n", smallest);

    
        

    
    
    
}