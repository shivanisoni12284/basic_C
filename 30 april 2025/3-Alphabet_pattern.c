//print alphabet patterns
// A
// B C
// D E F
// G H I J

#include<stdio.h>
int main()
{
    int i,j,k,temp=65;
    // for(i=1;i<=4;i++)
    // {
    //     // int f=t;
    //     n=g;
    //     k=g;
    //     for(;k<=n;k++)
    //     {
    //         int f=t;
    //         j=s;
    //         for(;j<65+k+f;j++)
    //         {
    //             printf("%c ",j);
    //         }
    //         s=j;
    //         // printf("%d",s);
    //         // printf("\n");
    //         t=f+t+1;
    //         // printf("..%d",t);
    //     }
    //     g=k;
    //     printf("\n");


    for(i=1;i<=4;i++)
    {
        j=temp;
        for(;j<temp+i;j++)
        {
           if(j>65)
           {
              printf("%c",j);
           }
           else{
            printf("%c",j);
           }
        }
        temp=j;
        // printf("%d",temp);
        printf("\n");
     }

        
    
    return 0;
}
   