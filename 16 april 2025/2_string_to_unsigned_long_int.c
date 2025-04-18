// Write a C program to convert a string to an unsigned long integer.
// Test Data and Expected Output :
// Input an unsigned number: 25                                            
// Output: 25

#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="-25",c = '0';
    unsigned int result=0;
    int a=strlen(str);
    for(int i=0;i<a-1;i++)
    {
        int s=(str[i]-c)*-1;
        result = result*10+s;
    }
    printf("string into int is %u\n",result);
    printf("string into int is %s\n",str);
    // printf("%s",type(result));
    
    return 0;
}
    