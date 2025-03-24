// Write a C program that reads three floating-point values and checks if it is possible to make a triangle with them. Determine the perimeter of the triangle if the given values are valid.
// Test Data :
// Input the first number: 25
// Input the second number: 15
// Input the third number: 35
// Expected Output:
// Perimeter = 75.0

#include<stdio.h>
int main()
{
    float a,b,c,Pot;
    printf("Input the first number:");
    scanf("%f",&a);
    printf("Input the second number:");
    scanf("%f",&b);
    printf("Input the third number:");
    scanf("%f",&c);
    
    if(a<(b+c) && b<(a+c) && c<(b+a))
        Pot=a+b+c;
        printf ("perimeter = %.2f",Pot);
        
     return 0 ;   
   
}







































