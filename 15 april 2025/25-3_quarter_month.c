// Write a C program to determine the quarter (Q1, Q2, Q3, Q4) of the year from the provided month number.

#include<stdio.h>
int main()
{
    int month;
    printf("enter the month number:");
    scanf("%d",&month);

    if(month==1 && month<=3)
       printf("Quarter 1 ");
    else if(month==4 && month<=6)
       printf("Quarter 2 ");
    else if(month==7 && month<=9)
       printf("Quarter 3 ");
    else 
       printf("Quarter 4 ");
 
    return 0;
}

   















