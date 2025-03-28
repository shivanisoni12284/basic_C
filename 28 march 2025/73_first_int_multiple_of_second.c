// Write a C program that reads two integers and checks whether the first integer is a multiple of the second integer.
// Sample Input: 9 3
// Sample Output:
// Input the first integer : Input the second integer:
// 9 is a multiple of 3.

#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two number:");
    scanf("%d %d",&a,&b);
    
    if(a%b==0)
    {
        printf("%d is a multiple of %d",a,b);
    }
    else
    {
        printf("%d is a not multiple of %d",a,b);
    }
    return 0;
}
