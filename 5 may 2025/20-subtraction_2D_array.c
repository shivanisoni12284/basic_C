// Write a program in C for the subtraction of two matrices.
// Test Data :
// Input the size of the square matrix (less than 5): 2
// Input elements in the first matrix :
// element - [0],[0] : 5
// element - [0],[1] : 6
// element - [1],[0] : 7
// element - [1],[1] : 8
// Input elements in the second matrix :
// element - [0],[0] : 1
// element - [0],[1] : 2
// element - [1],[0] : 3
// element - [1],[1] : 4
// Expected Output :
// The First matrix is :

// 5 6
// 7 8
// The Second matrix is :

// 1 2
// 3 4
// The Subtraction of two matrix is :

// 4 4
// 4 4

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
    printf("The difference of two matrices are -------\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]-arr1[i][j]);
        }
        printf("\n");
    }


   
   return 0;
}
   