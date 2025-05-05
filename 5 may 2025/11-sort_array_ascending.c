// Write a program in C to sort elements of an array in ascending order.
// Test Data :
// Input the size of array : 5
// Input 5 elements in the array :
// element - 0 : 2
// element - 1 : 7
// element - 2 : 4
// element - 3 : 5
// element - 4 : 9
// Expected Output :
// Elements of array in sorted ascending order:
// 2 4 5 7 9

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
  
    printf("Elements of array in sorted ascending order:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    
    return 0;
}

    