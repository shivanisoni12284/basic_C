// Write a C program to count the number of prime numbers among five integers entered by the user.

#include<stdio.h>
int main()
{
    
    int i=1,count=0,a,b;
    int value;
    while(i<=5)
    {
        printf("Input the number:");
        scanf("%d",&value);
        if(value==2||value==3)
            count++;
        if(value%2!=0 && value%3!=0)    
            count++;
        i++;      
    }         
    printf("Numbers within specified range are:%d\n",count);

    return 0 ;        
}
















