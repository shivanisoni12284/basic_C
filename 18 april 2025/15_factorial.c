// Write a C program to calculate the factorial of a given number.
// Test Data :
// Input the number : 5
// Expected Output :
// The Factorial of 5 is: 120

#include<stdio.h>
int main()
{
    int fact=1,i,n;
    printf("enter any number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("The factorial of %d is :%d",n,fact);
    return 0;
}

    

















