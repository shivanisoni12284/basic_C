// Write a program in C to copy the elements of one array into another array.
// Test Data :
// Input the number of elements to be stored in the array :3
// Input 3 elements in the array :
// element - 0 : 15
// element - 1 : 10
// element - 2 : 12
// Expected Output :
// The elements stored in the first array are :
// 15 10 12
// The elements copied into the second array are :
// 15 10 12

#include<stdio.h>
int main()
{
    int size,i;
    printf("enter the size of array:");
    scanf("%d",&size);

    int arr[size],arr_copy[size];
    printf("enter %d elements in the array:\n");
    for(i=0;i<size;i++)
    {
       printf("elements - %d:",i );
       scanf("%d",&arr[i]);
       arr_copy[i]=arr[i];
    }

    printf("The elements stored in the first array are:");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nThe elements copied into the second array are:");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr_copy[i]);
    }



   
 
   return 0;
}
 