// Write a C program to convert a string to an integer. 

// Test Data and Expected Output :

// Input a number : 1972                                                   
// The value Input is 1972.

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],c = '0';
    printf("enter your value:");
    scanf("%s",&str);
    int result=0;
    int a=strlen(str);
    for(int i=0;i<=a-1;i++)
    {
        int s=str[i]-c;
        result = result*10+s;
    }
    printf("string into int is %d\n",result);
    // printf("string into int is %s\n",str);

    
    return 0;
}