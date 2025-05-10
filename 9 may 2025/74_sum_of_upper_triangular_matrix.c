// Write a program in C to find the sum of the upper triangular elements of a matrix.
// Expected Output:
// The given array is :
// 1 2 3
// 4 5 6
// 7 8 9
// The elements being summed of the upper triangular matrix are: 2 3 6
// The Sum of the upper triangular Matrix Elements are: 11

#include<stdio.h>
int main()
{
    int arr[4][4],i,j,sum=0;
    int row=4,col=4,n=3;
    printf("enter the elements of the matrix:\n");
    //taking input from user
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("element - [%d],[%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    //printing matrix
    printf("The matrix-------\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    //setting zero in upper triangular
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
           if(i==0||i==1)
           {
             if(i==1&&j==n)
             {
                sum=sum+arr[i][j];
                printf("ss%d",sum);
             }
             else if(j==n-1 && i!=1||j==n)
             {
                sum=sum+arr[i][j];
                printf("ss%d",sum);
             }
           } 
        }
    }
     printf("The sum of upper triangular matrix:%d",sum);

    
   return 0;
}
