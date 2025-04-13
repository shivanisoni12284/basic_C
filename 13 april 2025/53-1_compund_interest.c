// Write a C program to calculate compound interest iteratively and compare it with simple interest.

#include<stdio.h>
#include<math.h>
int main()
{
    
    float r,p,t, SI,amount,CI,diff,interest,principal;
    printf("Enter principle,rate and time:");
    scanf("%f %f %f",&p,&r,&t);
    SI=(p*t*r)/100;
    printf("Simple interest = %f\n",SI);
    principal=p;

    //for CI
    for(int i=1;i<=t;i++)
    {
        interest=(p*t*r)/100;
        p=p+interest;
        
    }
    CI=p-principal;
    // printf("%f\n",p);
    diff=CI-SI;
    printf("The compound interest is %f\n",CI);
    printf("The difference beteeween compound interest and simple interest =%f\n",diff);

    return 0;
}











