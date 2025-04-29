// print butterfly pattern
// *      *
// **    **
// ***  ***
// ********
// ***  ***
// **    **
// *      *

#include<stdio.h>
int main()
{
   int n=1,calc1,i,j,calc2,k,temp;
   for(i=1;i<=8;i++)
   {
        if(i>=5&&i<=8)
        {
            for(k=n;k<=n;k=k+2)
            {
                calc1=i-k;
                for(j=1;j<=8;j++)
                {
                    if(j>=calc1&&j<=i)
                    {
                        printf(" ");
                        continue;
                    }
                    printf("*");
                }
                printf("\n");
            }
            n=k;
        }
       if(i<5&&i>=1)
       {
            calc1=i+1;
            calc2=8-i;
            for(j=1;j<=8;j++)
            {
            // int s=j+i;
                if(j>=calc1&&j<=calc2)
                {
                    printf(" ");
                    continue;
                }
                printf("*");
            }
            printf("\n");
        }
   }    
   
   return 0;
}

//Improved code

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=8;i++)
    {
        for(j=1;j<=8;j++)
        {
            if(i<=4)
            {
                if(j>=i+1&&j<=8-i)
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }  
            }
            // printf("\n");
            else if(i>=5)
            {
                if(j>9-i&&j<i)
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
            }
            // printf("\n");
        }
        printf("\n");
    }

    
    return 0;
}

       




