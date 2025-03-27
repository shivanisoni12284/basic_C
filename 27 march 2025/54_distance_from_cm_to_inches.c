// Write a C program that accepts a distance in centimeters and prints the corresponding value in inches.
// Test Data:
// Input Data: 500cms
// Input the distance in cm:
// Distance of 500.00 cms is = 196.85 inches

#include<stdio.h>
int main()
{
    float calc, dist ;
    printf("Input the distance in cm:");
    scanf("%f",&dist);

    calc = dist/2.54;
    printf("Distance of %f cms is = %.2f\n",dist,calc);

    return 0;
}

