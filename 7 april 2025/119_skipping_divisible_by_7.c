// Write a C program to calculate the sum of all numbers between two given numbers (inclusive) not divisible by 7.
// Sample Output:
// Input two numbers(integer):
// 25
// 5
// Sum of all numbers between said numbers (inclusive) not divisible by 7:
// 273
// Sample Output:

// Input two numbers(integer):
// 6
// 36
// Sum of all numbers between said numbers (inclusive) not divisible by 7:
// 546

#include<stdio.h>
int main()
{
   int n1,n2,i,sum=0;
   printf("Input two numbers(integers):");
   scanf("%d %d",&n1,&n2);
   if (n2>n1)
   for(i=n1;i<=n2;i++)
   {
      if(i%7!=0)
      {
        // printf("%d",i);
        sum=sum+i;
      }
   }
   if (n1>n2)
   for(i=n2;i<=n1;i++)
   {
      if(i%7!=0)
      {
        // printf("%d",i);
        sum=sum+i;
      }
   }
   printf("%d",sum);
   return 0 ;
}
























