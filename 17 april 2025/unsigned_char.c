//find range of int float char etc


#include<stdio.h>
#include<math.h>
int main()
{
    char n=sizeof(unsigned char);
    printf("%c",n);

    int a = 0 ;
    int b =   pow(2,(n*8)) - 1;
    // int a= -(2^((n*8)-1)); 
    // int b= (2^((n*8)-1)) - 1;
    printf("Range of int is %d to %d", a ,b);
   return 0;
}

   