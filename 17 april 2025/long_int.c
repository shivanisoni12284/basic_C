// find range of int float char etc


#include<stdio.h>
#include<math.h>
int main()
{
    long int n=sizeof(long int);
    printf("%ld",n);                              // UP

    long int a= -(pow(2,((n*8)-1))) ;
    long int b=   (pow(2,((n*8)-1))) - 1;       //in my machine size of int is 4
    // int a= -(2^((n*8)-1)); 
    // int b= (2^((n*8)-1)) - 1;
    printf("Range of int is %ld to %ld", a ,b);
   return 0;
}

   