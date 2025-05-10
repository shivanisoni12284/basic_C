// Write a program in C to find two numbers that occur an odd number of times in an array.
// Expected Output:
// The given array is: 6 7 3 6 8 7 6 8 3 3
// The two numbers occuring odd number of times are: 3 & 6

#include<stdio.h>
int main()
{
    int i,j,count=0,size;
    int arr[]={6,7,3,6,8,7,6,8,3,3};
    size=sizeof(arr)/sizeof(int);
    int temparr[size];
    printf("The two numbers occuring odd number of times are:");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }

        if(count!=2)
        {
            // for(i=0;i,size;i++)
            // {
            //     if(arr[i]==temparr[i])
            //     {
            //         break;
            //     }
            // }
            printf("%d ",arr[i]);
            temparr[size]=arr[i];
            count=0;
        }
        else
        {
            count=0;
        }

    }

    
    return 0;
}

    
