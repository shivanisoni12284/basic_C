//print alphabet patterns
// A
// B C
// D E F
// G H I J

#include<stdio.h>
int main()
{
    int i,j,k,temp=65;
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
   
