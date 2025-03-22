// Write a C program to compute the perimeter and area of a circle with a given radius.
// Expected Output:
// Perimeter of the Circle = 37.680000 inches
// Area of the Circle = 113.040001 square inches

#include<stdio.h>
#define PI 3.14
int main()
{
    float r=6,POC,AOC;
    printf("enter radius:");
    scanf("%f",&r);
    POC = 2*PI*r;
    AOC = PI*r*r;
    printf("Perimeter of the circle = %f inches\n",POC);
    printf("Area of the circle = %f square inches",AOC);

    return 0;
}



























