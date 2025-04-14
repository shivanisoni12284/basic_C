// Write a C program to determine the area and circumference of a circle given its diameter, using appropriate type conversions.

#include<stdio.h>
#define PI 3.14
int main()
{
    float d,area,c,r;
    printf("enter the diameter:");
    scanf("%f",&d);
    r=d/2;
    area= PI*r*r;
    c=2*PI*r;
    printf("area of circle is %f\n",area);
    printf("circumference of circle is %f\n",c);
    return 0;
}

   





