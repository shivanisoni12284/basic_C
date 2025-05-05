// Write a program in C to count the total number of duplicate elements in an array.
// Test Data :
// Input the number of elements to be stored in the array :3
// Input 3 elements in the array :
// element - 0 : 5
// element - 1 : 1
// element - 2 : 1
// Expected Output :
// Total number of duplicate elements found in the array is : 1

#include<stdio.h>
int main()
{
    int n,i,j,arr[n],count=0,temp;
    printf("enter the number of elements to be stored in the array:");
    scanf("%d",&n);

    printf("enter %d number of elements in the array:\n",n);

    for(i=0;i<n;i++)
    {
        printf("enter %d element:",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(temp==arr[i])
        {
            continue;
        }
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                temp=arr[i];
                count++;
            }
        }
    }
    printf("Total number of duplicate elements found in the array is :%d",count);
    return 0;
}
   