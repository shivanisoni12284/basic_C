// Write a program in C to accept two matrices and check whether they are equal.
// Test Data :
// Input Rows and Columns of the 1st matrix :2 2
// Input Rows and Columns of the 2nd matrix :2 2
// Input elements in the first matrix :
// element - [0],[0] : 1
// element - [0],[1] : 2
// element - [1],[0] : 3
// element - [1],[1] : 4
// Input elements in the second matrix :
// element - [0],[0] : 1
// element - [0],[1] : 2
// element - [1],[0] : 3
// element - [1],[1] : 4
// Expected Output :
// The first matrix is :
// 1 2
// 3 4
// The second matrix is :
// 1 2
// 3 4
// The Matrices can be compared :
// Two matrices are equal.

#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of square matrix(less than 5):");
    scanf("%d",&n);

    int arr[n][n],arr1[n][n],i,j;
    int row=n,col=n;
    printf("enter elements in the first matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("element - [%d],[%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("enter elements in the second matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("element - [%d],[%d]:",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("First matrix-------\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("Second matrix -------\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    printf("The multiplication of two matrices are -------\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(arr[i][j]==arr1[i][j])
            {
              printf("the two matrix are equal");
            }   
        }
        printf("\n");
    }
    
   
   return 0;
}
   