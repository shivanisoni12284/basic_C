// Write a program in C to delete an element at a desired position from an array.
// Test Data :
// Input the size of array : 5
// Input 5 elements in the array in ascending order:
// element - 0 : 1
// element - 1 : 2
// element - 2 : 3
// element - 3 : 4
// element - 4 : 5
// Input the position where to delete: 3
// Expected Output :
// The new list is : 1 2 4 5
#include<stdio.h>
int main()
{
    int size,num,pos,i;
    printf("enter size of array:");
    scanf("%d",&size);

    int arr[50];

    printf("enter the elements in the array:\n");
    for(i=0;i<size;i++)
    {
       printf("enter %d elements-",i);
       scanf("%d",&arr[i]);
    }

    printf("enter the position where to delete:");
    scanf("%d",&pos);

    printf("The existing array list is:\n");
    for(i=0;i<size;i++)
    {
       printf("%d ",arr[i]);
    }

    // deleting element from the array
 
    for(i=pos-1;i<size;i++)
    {
        arr[i]=arr[i+1]; 
    }
    size=size-1;

    // printing array after deletion
    printf("\nafter insertion of new element in sorted array:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
    