// Write a C program that reads the side (side sizes between 1 and 10 ) of a square and prints square using hash (#) character.
// Sample Input: 10
// Sample Output:

// Input the size of the square: 
//  # # # # # # # # # #
//  # # # # # # # # # #
//  # # # # # # # # # #
//  # # # # # # # # # #
//  # # # # # # # # # #
//  # # # # # # # # # #
//  # # # # # # # # # #
//  # # # # # # # # # #
//  # # # # # # # # # #
//  # # # # # # # # # #

#include<stdio.h>
int main()
{   
    int n;
    printf("Input the size of the number:");
    scanf("%d",&n);
    for(int i=1;i<=n*n;i++)
    {
        printf("#");
        if(i%n==0)
        {
            printf("\n");
        }
    }

    return 0;
}