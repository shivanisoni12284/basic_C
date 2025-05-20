// Write a program in C to swap two numbers using a function.

// Test Data :

// Input 1st number : 2
// Input 2nd number : 4

// Expected Output :

// Before swapping: n1 = 2, n2 = 4                                                  
// After swapping: n1 = 4, n2 = 2 

#include<stdio.h>
void swap();

void swap()
{
    int a,b;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    printf("Before swapping:a=%d, b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping:a=%d, b=%d",a,b);

}

void main()
{
    swap();
}