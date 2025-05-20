// write a function to calculate the factorial value of any integer entered through the keyboard

#include<stdio.h>
int fact(int);
int main()
{
    int n,calc;
    printf("enter the number :");
    scanf("%d",&n);
    calc=fact(n);
    printf("The factorial value of %d is %d",n,calc);
}

int fact(int a)
{
    int fact=1,i;
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    return (fact);

}