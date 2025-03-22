// Write a C program that accepts three integers and finds the maximum of three.
// Test Data :
// Input the first integer: 25
// Input the second integer: 35
// Input the third integer: 15
// Expected Output:
// Maximum value of three integers: 35

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Input the first integer:");
    scanf("%d",&a);
    printf("Input the second integer:");
    scanf("%d",&b);
    printf("Input the third integer:");
    scanf("%d",&c);
    if (a>b&&b>c)
    {
        if (a>b)
            printf(" Maximum value of three integers: %d",a);
        else
            printf("maximum value of three integers: %d",b);
                
    }
    else
        printf("Maximum value of three integers: %d",c);

    return 0 ;     


}




























