// Write a C program to evaluate the equation y=xn when n is a non-negative integer.
// Input the values of x and n: 256
// x=256.000000; n=0;
// x to power n=1.000000

#include<stdio.h>
#include<math.h>
int main()
{ 
   unsigned int n;
   float x,y;
   printf("enter any non negative integer:");
   scanf("%u",&n);
   printf("enter any number:");
   scanf("%f",&x);

    y=pow(x,n);                     //if no using math header file it will show warning --> incompatible implicit declaration of built-in function 'pow'
    printf("x to power n = %f",y);
    return 0;

}













