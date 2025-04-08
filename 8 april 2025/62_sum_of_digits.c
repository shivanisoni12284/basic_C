// Write a C program that accepts a positive integer less than 500 and prints out the sum of the digits of this number.
// Input a positive number less than 500:
// Sum of the digits of 347 is 14

#include<stdio.h>
int main()
{
    int n,i,rem,sum=0;
    printf("enter a positive integer less than 500:");
    scanf("%d",&n);
    int orignum=n;

    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("Sum of the digits of %d is %d",orignum,sum);
    return 0;
}


     