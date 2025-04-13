// Write a C program to compute simple interest and then determine the total amount payable

#include<stdio.h>
int main()
{

    float r,p,t, SI,amount;
    printf("Enter principle,rate and time:");
    scanf("%f %f %f",&p,&r,&t);
    SI=(p*t*r)/100;
    amount=SI+p;
    printf("Simple interest = %f\n",SI);
    printf("Simple interest = %f\n",amount); 

    return 0;
}

