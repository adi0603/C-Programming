#include<stdio.h>
#include"convert.h"
int main(void)
{
    float inches = 0.0;
    printf("Enter distance in inches.");
    scanf("%f",&inches);

    printf("Distance in feet = %.2f",convert_to_feet(inches));
    printf("Distance in yard= %.2f",convert_to_yard(inches));
    return 0;
}