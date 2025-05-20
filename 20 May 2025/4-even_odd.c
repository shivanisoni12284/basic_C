// Write a program in C to check if a given number is even or odd using the function.

// Test Data :

// Input any number : 5

// Expected Output :

//  The entered number is odd.


#include<stdio.h>
void EvenOdd();

void EvenOdd()
{
    int n;
    printf("enter the first number:");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("The entered number is even");
    }
    else
    {
        printf("The entereed number is odd");
    }
}

void main()
{
    EvenOdd();
}