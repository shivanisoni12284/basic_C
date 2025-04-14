// Write a C program to display Fibonacci numbers up to a maximum value of 50.

#include<stdio.h>
int main()
{
    int t1=0,t2=1;
    int nextterm=t1+t2;
    // int n;
    // printf("enter the number:");
    // scanf("%d",&n);
    
    printf("The fibonacci series %d,%d,",t1,t2);
    for(int i=3;i<=10;i++)
    {
        printf("%d,",nextterm);
        t1=t2;
        t2=nextterm;
        nextterm=t1+t2;
    }
   return 0;
}


   

















