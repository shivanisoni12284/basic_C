// Write a program in C to separate odd and even integers into separate arrays.
// Test Data :
// Input the number of elements to be stored in the array :5
// Input 5 elements in the array :
// element - 0 : 25
// element - 1 : 47
// element - 2 : 42
// element - 3 : 56
// element - 4 : 32
// Expected Output :
// The Even elements are :
// 42 56 32
// The Odd elements are :
// 25 47

#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the number of elements to be stored in the array: ");
    scanf("%d",&n);
    printf("enter %d elements in the array:\n",n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("enter %d element:",i);
        scanf("%d",&arr[i]);   
    }

    printf("the even elements are:");

    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            printf("%d ",arr[i]);       
    }

    printf("\nthe odd elements are:");

    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
            printf("%d ",arr[i]);       
    }

   return 0;
}

   