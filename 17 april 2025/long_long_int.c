// find range of int float char etc


#include<stdio.h>
#include<math.h>
int main()
{
    long int n=sizeof(long long int);
    printf("%lld",n);                              

    long long int a= -(pow(2,((n*8)-1))) ;
    long long int b=   (pow(2,((n*8)-1))) - 1;       
    // int a= -(2^((n*8)-1)); 
    // int b= (2^((n*8)-1)) - 1;
    printf("Range of int is %lld to %lld", a ,b);  //8Range of int is -9223372036854775808 to -9223372036854775808
   return 0;
}