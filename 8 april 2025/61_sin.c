// Write a C program that accepts a real number x and prints out the corresponding value of sin(1/x) using 4-decimal places.
// Input value of x: .6235
// Value of sin(1/x) is 0.9995

#include<stdio.h>
#include<math.h>
int main()
{
    float s,x;
    printf("Input value of x:");
    scanf("%f",&x);
    
    s=sin(1/x);
    printf("value of sin(1/x) is %.4f",s);
    
    return 0;
}