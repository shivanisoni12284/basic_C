// find range of int float char etc


#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long int n=sizeof(unsigned long int);
    printf("%lu",n);

    float a =  0 ;
    float  b =  pow(2,(n*8))-1;     
    // int a= -(2^((n*8)-1)); 
    // int b= (2^((n*8)-1)) - 1;
    printf("Range of unsigned long int is %f to %f", a ,b);    //Range of int is 0.000000 to 4294967296.000000
   return 0;
}

   