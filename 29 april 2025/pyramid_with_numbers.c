// pyramid with numbers
//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

#include<stdio.h>
int main()
{
   int i,j,k,n,s,temp;
   printf("enter the number of rows:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      for(j=n;j>i;j--)
      {
         printf("  ");
      }
      for(k=1;k<=1+i-1;k++)
      {
         // printf("%d",k);
        printf("%d ",k);
        temp=k;
      }
      // temp=k;
      while(temp>1)
      {
         for(s=temp-1;s>=1;s--)
         {
            printf("%d",s);
            printf(" ");
            temp=s;
         }
      }
      printf("\n");
   }                                      
   return 0;
}