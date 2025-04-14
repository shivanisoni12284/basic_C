// Write a C program to list numbers between 1 and 100 that are one less than a multiple of a user-provided number.

#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=100;i++)
    {
        for(int j=1;j<=100;j++)
        {
            if(j==((i*n)-1))
            {
                printf("%d\n",j);
            }
        }
    }

   
   return 0;
}

   


















