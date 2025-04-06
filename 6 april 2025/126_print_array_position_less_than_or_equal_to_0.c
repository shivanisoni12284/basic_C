// Write a C program that reads an array (length 7) and prints all array positions that store a value less than or equal to 0.
// Sample Output:
// Input 7 array elements:
// 15
// 23
// 37
// 65
// 20
// -7
// 65
// Array positions that store a value less or equal to 0:
// array_nums[5] = -7.0

#include<stdio.h>
int main()
{
    int arr[7],i;
    printf("Enter 7 array element:\n");
    for(i=0;i<7;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf(" Array positions that store a value less or equal to 0:");
    for(i=0;i<7;i++)
    {
        if(arr[i]<0 || arr[i]==0)
        {
            // float arr[i];
            printf("array_nums[%d]=%d",i,arr[i]);
        }
    }

    return 0;

}

















