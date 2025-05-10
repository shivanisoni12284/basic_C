// Write a program in C to count all distinct pairs for a specific difference.
// Expected Output:
// The given array is:
// 5 2 3 7 6 4 9 8
// The distinct pairs for difference 5 are: [7, 2] [8, 3] [9, 4]
// Number of distinct pairs for difference 5 are: 3

#include<stdio.h>
int main()


{
    int i,j,size,count=0;
    int arr[]={5,2,3,7,6,4,9,8};
    size=sizeof(arr)/sizeof(int);
    // printf("%d",size);
   
    for(i=0;i<size-1;i++)
    {
        
        for(j=0;j<size-1;j++)
        {
             if(arr[j]>arr[j+1])
             { 
                // printf("%d",arr[j]);
                 continue;
             }
             else
             {
                arr[j]=arr[j]+arr[j+1];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
                // printf("%d",arr[j]);
             }
        }
    }
  
    printf("The distinct pairs for difference 5 are:");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(arr[i]-arr[j]==5)
            {
                printf("[%d,%d]",arr[i],arr[j]);
                count++;
            }
        }
    }
    printf("\nNumbers of distinct pair for difference 5 are: %d",count);

   return 0;
}


    