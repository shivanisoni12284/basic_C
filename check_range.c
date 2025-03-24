// Write a C program that reads an integer and checks the specified range to which it belongs. Print an error message if the number is negative and greater than 80.
// Test Data :
// Input an integer: 15
// Expected Output:
// Range [0, 20]

#include<stdio.h>
int main()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);
    if(n>=0&&n<80)
    {
       if(n>=0&&n<=20)
           printf("Range[0,20]");
       else if(n>=21&&n<=40) 
           printf("Range[21,40]");
        else if(n>=41&&n<=60) 
           printf("Range[41,60]");   
        else if(n>=61&&n<=80) 
           printf("Range[61,80]");     
    }   
    else
        printf("ERROR");

    return 0;

}


























