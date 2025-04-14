// Write a C program to compute the radius of a circle when the area is provided, then calculate its circumference.

#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
    float r,area,c;
    printf("enter the area of circle:");
    scanf("%f",&area);
    r= sqrt(area/PI);
    c=2*PI*r;
    printf("radius of circle is %f\n",r);
    printf("circumference of circle is %f\n",c);
    return 0;
}

   





