// Write a C program to convert a string to a double. 
// Test Data and Expected Output :
// Input a number : 25                                                                                          
//  The original number is : 25.000000                                                                           
//  After division by 2 the number is : 12.500000 

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],c = '0';
    printf("enter your value:");
    scanf("%s",&str);
    double result=0;
    int a=strlen(str);
    for(int i=0;i<=a-1;i++)
    {
        int s=str[i]-c;
        result = result*10+s;
    }
    printf("string into int is %f\n",result);
    printf("After division by 2 the number is %f\n",result/2);
    // printf("string into int is %s\n",str);

    
    return 0;
}




















