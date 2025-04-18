//find range of int float char etc

#include<stdio.h>
#include<math.h>
int main()
{
    int n=sizeof(int);
    printf("%d",n);

    int a= -(pow(2,((n*8)-1))) ;
    int b=   (pow(2,((n*8)-1))) - 1;       //in my machine size of int is 4
    // int a= -(2^((n*8)-1)); 
    // int b= (2^((n*8)-1)) - 1;
    printf("Range of int is %d to %d", a ,b);
   return 0;
}
