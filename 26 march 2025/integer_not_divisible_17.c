// Write a C program to calculate the sum of all numbers not divisible by 17 between two given integer numbers.
// Test Data :
// Input the first integer: 50 Input the second integer: 99
// Expected Output:
// Sum: 3521

#include<stdio.h>
int main()
{
    int i, n1,n2,s=0;
    printf("enter the first number:");
    scanf("%d",&n1);
    printf("enter the second number:");
    scanf("%d",&n2);
    
    //swaping of variable
    if(n1>n2)
    {
        n1=n1+n2;
        n2=n1-n2;
        n1=n1-n2;
    }
    if(n1<n2)
        for(i=n1;i<=n2;i++)
        {
             if((i%17)!=0)
             {
                s=s+i;
                // printf("the num %d\n",i);
                // printf("the sum %d\n",s);
             }
         }
    printf("sum: %d\n",s);
    return 0;
}