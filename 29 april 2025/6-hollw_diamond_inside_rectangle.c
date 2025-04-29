// print hollow diamond inside rectangle diagram
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********

#include<stdio.h>
int main()
{
    int  i,j,k;
    
    for(i=6;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
                if(j>11-i&&j<i)
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
        }
        printf("\n")  ;
    }     
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=10;j++)
        {
            // if(i<=4)
            // {
                if(j>=i+1&&j<=10-i)
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }  
            // }
        }
        printf("\n");
    }
    
    
   return 0;
}
   