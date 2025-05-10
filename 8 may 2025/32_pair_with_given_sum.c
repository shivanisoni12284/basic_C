// Write a program in C to find a pair with given sum in the array.
// Expected Output :
// The given array : 6 8 4 -5 7 9
// The given sum : 15
// Pair of elements can make the given sum by the value of index 0 and 5

#include<stdio.h>
int main()
{
    int arr[6],sum,i,j;
    printf("enter elements in the array:\n");
    printf("The given array:\n");
    for(i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the any sum:");
    scanf("%d",&sum);

    printf("pair of elements can make the given sum by the value of index :\n");
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
               printf("(%d and %d) \n",i,j);
            }
        }
    }
    
    return 0;
}







