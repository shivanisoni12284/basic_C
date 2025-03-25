// Write a C program that finds all integer numbers that divide by 7 and have a remainder of 2 or 3 between two given integers.
// Test Data :
// Input the first integer: 25
// Input the second integer: 45
// Expected Output:
// 30
// 31
// 37
// 38
// 44

#include<stdio.h>
int main()
{
    int i, n1,n2;
    printf("enter the first number:");
    scanf("%d",&n1);
    printf("enter the second number:");
    scanf("%d",&n2);
    
    if(i>0)
    {
    if(n1<n2)
    for(i=n1;i<=n2;i++)
    {
         if(i%7==2 || i%7==3)
              printf("%d\n",i);
    }
    if(n2<n1)
    for(i=n2;i<=n1;i++)
    {
         if(i%7==2 || i%7==3)
              printf("%d\n",i);
    }
   
    
    return 0;
    



}
















