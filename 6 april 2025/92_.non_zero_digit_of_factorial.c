// Write a C program to find the last non-zero digit of the factorial of a given positive integer.
// For example for 5!, the output will be "2" because 5! = 120, and 2 is the last nonzero digit of 120
// Sample Output:

// Input a positive number:
// The last non-zero digit of the said factorial:
// 2

#include<stdio.h>
int main()
{
   int n,fact=1,i,rem=0;
   printf("Enter any number:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      fact= fact*i;
   }  
   printf("%d\n",fact);
   while(fact>0)
   {

      rem=fact%10;
      if(rem>0)
      {
        printf("%d",rem);
        break;
      }
      fact=fact/10;
   }
   return 0;
}

   










