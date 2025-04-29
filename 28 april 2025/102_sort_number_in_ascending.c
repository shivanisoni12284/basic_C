// Write a C program that reads three integers and sorts the numbers in ascending order. Print the original numbers and the sorted numbers.
// Sample Output:
// Input 3 integers: 17
// -5
// 25
// ---------------------------
// Original numbers: 17, -5, 25
// Sorted numbers: -5, 17, 25
#include<stdio.h>  
int main()
{
    int i,j,arr[5];
    for(i=0;i<5;i++)
    {
        printf("enter %d element:",i);
        scanf("%d",&arr[i]);
    }
    for(int k=0;k<5-1;k++)
    {
        for(j=0;j<5-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                continue;
            }
            else
            {
                arr[j]=arr[j]+arr[j+1];
                arr[j+1]=arr[j]-arr[j+1];  
                arr[j]=arr[j]-arr[j+1];
                printf("%d",arr[j]);
                // break;
            }
        }
        // break;
    }
    printf("the sorted array:");
    for(int i=0;i<5;i++)
    {
        printf("%d,",arr[i]);
    }
    return 0;
}

 




























// #include<stdio.h>
// int main()
// {
//     int n,arr[3],i,arr2[3];
//     printf("enter 3 numbers:\n");
//     for(i=0;i<3;i++)
//     {
//        printf("enter %d element",i);
//        scanf("%d",&arr[i]);
//     }
//     printf("the sorted numbers:");
//     for()
//     for(i=0;i<3-1;i++)
//     {
//         if(arr[i]<arr[i+1])
//         {
//            int temp=arr[i];
//            printf("%d,",arr[i]);
//         }
//         else if(arr[i]>arr[i+1])
//         {
//             arr[i]=arr[i]+arr[i+1];
//             arr[i+1]=arr[i]-arr[i+1];
//             arr2[i+1]= arr[i+1]=arr[i]-arr[i+1];
//             arr[i]=arr[i]-arr[i+1];
//             arr2[i]=arr[i];
//         }   
//     }
//     printf("array 2:");
//     for(int j=0;j<=3;j++)
//     {
//         printf("%d,",arr2[i]);
//     }
    
//     return 0 ;
// }























