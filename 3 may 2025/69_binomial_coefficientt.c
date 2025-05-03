// Write a C program to print a binomial coefficient table.
// Mx 0 1 2 3 4 5 6 7 8 9 10
// ----------------------------------------------------------
// 0 1
// 1 1 1
// 2 1 2 1
// 3 1 3 3 1
// 4 1 4 6 4 1
// 5 1 5 10 10 5 1
// 6 1 6 15 20 15 6 1
// 7 1 7 21 35 35 21 7 1
// 8 1 8 28 56 70 56 28 8 1
// 9 1 9 36 84 126 126 84 36 9 1
// 10 1 10 45 120 210 252 210 120 45 10 1

#include<stdio.h>
int main()
{
   int n,k,c=1,fact=1,calc,fact2,fact1=1,j,i,temp1=1;
   
   printf("0 %d\n",temp1);
   for(i=1;i<=10;i++)
   {
     printf("%d ",i);
     printf("%d ",temp1);
        fact=fact*i;
        // printf("%d",fact);  //1
        fact1=1;
        for(j=1;j<=10;j++)
        {
            fact1=fact1*j; 

            calc=i-j;
            if(calc<0)
            {
                break;
            }
            fact2=1;
            for(k=1;k<=calc;k++)
            {
                fact2=fact2*k;
            }
            // printf("..%d",fact2);
            c=fact/(fact1*fact2);
           
            printf("%d ",c);
        }
        printf("\n");

   }
   
    return 0;
}