// Write a C program to sum all numbers between two given integers, excluding those that are multiples of a user-specified number.

#include<stdio.h>
int main()
{
    int a,b,n,sum;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("enter any number of your choice");
    scanf("%d",&n);
    if(b<a)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    for(int i=a;i<=b;i++)
    {
        if(i%n!=0)
        {
            // printf("%d",i);
            sum=sum+i;
        }
    }
    printf("the sum is %d",sum);


   
   return 0;
}

   