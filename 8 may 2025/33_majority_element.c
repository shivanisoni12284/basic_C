// Write a program in C to find the majority element of an array.
// A majority element in an array A[] of size n is an element that appears more than n/2 times (and hence there is at most one such element).
// Expected Output :
// The given array is : 4 8 4 6 7 4 4 8
// There are no Majority Elements in the given array

#include<stdio.h>
int main()
{
    int size,count=0,i,j,check=0;
    int arr[]={4,8,4,6,7,4,4,8};
    size=sizeof(arr)/sizeof(int);
    // printf("%d",size);

    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count>(size/2))
        {
            printf("%d is the majority element with %d times",arr[i],count);
            count=0;
            check++;
        }
        else if(i==size-1 && check==0)
        {
            printf("There is no majority element present in the array");
        }
        else
        {
           count=0;
        }
    }
    return 0;
}    