// Write a C program to find the heights of the top three buildings in descending order from eight given buildings.
// Input:
// 0 <= height of building (integer) <= 10,000
// Sample Output:
// Input heights(integer values) of the top eight buildings:
// 25
// 15
// 45
// 22
// 35
// 18
// 95
// 65
// Heights of the top three building:
// 95
// 65
// 45

#include<stdio.h>
int main()
{
    int arr[8],max,j,n=1;
    printf("input height of the top eight building :\n");

    for(int i=0;i<8;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Heights of the top three building:\n");
    max=arr[0];
    for(j=0;j<3;j++)
    {
        for(int i=1;i<8;i++)
        {
            if(i==n)  
            {
                continue;
            }
            if(arr[i]>max)
                max=arr[i];
                n=i;
            
            printf("%d\n",max);
        }    
    }  
    return 0; 
}





















