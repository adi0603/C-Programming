#include<stdio.h>
#include"area.h"
#include "convert.h"
int main(void)
{
    int length_feet = 0;
    int width_feet = 0;
    int length_inches = 0;
    int width_inches = 0;
    printf("Enter feet of length part.");
    scanf("%d",&length_feet);
    printf("Enter inches of length part.");
    scanf("%d",&length_inches);
    printf("Enter feet of width part.");
    scanf("%d",&width_feet);
    printf("Enter inches of width part.");
    scanf("%d",&width_inches);
    length_inches=convert_to_inches(length_feet) + length_inches;
    width_inches=convert_to_inches(width_feet) + width_inches;
    calculate_area(length_inches,width_inches);
    return 0;
}
