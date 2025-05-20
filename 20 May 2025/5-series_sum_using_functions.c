// Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function.

// Expected Output :

//  The sum of the series is : 34 

#include<stdio.h>
void series();

void series()
{
    int i,n,sum=0,fact=1;
    printf("enter the number :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+(fact/i);
    } 
    printf("The sum of the series is %d",sum);
}

int main()
{
   series();
}

