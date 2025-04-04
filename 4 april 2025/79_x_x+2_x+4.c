// 9. Generate a table with x,x+2,x+4 using loops

// Write a C program using looping to produce the following table of values.
// Sample Output:

// x       x+2     x+4     x+6
// --------------------------------
// 1       3       5       7
// 4       6       8       10
// 7       9       11      13
// 10      12      14      16
// 13      15      17      19

#include<stdio.h>
int main()
{
   int n=1,x;
   printf("x      x+2      x+4      x+6\n");
   printf("---------------------------\n");
   for(x=1;x<=19;x=x+2)
   {
      printf("%d\t",x  );
      if(x==n+6){
        if(x==19)
        {
            break;
        }
          x=(n+6)-3;
          n=x;
          printf("\n%d\t",x);
      }
        
   }
   return 0;
}












