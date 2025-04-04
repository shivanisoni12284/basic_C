// Write a C program that reads an integer (7 digits or fewer) and counts the number of 3s in the given number.
// Sample Input: 538453
// Sample Output:
// Input a number: The number of threes in the said number is 2

#include<stdio.h>
int main()
{
   int n,rem,count;

   printf("enter some numbers:");
   scanf("%d",&n);
   while(n>0)
   {
      rem=n%10;
      if(rem==3)
      {
         count++;
      }
      n=n/10;
   }
   printf("occurence of 3 in number is =%d",count);
   
   return 0;
}



