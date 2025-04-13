// Write a C program to compute both simple and compound interest and display the difference between them.


#include<stdio.h>
#include<math.h>
int main()
{
    
    float r,p,t, SI,amount,CI,diff;
    printf("Enter principle,rate and time:");
    scanf("%f %f %f",&p,&r,&t);
    SI=(p*t*r)/100;
    printf("Simple interest = %f\n",SI);

    //for CI
    amount=p*pow((1+(r/100)),t);
    CI=amount-p;
    diff=CI-SI;
    printf("The compound interest is %f\n",CI);
    printf("The difference beteeween compound interest and simple interest =%f\n",diff);

    return 0;
}



