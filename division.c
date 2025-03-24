// Write a program that reads two numbers and divides the first number by the second number. If division is not possible print "Division is not possible".
// Test Data :
// Input two numbers:
// x: 25
// y: 5
// Expected Output: 5.0

#include<stdio.h>
int main()
{
    int a,b;
    float s;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter first number:");
    scanf("%d",&a);

    if( a%b==0)
    {
        float s= a/b;
        printf("%f",s);
    }    
    else
        printf("Division is not possible");

    return 0 ;    
      
}





