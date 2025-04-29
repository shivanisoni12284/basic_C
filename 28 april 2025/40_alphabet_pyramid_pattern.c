// Write a C program to display the pyramid pattern using the alphabet.

//         A
//       A B A 
//     A B C B A
//   A B C D C B A 

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
      for(k=65;k<=65+i-1;k++)
      {
         // printf("%d",k);
        printf("%c ",k);
        temp=k;
      }
      // temp=k;
      while(temp>65)
      {
         for(s=temp-1;s>=65;s--)
         {
            printf("%c",s);
            printf(" ");
            temp=s;
         }
      }
      printf("\n");
   }                                      
   return 0;
}







