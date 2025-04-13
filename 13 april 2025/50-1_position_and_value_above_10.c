// Write a C program to print the positions and values of array elements that are greater than 10.

#include<stdio.h>
int main()
{
    int i;
    float arr[5];
    printf("Input the 5 member of the array:");
    for(i=0;i<5;i++)
    {
        scanf("%f",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        if (arr[i]>10)

            printf("A[%d]=%.2f\n",i,arr[i]);
    }     
     
    return 0 ;     

}





