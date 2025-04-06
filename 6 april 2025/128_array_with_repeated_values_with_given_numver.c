// Write a C program that reads an array of integers (length 10), fills it with numbers from o to a (given number) n – 1 repeatedly, where 2 ≤ n ≤ 10.
// Sample Output:
// Input an integer (2-10)
// 8
// array_nums[0] = 0
// array_nums[1] = 1
// array_nums[2] = 2
// array_nums[3] = 3
// array_nums[4] = 4
// array_nums[5] = 5
// array_nums[6] = 6
// array_nums[7] = 7
// array_nums[8] = 0
// array_nums[9] = 1

#include<stdio.h>
int main()
{
   int n,i,arr[10],j=0;
   printf("enter an integer (2-10):");
   scanf("%d",&n);
   
   for(i=0;i<10;i++)
   {
      while(j<n)
      {
        printf("array_nums[%d]=%d\n",i,j);
        j+=1;
        break;
      }
      if(j==n)
      {
        j=0;
      }   
   }
   return 0;
}
   