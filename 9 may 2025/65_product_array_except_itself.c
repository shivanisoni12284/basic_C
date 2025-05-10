// Write a program in C to find the product of an array such that product is equal to the product of all the elements of arr[] except arr[i].
// Expected Output :
// The given array is : 1 2 3 4 5 6
// The product array is: 720 360 240 180 144 120

#include<stdio.h>
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int check=0,prod=1,i,j;
    printf("The given array is:");
    for(i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nThe product array is:");
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            if(i==j)
            {
                continue;
            }
            prod=prod*arr[j];
        }
        printf("%d ",prod);
        prod=1;
    }

    
    return 0;
}

    











