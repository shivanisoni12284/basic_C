// Write a C program to reverse and print a given number.
// Input a number:
// The original number = 234
// The reverse of the said number = 432

#include<stdio.h>
int main()
{
    int n,rem,rev=0;
    printf("enter the number:");
    scanf("%d",&n);
    printf("the original number = %d\n",n);
    
    while(n>0)
    {
        rem=n%10;
        rev= rev*10+rem;
        n=n/10;
    }
    printf("The reverse of the number is %d\n",rev);

    return 0 ;
}
















