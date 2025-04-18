// find range of int float char etc


#include<stdio.h>
#include<math.h>
int main()
{
    unsigned int n=sizeof(unsigned int);
    printf("%u",n);

    unsigned int a =  0 ;
    unsigned int  b =  pow(2,(n*8))-1;
    // int a= -(2^((n*8)-1)); 
    // int b= (2^((n*8)-1)) - 1;
    printf("Range of int is %u to %u", a ,b);
   return 0;
}

   