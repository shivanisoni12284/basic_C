// Write a C program that reads two integers and checks whether they are multiplied or not.
// Test Data :
// Input the first number: 5
// Input the second number: 15
// Expected Output:
// Multiplied!

#include<stdio.h>
int main()
{
    int a,b;
    printf("Input the first number :");
    scanf("%d",&a);
    printf("Input the second number :");
    scanf("%d",&b);
    
    for(int i=2;i<=9;i++)
    {
        if (a%i==0 && b%i==0)
        {
            printf("Multiplied!\n");
            break;
        }
        
    }
    return 0;

}





























