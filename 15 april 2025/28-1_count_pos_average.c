// Write a C program to count negative numbers and calculate their average from five inputs.

#include<stdio.h>
int main()
{
   int i,sum=0,count=0;
   float avg;
   int  arr[5];
   for(i=0;i<=4;i++)
   {
      printf("enter the value %d:",i);
      scanf("%d",&arr[i]);
   }
   for( int i=0;i<5;i++)
   {
      if(arr[i]<0)
      {
           count++;
           sum= sum+arr[i];
           printf("%d\n",sum);
        
      }
   }  
    avg= sum/count;
    printf("Number of negative numbers :%d\n",count);
    printf("Average value of the said negative numbers:%.2f\n",avg);

    
    return 0;


   }






































