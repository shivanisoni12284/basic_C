// write a function power (a,b)to calculate the value of a raised to b.

#include<stdio.h>
#include<math.h>
int power();
int main()
{
    int a,b,calc;
    printf("enter first number :");
    scanf("%d",&a);
    printf("enter second number :");
    scanf("%d",&b);
    calc=power(a,b);
    printf("%d raised to the power %d is %d",a,b,calc);
}
int power(int x,int y)
{
    int sum;
    sum=pow(x,y);
    return (sum);
}
