// Write a C program to demonstrate the working of the keyword long. 

// Expected Output :

//  The size of int = 4 bytes                                                           
//  The size of long = 8 bytes                                                          
//  The size of long long = 8 bytes                                                     
//  The size of double = 8 bytes                                                        
//  The size of long double = 16 byte 

#include<stdio.h>
int main()
{
    printf("The size of int = %d bytes\n",sizeof(int));
    printf("The size of long = %d bytes\n",sizeof(long));
    printf("The size of long long = %d bytes\n",sizeof(long long));
    printf("The size of double = %d bytes\n",sizeof(double)); 
    printf("The size of long double = %d bytes\n",sizeof(long double));
   return 0;
}
   