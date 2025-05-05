// Write a program in C to sort the elements of the array in descending order.
// Test Data :
// Input the size of array : 3
// Input 3 elements in the array :
// element - 0 : 5
// element - 1 : 9
// element - 2 : 1
// Expected Output :
// Elements of the array in sorted descending order:
// 9 5 1

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
             if(arr[j]>arr[j+1])
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
  
    printf("Elements of array in sorted descending order:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }


   
   return 0;
}

   