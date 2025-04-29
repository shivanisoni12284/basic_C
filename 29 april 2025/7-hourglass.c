//print hourglass pattern
// * * * * *
//  * * * *
//   * * *
//    * *
//     *
//    * *
//   * * *
//  * * * *
// * * * * *

#include<stdio.h>
int main()
{
   int i,j,k,temp;
   for(i=1;i<=5;i++)
   {
      for(j=i;j>1;j--)    
      {
         printf(" ");
      }
      for(k=i;k<=5;k++)
      {
        printf("* ");
      }
      printf("\n");
   }
   temp=2;
   for(i=1;i<=4;i++)
   {
      for(j=4;j>i;j--)    
      {
         printf(" ");
      }
      for(k=1;k<i+temp;k++)
      {
        printf("* ");
      }
      printf("\n");
   }
   return 0;
}
   