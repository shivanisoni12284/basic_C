// Write a C program that accepts the principle, rate of interest, and time and calculates simple interest.
// Test Data:
// Input Data: p = 10000, r = 10% , t = 12 year
// Expected Output:
// Input principle, Rate of interest & time to find simple interest:
// Simple interest = 12000

#include<stdio.h>
int main()
{
    int p,t, SI;
    float r;
    printf("Enter principle,rate and time:");
    scanf("%d %f %d",&p,&r,&t);
    SI=(p*t*r)/100;
    printf("Simple interest = %d",SI);

    return 0;

    
}









