// Write a C program to count numbers meeting two conditions (e.g., positive and even) and then compute their average.

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
   for(i=0;i<5;i++)
   {
      if(arr[i]>=0 && arr[i%2==0])
      {
           count++;
           sum= sum+arr[i];
           printf("%d\n",sum);
      }
   }
    avg= sum/count;
    printf("Number of positive and even number:%d\n",count);
    printf("Average value of the said positive and even numbers:%.2f\n",avg);

    
    return 0;


   }






































