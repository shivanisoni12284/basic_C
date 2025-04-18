// Write a C program to calculate the average of numbers that are above a specified threshold from a set of inputs.

#include<stdio.h>
int main()
{
   int i,sum=0,count=0,n;
   float avg;
   int  arr[5];
   printf("enter any number:");
   scanf("%d",&n);
   for(i=0;i<5;i++)
   {
      printf("enter the value %d:",i);
      scanf("%d",&arr[i]);
   }
   for(int i=0;i<5;i++)
   {
      if(arr[i]>=n)
      {
           count++;
           sum=sum+arr[i];
         //   printf("%d\n",sum);
      }
   }
    avg= sum/count;
    printf("total Number greater than specified number :%d\n",count);
    printf("Average value of the said number greater than specified number:%.2f\n",avg);

    
    return 0;


   }






































