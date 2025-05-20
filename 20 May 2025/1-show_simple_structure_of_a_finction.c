// Write a program in C to show the simple structure of a function.

// Expected Output :

// The total is :  11  

#include<stdio.h>
void sum();    //function declaration

void sum()     //function definition
{
    int a,b,sum=0;
    printf("enter the two numbers for sum:");
    scanf("%d %d",&a,&b);

    sum=a+b;
    printf("the sum is %d",sum);
}

void main()
{
    sum();      //function calling
}
