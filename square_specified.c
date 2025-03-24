// Write a C program to find and print the square of all the even values from 1 to a specified value.
// Test Data :
// List of square of each one of the even values from 1 to a 4 :
// Expected Output:
// 2^2 = 4
// 4^2 = 16

#include<stdio.h>
int main()
{
    int n,i,s;
    printf("input even number:");
    scanf("%d",&n);
    
    for(i=2;i<=n;i=i+2)
    {
       printf("%d\n",i);
       s=i*i;
       printf("%d^2 = %d\n",i,s);
    }
    return 0 ;

}
























