// Write a C program that accepts two integer values and calculates the sum of all even values between them.
// Sample Output:

// Input two numbers (integer values):
// 25
// 45

// Sum of all even values between 25 and 45
// 350
// Sample Output:

// Input two numbers (integer values):
// 27
// 13

// Sum of all even values between 27 and 13
// 140


#include<stdio.h>
int main()
{
   int n1,n2,i,sum=0;
   printf("Input two numbers(integers):");
   scanf("%d %d",&n1,&n2);
   if (n2>n1)
   for(i=n1;i<=n2;i++)
   {
      if(i%2==0)
      {
        // printf("%d",i);
        sum=sum+i;
      }
   }
   if (n1>n2)
   for(i=n2;i<=n1;i++)
   {
      if(i%2==0)
      {
        // printf("%d",i);
        sum=sum+i;
      }
   }
   printf("%d",sum);
   return 0 ;
}




