// Write a program in C to search for an element in a row wise and column wise sorted matrix.
// Expected Output :
// The given array in matrix form is :
// 15 23 31 39
// 18 26 36 43
// 25 28 37 48
// 30 34 39 50
// The given value for searching is: 37
// The element Found at the position in the matrix is: 2, 2

#include<stdio.h>
int main()
{
    int i,j,arr[4][4]={{15,23,31,39},{18,26,36,43},{25,28,37,48},{30,34,39,50}};
    printf("The given value for searching is:%d\n",arr[2][2]);  
    printf("The element found at the position in the matrix is:");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(arr[i][j]==37)
            {
                printf("%d,%d ",i,j);
            }
        }
    }




       


    return 0;
}




