//find range of int float char etc

#include<stdio.h>
#include<math.h>
int main()
{
    int n=sizeof(unsigned short int);
    printf("%hu",n);

    int a = 0 ;
    int b =   pow(2,(n*8)) - 1;      //in my machine size of unsigned short int is 2
    // int a= -(2^((n*8)-1)); 
    // int b= (2^((n*8)-1)) - 1;
    printf("Range of unsigned short int is %d to %d", a ,b);  //Range of unsigned short int is 0 to 65535

    
   return 0;
}
