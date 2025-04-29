//print hollow pyramid
//    *
//   * *
//  *   *
// *     *

#include<stdio.h>
int main()
{
    int i,j,k,temp=1,s;
    for(i=1;i<=4;i++)
    {
        for(j=4;j>i;j--)
        {
            printf(" ");
        }
        while(s=temp)
        {
            for(k=1;k<=s;k++)
            {
                if(k>1&&k<s)
                {
                    printf(" ");
                }
                if(k==1||k==s)
                {
                    printf("*");
                }
               
            }
             temp=temp+2;
             printf("\n");
             break;
        }
    }
   return 0;
}
   