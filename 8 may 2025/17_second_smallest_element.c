// Write a program in C to find the second smallest element in an array.
// Test Data :
// Input the size of array : 5
// Input 5 elements in the array (value must be <9999) :
// element - 0 : 0
// element - 1 : 9
// element - 2 : 4
// element - 3 : 6
// element - 4 : 5
// Expected Output :
// The Second smallest element in the array is : 4

#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the number of elements to be stored in the array:");
    scanf("%d",&n);

    int arr[n];

    printf("enter %d elements in the array:\n",n);
    for(i=0;i<n;i++)
    {
        printf("elements number-%d :",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
             if(arr[j]<arr[j+1])
             { 
                 continue;
             }
             else
             {
                arr[j]=arr[j]+arr[j+1];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
             }
        }
    }
    printf("The second smallest element in the array:%d",arr[1]);

    
    return 0;
}