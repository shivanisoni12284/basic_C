// Write a program in C to display a pattern like a right angle triangle using an asterisk.
// The pattern like :
// *
// **
// ***
// ****

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
       
    }


   return 0;
}














