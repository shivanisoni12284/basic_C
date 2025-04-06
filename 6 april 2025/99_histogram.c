// Write a C program that takes some integer values from the user and prints a histogram.
// Sample Output:
// Input number of histogram bar (Maximum 10):
// 4
// Input the values between 0 and 10 (separated by space):
// 9
// 7
// 4
// 3
// Histogram:
// #########
// #######
// ####
// ###

#include<stdio.h>
int main()
{
    int n,m,arr[10],b;
    printf("enter number of histogram bar(Maximum 10):");
    scanf("%d",&n);

    printf("Input the values between 0 and 10 (separated by space):");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        b=arr[i];
        for(int j=1;j<=b;j++)
        {
            printf("#");
        }
        printf("\n");
    }
   return 0;
}









