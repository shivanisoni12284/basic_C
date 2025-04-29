// print palindromic pattern 
//         1
//       2 1 2
//     3 2 1 2 3
//   4 3 2 1 2 3 4
// 5 4 3 2 1 2 3 4 5

#include<stdio.h>
int main()
{
    int i,j,k,n;
    for(i=1;i<=5;i++)
    {
        for(j=4;j>=i;j--)
        {
            printf("  ");
        }
        for(k=i;k>=1;k--)
        {
            printf("%d ",k);
        }

        if(i>1)
        {
            for(n=2;n<=i;n++)
            {
                printf("%d ",n);
            }
        }
        printf("\n");

    }

   
   return 0;
}
   