// Write a program in C to store elements in an array and print them.
// Test Data :
// Input 10 elements in the array :
// element - 0 : 1
// element - 1 : 1
// element - 2 : 2
// .......
// Expected Output :
// Elements in array are: 1 1 2 3 4 5 6 7 8 9

#include<stdio.h>
int main()
{
    int arr[9],i;
    printf("enter 10 elements in an array:\n");
    for(i=0;i<=9;i++)
    {
        printf("enter %d element:",i);
        scanf("%d",&arr[i]);
    }
    printf("elements in an array are:");
    for(i=0;i<=9;i++)
    {
        printf("%d ",arr[i]);
    } 
    return 0;
}

   