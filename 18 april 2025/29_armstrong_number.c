// Write a C program to check whether a given number is an Armstrong number or not.
// Test Data :
// Input a number: 153
// Expected Output :
// 153 is an Armstrong number.

#include<stdio.h>
int main()
{
    int n,rem,rev=0;
    printf("enter any number:");
    scanf("%d",&n);
    int orignum=n;

    while(n>0)
    {
        rem=n%10;
        rev=rev+rem*rem*rem;
        n=n/10;
    }
     if(rev==orignum)
     {
        printf("%d is armstrong number =%d",orignum,rev);
     }
     else
     {
        printf("%d is not armstrong number",orignum);
     }

    
    return 0;
}

    














