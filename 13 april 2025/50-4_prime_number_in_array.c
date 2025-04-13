// Write a C program to find and display the positions and values of prime numbers within an array.


#include<stdio.h>
int main()
{
    int i,j,arr[5];
    printf("Input the 5 member of the array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if (i*i==arr[i])
            {
                printf("A[%d]=%2d\n",i,arr[i]);
            }

        }      
    }     
     
    return 0 ;     

}






