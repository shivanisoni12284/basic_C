// Write a C program to count and calculate the average of even numbers from a series of five integers.

#include<stdio.h>
int main()
{
   int i,sum=0,count=0;
   float avg;
   int  arr[5];
   for(i=0;i<5;i++)
   {
      printf("enter the value %d:",i);
      scanf("%d",&arr[i]);
   }
   for(int i=0;i<5;i++)
   {
      if(arr[i]%2==0)
      {
           count++;
           sum= sum+arr[i];
           printf("%d\n",sum);
      }
   }
    avg= sum/count;
    printf("total even numbers :%d\n",count);
    printf("Average value of the said even numbers:%.2f\n",avg);

    
    return 0;


   }






































