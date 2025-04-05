// Write a C program that reads two integers m, n and computes the sum of n even numbers starting from m.

// Sample Output:
// Input two integes (m, n):
// 20
// 60
// Sum of 60 even numbers starting from 20:
// 4740

#include<stdio.h>
int main()
{
   int m,n,i,sum=0;
   printf("enter two integers (m,n):");
   scanf("%d\n",&m);
   scanf("%d",&n);
   for(i=m;i<=m+(n*2);i++)
   {
      
        if(i%2==0)
        {
         //   printf("%d\n",i);
           sum=sum+i;
         //   printf("s%d\n",sum);  
        }
   }
   printf("%d",sum);
   
   return 0;
}

   










