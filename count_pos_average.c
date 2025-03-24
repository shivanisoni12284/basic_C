// Write a C program that reads 5 numbers, counts the number of positive numbers, and prints out the average of all positive values.
// Test Data :
// Input the first number: 5
// Input the second number: 8
// Input the third number: 10
// Input the fourth number: -5
// Input the fifth number: 25
// Expected Output:
// Number of positive numbers: 4
// Average value of the said positive numbers: 12.00

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
        if(arr[i]>=0)
        {
             count++;
             sum= sum+arr[i];
             printf("%d\n",sum);
          
        }
    avg= sum/count;
    printf("Number of positive numbers :%d\n",count);
    printf("Average value of the said positive numbers:%.2f\n",avg);

    
    return 0;


   }






































