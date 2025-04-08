// Write a C program to shift given data by two bits to the left.
// Input value : 2
// Read the integer from keyboard-
// Integer value = 2
// The left shifted data is = 16

#include<stdio.h>
int main()
{
   int a,b,n;
   printf("Input value ");
   scanf("%d",&n);
   printf("enter the integer:");               //left shift = 2*2^2=8
   scanf("%d",&a);
   b= a<<2;
   printf("The shifted data is = %d",b);
   return 0 ;
}




















