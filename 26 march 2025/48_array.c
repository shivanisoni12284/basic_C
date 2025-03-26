// Write a C program that reads and prints the elements of an array of length 7. Before printing, replace every negative number, zero, with 100.
// Test Data:
// Input the 5 members of the array:
// 25
// 45
// 35
// 65
// 15

// Expected Output:
// Array values are:
// n[0] = 25
// n[1] = 45
// n[2] = 35
// n[3] = 65
// n[4] = 15

#include<stdio.h>
int main()
{
    int arr[7],i;
    for(i=0;i<5;i++)
    {
        printf("enter the number:");
        scanf("%d",&arr[i]);
    }

    printf("array values are :");
    for(i=0;i<5;i++)
    {   
         if(arr[i]<0||arr[i]==0)
        {
            arr[i]=100;
        }
        printf("n[%d]=%d\n",i,arr[i]);
    }
    return 0;
}













