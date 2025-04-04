// Write a C program to demonstrate the difference between predecrementing and postdecrementing using the decrement operator --.
// Sample Output:
// Predecrementing:
// x = 10
// x-- = 10
// x = 9

#include<stdio.h>
int main()
{
   int x=10;
   printf("x = %d\n",x);
   printf("x-- = %d\n",x--);
   printf("x = %d\n",x);
   return 0;
}

  