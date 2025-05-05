// wap to read sum of two arrays of size 5 and store their sum in third array

#include<stdio.h>
int main()
{
    int i,arr1[5],arr2[5],arr3[5];
    printf("Enter the first array elements :\n");
    for(i=0;i<5;i++)
    {
        printf("enter %d element :",i);
        scanf("%d",&arr1[i]);
    }
    printf("\nEnter the second array elements :\n");
    for(i=0;i<5;i++)
    {
        printf("enter %d element :",i);
        scanf("%d",&arr2[i]);
        arr3[i]=arr1[i]+arr2[i];
    }

    printf("\nsum of two array in third array:\n");
    for(i=0;i<5;i++)
    {
        printf("element - %d:",i);
        printf("%d\n",arr3[i]);
        // arr3[i]=arr1[i]+arr2[i];
    }

   
   return 0;
}

   