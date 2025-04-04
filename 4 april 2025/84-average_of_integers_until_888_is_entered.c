// Write a C program to calculate and print the average of some integers. Accept all the values preceding 888.
// Sample Input:12
// 15
// 24
// 888
// Sample Output:

// Input each number on a separate line (888 to exit):

// The average value of the said numbers is 17.000000

#include<stdio.h>
int main()
{
   int arr[100],n,total=0,count=0,avg;
   printf("enter your numbers:");
   for(int i=0;i<100;i++)
   {
       scanf("%d\n",&arr[i]);
       if (arr[i]==888)
       {
          n=i;
          break;
       }
    }
    for(int i=0;i<n;i++ )
    {
      total+=arr[i];
      count++;
    }
    avg=total/count;
    printf("The average value of the said numbers is %d",avg);
   
   return 0;
}

