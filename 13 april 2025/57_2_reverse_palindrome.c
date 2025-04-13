// Write a C program to reverse the digits of a number and determine if the result is a palindrome.

#include<stdio.h>
int main()
{
    int n,rem,rev=0,orignum;
    printf("enter the number:");
    scan0f("%d",&n);
    orignum=n;
    while(n>0)
    {
      rem=n%10;
      rev=rev*10+rev;
      n=n/10;
    }
    printf("the reverse number is %d",rev);
    if(rev==orignum)
    {
        printf("the number is palindrome");
    }
    return 0;
}

    




