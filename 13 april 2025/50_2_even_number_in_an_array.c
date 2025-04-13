// Write a C program to identify and print the indices and values of even numbers in an array.

#include<stdio.h>
int main()
{
    int i,arr[5];
    printf("Input the 5 member of the array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        if (arr[i]%2==0)
            printf("A[%d]=%d\n",i,arr[i]);
    }     
     
    return 0 ;     

}





