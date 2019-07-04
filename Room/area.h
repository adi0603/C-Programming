//
// Created by Aditya on 7/4/19.
//

#ifndef ARRAY_AREA_H
#define ARRAY_AREA_H

#include<stdio.h>
#define Converfeet 144.0
#define Convertinches 12.0

void calculate_area(int length_inches,int width_inches)
{
    int room_feet=0;
    int room_inches=0;
    room_inches=length_inches * width_inches;
    room_feet = room_inches/Converfeet;
    float result = ((room_inches / Converfeet) - room_feet )*Convertinches;

    printf("Area of ground is %d feet and %.2f inches",room_feet,result);
}

#endif //ARRAY_AREA_H

