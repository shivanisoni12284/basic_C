// Write a program in C to find the square of any number using the function.

// Test Data :

// Input any number for square : 20

// Expected Output :

// The square of 20 is : 400.00

#include<stdio.h>
int square();

int a,sq;
int square()
{
    // int a,sq;
    printf("enter any number:");
    scanf("%d",&a);
    sq=a*a;
    return sq;
}


void main()
{
   
   int calc=square();
   printf("the square of a number %d is %d",a,calc);
}

