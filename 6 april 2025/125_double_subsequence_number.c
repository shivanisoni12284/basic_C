// Write a C program that reads an array of integers (length 7), and replaces the first element of the array by a given number and replaces each subsequent position of the array by the double value of the previous.

// Sample Output:
// Input the first element of the array:
// 5
// Array elements:
// array_nums[0] = 5
// array_nums[1] = 10
// array_nums[2] = 20
// array_nums[3] = 40
// array_nums[4] = 80
// array_nums[5] = 160
// array_nums[6] = 320

#include<stdio.h>
int main()
{
    int arr[7],i,n;
    printf("Enter firstelement of the  array :");
    scanf("%d",&n);
    printf("array elements:\n");
    for(i=0;i<7;i++)
    { 
        arr[i]=n;
        n=n+n;
        printf("array_num[%d]=%d\n",i,arr[i]);
    }


    return 0 ;
}












