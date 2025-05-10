// Write a program in C to find a pair with the given difference.
// Expected Output:
// The given array is:
// 1 15 39 75 92
// The given difference is: 53
// The pair are: (39, 92)

#include<stdio.h>
int main()
{
    int i,j,diff=53,size;
    int arr[]={1,15,39,75,92};
    size=sizeof(arr)/sizeof(int);
    printf("The given difference is : %d\n",diff);
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1;j++)
        {
             if(arr[j]>arr[j+1])
             { 
                 continue;
             }
             else
             {
                arr[j]=arr[j]+arr[j+1];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
             }
        }
    }
  
    printf("The pair are:");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        { 
            if(arr[i]-arr[j]==53 )
            {
                printf("(%d,%d)",arr[i],arr[j]);
            }
            
        }
    }




    return 0;
}
