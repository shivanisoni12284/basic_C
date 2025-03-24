// Write a C program that reads 5 numbers and sums all odd values between them.
// Test Data :
// Input the first number: 11
// Input the second number: 17
// Input the third number: 13
// Input the fourth number: 12
// Input the fifth number: 5
// Expected Output:
// Sum of all odd values: 46

#include<stdio.h>
int main()
{
    int a,b,c,d,e,n1=0,n2=0,n3=0,n4=0,n5=0,sum;
    printf("Input the first number:");
    scanf("%d",&a);
    printf("Input the second number:");
    scanf("%d",&b);
    printf("Input the third number:");
    scanf("%d",&c);
    printf("Input the four number:");
    scanf("%d",&d);
    printf("Input the five number:");
    scanf("%d",&e);
   
    if(a%2!=0)
       n1=a;
    if(b%2!=0)
       n2=b;
    if(c%2!=0)
       n3=c;
    if(d%2!=0)
       n4=d;
    if(e%2!=0)
       n5=e;       
    sum = n1+n2+n3+n4+n5;   
    printf("Sum of all odd values:%d",sum);
    return 0;

}

// using arrays 

#include<stdio.h>
int main()
{
   int i,n,s=0;
   int  arr[5];
   for(i=1;i<=5;i++)
   {
      printf("enter the value:");
      scanf("%d",&arr[i]);
   }
   for (i=0;i<=4;i++)
   {
      if(arr[i]%2!=0)
         n=arr[i];
         s=s+n;
         printf("%d\n",s);
   }
   printf("the sum is %d\n",s);
   return 0;

}



































