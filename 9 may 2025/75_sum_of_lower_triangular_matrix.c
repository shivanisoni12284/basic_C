// Write a program in C to find the sum of the lower triangular elements of a matrix.
// Expected Output:
// The given array is :
// 1 2 3
// 4 5 6
// 7 8 9
// The elements being summed of the lower triangular matrix are: 4 7 8
// The Sum of the lower triangular Matrix Elements are: 19


#include<stdio.h>
int main()
{
    int m;
    printf("enter the size of array:");
    scanf("%d",&m);

    int arr[m][m],i,j,sum=0;

    int n=m-1;
    printf("enter the elements of the matrix:\n");
    //taking input from user
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("element - [%d],[%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    //printing matrix
    printf("The matrix-------\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    //setting zero in lower triangular matrix
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
           if(i==n||i==n-1)
           {
             if(i==n-1&&j==0)
             {
                sum=sum+arr[i][j];
             }
             else if(j==1 && i!=n-1||j==0)
             {
                sum=sum+arr[i][j];
             }
           } 
        }
    }


    printf("The sum of lower triangular matrix is %d",sum);
 
   return 0;
}