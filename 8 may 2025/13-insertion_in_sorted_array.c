// Write a program in C to insert the values in the array (sorted list).
// Test Data :
// Input number of elements you want to insert (max 100): 5
// Input 5 elements in the array in ascending order:
// element - 0 : 2
// element - 1 : 3
// element - 2 : 4
// element - 3 : 7
// element - 4 : 8
// Input the value to be inserted : 5
// The existing array list is :
// 2 3 4 7 8
// After Insert the list is :
// 2 3 4 5 7 8

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

    printf("enter the value to be inserted:");
    scanf("%d",&num);

    printf("The existing array list is:\n");
    for(i=0;i<size;i++)
    {
       printf("%d ",arr[i]);
    }

    for(i=0;i<size;i++)
    {
        if(arr[i]<num && arr[i+1]>num)
        {
           pos=i+1;
           break;
        }

    }

    // inserting element in the sorted array
 
    for(i=size-1;i>pos-1;i--)
    {
        arr[i+1]=arr[i]; 
    }
    arr[pos]=num;
    size=size+1;

    // printing sorted array after insertion
    printf("\nafter insertion of new element in sorted array:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
    