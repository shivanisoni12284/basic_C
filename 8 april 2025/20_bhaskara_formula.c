// Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers. Display a message if it is not possible to find the roots.
// Test Data :
// Input the first number(a): 25
// Input the second number(b): 35
// Input the third number(c): 12
// Expected Output:
// Root1 = -0.60000
// Root2 = -0.80000

#include<stdio.h>
#include<math.h>
int main()
{
   

     int a,b,c;
     float calc,s,r;
     printf("input the first number:");
     scanf("%d",&a);
     printf("input the second number:");
     scanf("%d",&b);
     printf("input the third number:");
     scanf("%d",&c);
     calc=sqrt((b*b)-(4*a*c));
     if(calc>b)
     {
        s=(calc-b)/(2*a);
     }
    else
    {
        s=(b-calc)/(2*a);
    }
    printf("Root 1= -%.5f\n",s);
    r=(b+calc)/(2*a);
    printf("Root 2= -%.5f",r);
    return 0;

}
