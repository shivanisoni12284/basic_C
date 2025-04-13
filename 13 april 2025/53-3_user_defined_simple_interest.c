// Write a C program to calculate simple interest using a user-defined function with input validation.

#include<stdio.h>
int SIcalc(float p,float t,float r)
{
    float SI,amount;
    SI=(p*t*r)/100;
    amount=SI+p;
    printf("amount =%f\n",amount);
    // return (SI,amount);  // this will only give amount
    return(SI);
    return(amount);
}

int main()
{
    
    float r,p,t, SI,amount,calc;
    printf("Enter principle,rate and time:");
    scanf("%f %f %f",&p,&r,&t);
    calc=SIcalc(p,t,r);   
    printf("Simple interest  = %f\n",calc);
    // printf(" = %f\n",amount); 



   return 0;
}




