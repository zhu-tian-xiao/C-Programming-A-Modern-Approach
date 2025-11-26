#include <stdio.h>
int main()
{
    double radius;
    printf("Enter radius to calculate: ");
    scanf("%lf", &radius);
    double volume = radius * radius * radius * (4.0 / 3);
    printf("Volume of sphere: %.2f\n", volume);
}