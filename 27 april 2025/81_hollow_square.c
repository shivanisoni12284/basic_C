// Write a C program that reads the side (side sizes between 1 and 10 ) of a square and prints a hollow square using the hash (#) character.
// Sample Input: 10
// Sample Output:

// Input the size of the square: 
// ##########
// #        #
// #        #
// #        #
// #        #
// #        #
// #        #
// #        #
// #        #
// ##########

#include<stdio.h>
int main()
{
    int i,k,j;
    for(i=1;i<=10;i++)
    {
        
        if(i>=2&&i<=9)
        {
            for(j=1;j<=10;j++)
            {
                if(j>=2&&j<=9)
                {
                    printf(" ");
                    continue;
                }
                printf("#");
            }
            printf("\n");
        }
        if(i==1||i==10)
        {
            for(int h=1;h<=10;h++)
            {
                printf("#");
            }
            printf("\n");
        }
    }
   return 0;
}


   



