// Write a C program that prints ten consecutive odd and even numbers after accepting an integer.
// Sample Output:

// Input an integer number:
// 15

// Next 10 consecutive odd numbers:
// 17, 19, 21, 23, 25, 27, 29, 31, 33, 35,

// Next 10 consecutive even numbers:
// 26, 28, 30, 32, 34, 36, 38, 40, 42, 44,

#include<stdio.h>
int main()
{    
    int n,i,m;
    printf("enter any number:");
    scanf("%d",&n);
    if(n%2==0)
    {   
        printf("Next consecutive 10 even numbers:\n");
        for(i=n;i<=n+20;i=i+2)
        {
           printf("%d,",i);
        }
        m=n+1;
        printf("\nNext consecutive 10 odd numbers:\n");
        for(i=m;i<=m+20;i=i+2)
        {
           printf("%d,",i);
        }
    }

    if(n%3==0)
    {   
        printf("Next consecutive 10 odd numbers:\n");
        
        for(i=n;i<=n+20;i=i+2)
        {
           printf("%d,",i);
        }
        n=n+1;
        printf("\nNext consecutive 10 even numbers:\n");
        for(i=n;i<=n+20;i=i+2)
        {
           printf("%d,",i);
        }
    }

    return 0;
}



















