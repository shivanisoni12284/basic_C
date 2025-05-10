// Write a program in C to insert values in the array (unsorted list).
// Test Data :
// Input the size of array : 4
// Input 4 elements in the array in ascending order:
// element - 0 : 1
// element - 1 : 8
// element - 2 : 7
// element - 3 : 10
// Input the value to be inserted : 5
// Input the Position, where the value to be inserted :2
// Expected Output :
// The current list of the array :
// 1 8 7 10
// After Insert the element the new list is :
// 1 5 8 7 10

#include<stdio.h>
int main()
{ 
    int size,num,pos,i;
    printf("enter the size of the array:");
    scanf("%d",&size);

    int arr[50];
    
    
    printf("Enter the elements in the array:\n");
    for(i=0;i<size;i++)
    {
        printf("enter %d element:",i);
        scanf("%d",&arr[i]);
    }
    
    //taking value and position that to be inserted in the array 
    printf("enter the value to be inserted:");
    scanf("%d",&num);
    printf("enter the position where the value to be inserted:");
    scanf("%d",&pos);

    // printing array before insertion  
    printf("the current list of the array--------\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

    // inserting new element in the array
    for(i=size-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[i+1]=num;
    size=size+1;

    // printing array after insertion
    printf("\nAfter insertion of new element in the array-----\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }



   
    return 0;
}
   