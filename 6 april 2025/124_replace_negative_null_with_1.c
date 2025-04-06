// Write a C program that reads an array of integers (length 7), replaces every negative or null element with 1 and prints the array elements.
// Sample Output:
// Input 7 array elements:
// 15
// 12
// -7
// 25
// 0
// 27
// 53

// Array elements:
// array_nums[0] = 15
// array_nums[1] = 12
// array_nums[2] = 1
// array_nums[3] = 25
// array_nums[4] = 1
// array_nums[5] = 27
// array_nums[6] = 53

#include<stdio.h>
int main()
{
    int arr[7],i;
    printf("Enter 7 array element:");
    for(i=0;i<7;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("array elements:\n");
    for(i=0;i<7;i++)
    {
        if(arr[i]<0 || arr[i]==0)
        {
            arr[i]=1;
        }
        printf("array_num[%d]=%d\n",i,arr[i]);
    }
    // printf("array elements:\n");
    // printf("array_num[%d]=%d",i,arr[i]);
    return 0;
}








