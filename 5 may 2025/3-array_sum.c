// Write a program in C to find the sum of all elements of the array.
// Test Data :
// Input the number of elements to be stored in the array :3
// Input 3 elements in the array :
// element - 0 : 2
// element - 1 : 5
// element - 2 : 8
// Expected Output :
// Sum of all elements stored in the array is : 15

#include<stdio.h>
int main()
{
    int n,sum;
    printf("enter the number of elements to store in the array:");
    scanf("%d",&n);

    int i,arr[n];
   
    printf("enter %d number of elements in the array:\n",n);
    for(i=0;i<n;i++)
    {
        printf("enter %d element:",i);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("sum of all elements stored in the array is:%d",sum);
    return 0;
}
    