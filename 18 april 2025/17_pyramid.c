// Write a C program to make such a pattern like a pyramid with a number which will repeat the number in the same row.

//    1
//   2 2
//  3 3 3
// 4 4 4 4

#include<stdio.h>
int main()
{
    int n,i;
    for(int i=1;i<=4;i++)
    {
        for(int j=4-i;j>=1;j--)
        {
            printf(" ");
        }
        for(int k=i;k>=1;k--)
        {
            printf("%d ",i);
        }
        printf("\n");
    }

    
    return 0;
}

    




