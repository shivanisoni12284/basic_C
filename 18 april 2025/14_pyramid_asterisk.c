// Write a C program to make such a pattern as a pyramid with an asterisk.

//    * 
//   * * 
//  * * * 
// * * * *


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
            printf("* ");
        }
        printf("\n");
        
    }
    return 0;
}