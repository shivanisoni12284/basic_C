// Write a program in C for a 2D array of size 3x3 and print the matrix.
// Test Data :
// Input elements in the matrix :
// element - [0],[0] : 1
// element - [0],[1] : 2
// element - [0],[2] : 3
// element - [1],[0] : 4
// element - [1],[1] : 5
// element - [1],[2] : 6
// element - [2],[0] : 7
// element - [2],[1] : 8
// element - [2],[2] : 9

#include<stdio.h>
int main()
{
    int arr[3][3],i,j;
    int row=3,col=3;
    printf("enter the elements of the matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("element - [%d],[%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The matrix-------\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }


   
   return 0;
}

   



