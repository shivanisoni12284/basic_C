//find range of int float char etc

#include<stdio.h>
#include<math.h>
int main()
{
    int n=sizeof(short int);
    printf("%hi",n);

    int a= -(pow(2,((n*8)-1))) ;
    int b=   (pow(2,((n*8)-1))) - 1;       //in my machine size of short int is 2
    // int a= -(2^((n*8)-1)); 
    // int b= (2^((n*8)-1)) - 1;
    printf("Range of short int is %d to %d", a ,b);  //Range of short int is -32768 to 32767
   return 0;
}
