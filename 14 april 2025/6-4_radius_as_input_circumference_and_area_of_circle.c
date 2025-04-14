// Write a C program to calculate the circumference and area of a circle with a given radius, formatted to 3 decimal places.

#include<stdio.h>
#define PI 3.14
int main()
{
    float r,area,c;
    printf("enter the radius:");
    scanf("%f",&r);
    area= PI*r*r;
    c=2*PI*r;
    printf("area of circle is %f\n",area);
    printf("circumference of circle is %f\n",c);
    return 0;
}

   





