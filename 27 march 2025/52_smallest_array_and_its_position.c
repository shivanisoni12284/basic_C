// Write a C program to read an array of length 6 and find the smallest element and its position.
// Test Data:
// Input the length of the array: 5 Input the array elements:
// 25
// 35
// 20
// 14
// 45
// Expected Output:
// Smallest Value: 14
// Position of the element: 3


#include<stdio.h>
int main()
{
    int arr[6],n,min,max,i;
    printf("Input the length of the array:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
         printf("Input the array elements:");
         scanf("%d",&arr[i]);

    }
    min=arr[0];
    max=arr[0];

    for(i=1;i<5;i++)
    {
        if(arr[i]<min)
            min=arr[i];
             n=i;
      
    }
    
   
    printf("Smallest value = %d\n",min);
    printf("position of the element = %d",n);
    return 0;
}













